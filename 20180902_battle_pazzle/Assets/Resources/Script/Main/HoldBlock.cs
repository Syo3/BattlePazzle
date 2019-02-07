using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class HoldBlock : MonoBehaviour, IPointerClickHandler, IDragHandler {

	#region SerializeField
//	[SerializeField, Tooltip("ブロックリスト")]
//	private List<Block> _blockList;
	#endregion

	#region private field
	private MainManager _mainManager;
	private List<List<int>> _blcokData;
	private List<List<Block>> _blockList;
	#endregion


	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="mainManager"></param>
	public void Init(MainManager mainManager)
	{
		_blockList = new List<List<Block>>();
		_mainManager = mainManager;
		var key = Random.Range(0, _mainManager.HoldBlockData.Count);
		_blcokData = _mainManager.HoldBlockData[key];
		for(var i = 0; i < _blcokData.Count; ++i){

			_blockList.Add(new List<Block>());
			for(var j = 0; j < _blcokData[i].Count;++j){

				if(_blcokData[i][j] == 1){
					var block = Instantiate(_mainManager.BlockPrefab, new Vector3(j * Common.Const.BLOCK_SIZE - Common.Const.BLOCK_SIZE_HALF * (_blcokData.Count-1), i * Common.Const.BLOCK_SIZE - Common.Const.BLOCK_SIZE_HALF * (_blcokData.Count-1), 0.0f) * 0.4f + transform.position, Quaternion.identity, transform).GetComponent<Block>();
					Debug.Log(block.transform.position);
					_blockList[i].Add(block);
				}
			}
		}
	}

	/// <summary>
	/// クリック ドラッグ終了時
	/// </summary>
	/// <param name="eventData"></param>
	public void OnPointerClick (PointerEventData eventData)
	{
		Debug.Log((int)(transform.localPosition.x / Common.Const.BLOCK_SIZE));
		Debug.Log((int)(transform.localPosition.x / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE);

		var x = (int)((transform.localPosition.x - Common.Const.START_POS_X) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X;
		var y = (int)((transform.localPosition.y - Common.Const.START_POS_Y) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y;
		// 計算して再配置
		// var x = (int)(transform.localPosition.x / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE;
		// var y = (int)(transform.localPosition.y / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE;
		transform.localPosition = new Vector3(x, y, 0.0f);
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

		var x = (int)((transform.localPosition.x - Common.Const.START_POS_X) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X;
		var y = (int)((transform.localPosition.y - Common.Const.START_POS_Y) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y;
		// 計算して再配置
		// var x = (int)(transform.localPosition.x / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE;
		// var y = (int)(transform.localPosition.y / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE;
		transform.localPosition = new Vector3(x, y, 0.0f);

    }
}
