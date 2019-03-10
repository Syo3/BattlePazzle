using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SinglePlayManager : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("AI管理")]
    private AIManager _aiManager;
    [SerializeField, Tooltip("奥ブロックプレハブ")]
    private GameObject _holdBlockPrefab;
    #endregion

    #region private field
    private MainManager _mainManager;
    private List<HoldBlockNPC> _holdBlockList;
    #endregion

    #region access
    public MainManager MainManager{
        get{return _mainManager;}
    }
    #endregion

    #region public function
    /// <summary>
    /// 初期設定
    /// </summary>
    /// <param name="mainManager"></param>
    public void Init(MainManager mainManager)
    {
        _mainManager = mainManager;
        // エリア管理作成とか 表示は共通だから面倒なところ
        


        

        _aiManager.Init(this);
        // 所持ブロック
        _holdBlockList = new List<HoldBlockNPC>();
        for(var i = 0; i < 3; ++i){

            var holdBlock = Instantiate(_holdBlockPrefab).GetComponent<HoldBlockNPC>();
            holdBlock.Init(this);
            _holdBlockList.Add(holdBlock);            
        }
    }
    #endregion
}
