using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HoldBlockNPC : MonoBehaviour {

    #region private field
    private SinglePlayManager _singlePlayManager;
    private List<List<int>> _sendBlockContainer;
    private List<List<int>> _blockData;
    private int _blockGroupID;
    #endregion

    #region access
    public List<List<int>> BlockData{
        get{return _blockData;}
    }
    public int BlockGroupID{
        get{return _blockGroupID;}
    }
    #endregion

    /// <summary>
    /// 初期設定
    /// </summary>
    public void Init(SinglePlayManager singlePlayManager)
    {
        _singlePlayManager = singlePlayManager;
        Reset();
    }

    /// <summary>
    /// 初期化
    /// </summary>
    private void Reset()
    {
        ResetBlockList();
        ResetBlockContainer();
    }

    /// <summary>
    /// 新しいブロックを選出
    /// </summary>
    private void ResetBlockList()
    {
        // ブロック選択
        var holdBlockList = _singlePlayManager.MainManager.ClientManager.HoldBlockList;
        var blockGroupID  = 0;
        while(true){

            blockGroupID = _singlePlayManager.MainManager.GetBlockGroupData();
            var errorFlg = false;
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
            _singlePlayManager.MainManager.GetBlockData();
        }
        _blockGroupID = blockGroupID;
        //var blcokData = _singlePlayManager.MainManager.GetBlockData();
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
}
