using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelResourceManager : MonoBehaviour {

    #region SerializeField
    [SerializeField]
    private List<Sprite> _panelSpriteList;
    #endregion

    #region private field
    private int _panelID;
    #endregion

    public int PanelID{
        get{return _panelID;}
    }

    void Start()
    {
        _panelID = PlayerPrefs.GetInt(Common.Const.NOW_PANEL_ID, 0);
    }

    /// <summary>
    /// パネルスプライト取得
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    public Sprite GetSprite(int index){
        
        if(_panelSpriteList.Count <= index) return null;
        return _panelSpriteList[index];
    }

    /// <summary>
    /// 自分のパネルスプライト取得
    /// </summary>
    /// <returns></returns>
    public Sprite GetPlayerSprite()
    {
        return _panelSpriteList[_panelID];
    }
}
