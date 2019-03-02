using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class HoldBlock : MonoBehaviour, IPointerClickHandler, IDragHandler, IPointerDownHandler, IEndDragHandler {

    #region SerializeField
    [SerializeField, Tooltip("表示用親要素")]
    private GameObject _blockParent;
    #endregion

    #region private field
    private MainManager _mainManager;
    private List<List<PlacementBlock>> _blockList;
    private List<List<int>> _sendBlockContainer;
    private Vector3 _defaultPosition;
    private int _blockGroupID;
    #endregion

    #region access
    public int BlockGroupID{
        get{return _blockGroupID;}
    }
    #endregion

    void Awake()
    {
        _blockGroupID = 0;
    }

    #region public function
    /// <summary>
    /// 初期設定
    /// </summary>
    /// <param name="mainManager"></param>
    public void Init(MainManager mainManager)
    {
        _mainManager     = mainManager;
        _defaultPosition = transform.position;
        _blockGroupID    = 0;
        Reset();
    }

    /// <summary>
    /// クリック ドラッグ終了時
    /// </summary>
    /// <param name="eventData"></param>
    public void OnPointerClick (PointerEventData eventData)
    {
        if(!_mainManager.ClientManager.CheckNowTurn()){
            return;
        }
        var x = ((transform.localPosition.x - Common.Const.START_POS_X) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X;
        var y = ((transform.localPosition.y - Common.Const.START_POS_Y) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y;
        // 計算して再配置
        transform.localPosition = new Vector3(x, y, 0.0f);
        SendBlock();
        _blockParent.transform.localPosition = Vector3.zero;
        _blockParent.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);

    }

    public void OnEndDrag(PointerEventData eventData)
    {
        // if(!_mainManager.ClientManager.CheckNowTurn()){
        //     return;
        // }
        // var x = ((transform.localPosition.x - Common.Const.START_POS_X) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X;
        // var y = ((transform.localPosition.y - Common.Const.START_POS_Y) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y;
        // // 計算して再配置
        // transform.localPosition = new Vector3(x, y, 0.0f);
        // SendBlock();
    }

    /// <summary>
    /// ドラッグ
    /// </summary>
    /// <param name="eventData"></param>
    public void OnDrag ( PointerEventData eventData )
        {
        if(!_mainManager.ClientManager.CheckNowTurn()){
            return;
        }
        // マウスの位置に動かす
        var pos = Camera.main.ScreenToWorldPoint ( Input.mousePosition );
        pos.z = 0;
        transform.position = pos;
        // 計算して再配置
        var x = (int)((transform.localPosition.x - Common.Const.START_POS_X) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X;
        var y = (int)((transform.localPosition.y - Common.Const.START_POS_Y) / Common.Const.BLOCK_SIZE) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y;
        transform.localPosition = new Vector3(x, y, 0.0f);
    }

    /// <summary>
    /// 押された瞬間
    /// </summary>
    /// <param name="eventData"></param>
    public void OnPointerDown(PointerEventData eventData)
    {
        if(!_mainManager.ClientManager.CheckNowTurn()){
            return;
        }
        for(var i = 0; i < _blockList.Count; ++i){

            for(var j = 0; j < _blockList[i].Count; ++j){
                _blockList[i][j].SetDragColor();
            }
        }
        _blockParent.transform.localPosition = new Vector3(0.0f, Common.Const.BLOCK_SIZE * 3.0f, 0.0f);
        _blockParent.transform.localScale = Vector3.one;


    }
    #endregion

    #region private function
    /// <summary>
    /// 初期化
    /// </summary>
    public void Reset()
    {
        ResetBlockList();
        ResetBlockContainer();
        transform.position = _defaultPosition;
    }

    /// <summary>
    /// 座標初期化
    /// </summary>
    private void PositionReset()
    {
        ResetBlockContainer();
        transform.position = _defaultPosition;
        for(var i = 0; i < _blockList.Count; ++i){

            for(var j = 0; j < _blockList[i].Count; ++j){
                _blockList[i][j].SetPlacementColor();
            }
        }
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
        // ブロック選択
        var holdBlockList = _mainManager.ClientManager.HoldBlockList;
        var blockGroupID  = 0;
        while(true){

            blockGroupID = _mainManager.GetBlockGroupData();
            var errorFlg     = false;
            for(var i = 0; i < holdBlockList.Count; ++i){

                if(blockGroupID == holdBlockList[i].BlockGroupID){
                    errorFlg = true;
                    break;
                }
            }
            if(!errorFlg){
                break;
            }
            // リストを進める
            _mainManager.GetBlockData();
        }
        _blockGroupID = blockGroupID;
        var blcokData = _mainManager.GetBlockData();

        // 生成
        _blockList    = new List<List<PlacementBlock>>();


        _blockParent.transform.localScale = Vector3.one;
        for(var i = 0; i < blcokData.Count; ++i){

            _blockList.Add(new List<PlacementBlock>());
            for(var j = 0; j < blcokData[i].Count;++j){

                if(blcokData[i][j] == 1){
                    var block = Instantiate(_mainManager.PlacementBlockPrefab, new Vector3(j * Common.Const.BLOCK_SIZE - Common.Const.BLOCK_SIZE * 2.0f, i * Common.Const.BLOCK_SIZE - Common.Const.BLOCK_SIZE * 2.0f, 0.0f) * _mainManager.WorldTransform.localScale.x + _blockParent.transform.position, Quaternion.identity, _blockParent.transform).GetComponent<PlacementBlock>();
                    block.Init(j, i, _mainManager.ClientManager.PlayerTypeint);
                    _blockList[i].Add(block);
                }
            }
        }
        _blockParent.transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
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
        var areaList     = _mainManager.ClientManager.AreaList;
        var placementFlg = false;
        // ブロック配置後のリスト作成
        var baseX = (int)Mathf.Round((transform.localPosition.x - Common.Const.START_POS_X) / Common.Const.BLOCK_SIZE);
        var baseY = (int)Mathf.Round((transform.localPosition.y + Common.Const.BLOCK_SIZE * 3.0f - Common.Const.START_POS_Y) / Common.Const.BLOCK_SIZE);		
        Debug.Log(baseX);
        Debug.Log(baseY);
        for(var i = 0; i < _blockList.Count; ++i){
            
            for(var j = 0; j < _blockList[i].Count; ++j){

                var x = (int)Mathf.Round(_blockList[i][j].PositionX - Common.Const.NUM_WIDTH / 2.0f / 2.0f);
                var y = (int)Mathf.Round(_blockList[i][j].PositionY - Common.Const.NUM_HEIGHT / 2.0f / 2.0f);
                // 配置できるか
                if( baseX + x < 0 || baseX + x > Common.Const.NUM_WIDTH  - 1 ||
                    baseY + y < 0 || baseY + y > Common.Const.NUM_HEIGHT - 1 ||
                    areaList[baseY+y][baseX+x].Block != null){
                    PositionReset();
                    return;
                }
                // 一つでも配置可能エリアに繋がっているか
                if(areaList[baseY+y][baseX+x].PlacementFlg){
                    placementFlg = true;
                }
                _sendBlockContainer[baseY+y][baseX+x] = _mainManager.ClientManager.PlayerTypeint;
            }
        }
        // 配置エリアに置けていない
        if(!placementFlg){
            PositionReset();
            return;
        }
        _mainManager.ClientManager.UpdateBlockList(_sendBlockContainer);
        Reset();
    }
    #endregion
}
