using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class HoldBlock : MonoBehaviour, IPointerClickHandler, IDragHandler {

	#region private field
	private MainManager _mainManager;
	private List<List<PlacementBlock>> _blockList;
	private List<List<int>> _sendBlockContainer;
	private Vector3 _defaultPosition;
	#endregion

	#region public function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="mainManager"></param>
	public void Init(MainManager mainManager)
	{
		_mainManager     = mainManager;
		_defaultPosition = transform.position;
		Reset();
	}

	/// <summary>
	/// クリック ドラッグ終了時
	/// </summary>
	/// <param name="eventData"></param>
	public void OnPointerClick (PointerEventData eventData)
	{
		var x = (int)((transform.localPosition.x - Common.Const.START_POS_X) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X;
		var y = (int)((transform.localPosition.y - Common.Const.START_POS_Y) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y;
		// 計算して再配置
		transform.localPosition = new Vector3(x, y, 0.0f);
		SendBlock();
	}

	/// <summary>
	/// ドラッグ
	/// </summary>
	/// <param name="eventData"></param>
    public void OnDrag ( PointerEventData eventData )
    {
        // マウスの位置に動かす
        var pos = Camera.main.ScreenToWorldPoint ( Input.mousePosition );
        pos.z = 0;
        transform.position = pos;
		// 計算して再配置
		var x = (int)((transform.localPosition.x - Common.Const.START_POS_X) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X;
		var y = (int)((transform.localPosition.y - Common.Const.START_POS_Y) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y;
		transform.localPosition = new Vector3(x, y, 0.0f);
    }
	#endregion

	#region private function
	/// <summary>
	/// 初期化
	/// </summary>
	private void Reset()
	{
		ResetBlockList();
		ResetBlockContainer();
		transform.position = _defaultPosition;
	}

	/// <summary>
	/// ブロックリストを初期化する
	/// </summary>
	private void ResetBlockList()
	{
		// 削除
		if(_blockList != null){
			for(var i = 0; i < _blockList.Count; ++i){
				for(var j = 0; j < _blockList[i].Count; ++j){
					Destroy(_blockList[i][j].gameObject);
				}
			}
		}
		// 生成
		_blockList    = new List<List<PlacementBlock>>();
		var key       = Random.Range(0, _mainManager.HoldBlockData.Count);
		var blcokData = _mainManager.HoldBlockData[key];
		for(var i = 0; i < blcokData.Count; ++i){

			_blockList.Add(new List<PlacementBlock>());
			for(var j = 0; j < blcokData[i].Count;++j){

				if(blcokData[i][j] == 1){
					var block = Instantiate(_mainManager.PlacementBlockPrefab, new Vector3(j * Common.Const.BLOCK_SIZE - Common.Const.BLOCK_SIZE_HALF * (blcokData.Count-1), i * Common.Const.BLOCK_SIZE - Common.Const.BLOCK_SIZE_HALF * (blcokData.Count-1), 0.0f) * 0.4f + transform.position, Quaternion.identity, transform).GetComponent<PlacementBlock>();
					block.Init(j, i, _mainManager.ClientManager.PlayerType);
					_blockList[i].Add(block);
				}
			}
		}
	}

	/// <summary>
	/// 送信用ブロックコンテナを初期化
	/// </summary>
	private void ResetBlockContainer()
	{
		// エリア数分のリスト作成
		if(_sendBlockContainer != null){
			for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){
				for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){
					_sendBlockContainer[i][j] = 0;
				}
			}
		}
		else{
			_sendBlockContainer = new List<List<int>>();
			for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

				_sendBlockContainer.Add(new List<int>());
				for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){
					_sendBlockContainer[i].Add(0);
				}
			}
		}
	}

	/// <summary>
	/// ブロックの配置送信
	/// </summary>
	private void SendBlock()
	{
		var baseX = (int)((transform.localPosition.x - Common.Const.START_POS_X) / Common.Const.BLOCK_SIZE);
		var baseY = (int)((transform.localPosition.y - Common.Const.START_POS_Y) / Common.Const.BLOCK_SIZE);		
		for(var i = 0; i < _blockList.Count; ++i){
			
			for(var j = 0; j < _blockList[i].Count; ++j){

				var x = _blockList[i][j].PositionX - Common.Const.NUM_WIDTH / 2 / 2;
				var y = _blockList[i][j].PositionY - Common.Const.NUM_HEIGHT / 2 / 2;
				if( baseX + x < 0 || baseX + x > Common.Const.NUM_WIDTH  - 1 ||
					baseY + y < 0 || baseY + y > Common.Const.NUM_HEIGHT - 1){
					continue;
				}
				_sendBlockContainer[baseY+y][baseX+x] = _mainManager.ClientManager.PlayerType;
			}
		}
		_mainManager.ClientManager.UpdateBlockList(_sendBlockContainer);
		Reset();
	}

	#endregion
}
