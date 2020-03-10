using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PanelSkinContent : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("パネル")]
    private Image _panelImage;
    [SerializeField, Tooltip("ボタン")]
    private Button _button;
    #endregion

    #region private field
    private SkinViewManager _skinViewManger;
    private int _skinID;
    private bool _unlockFlg;
    private bool _equipFlg;
    #endregion

    #region Access
    public bool EquipFlg{
        get{return _equipFlg;}
    }
    #endregion

    /// <summary>
    /// 初期設定
    /// </summary>
    /// <param name="skinViewManager"></param>
    /// <param name="skinID"></param>
    /// <param name="unlockFlg"></param>
    /// <param name="equipFlg"></param>
    public void Init(SkinViewManager skinViewManager, int skinID, bool unlockFlg, bool equipFlg)
    {
        _skinViewManger = skinViewManager;
        _skinID    = skinID;
        _unlockFlg = unlockFlg;
        _equipFlg  = equipFlg;
        // 解放済み
        if(_unlockFlg){
            _panelImage.sprite = _skinViewManger.GetPanelSprite(_skinID);
        }
        // 着用中
        if(_equipFlg){
            _button.image.color = Color.white;
            _panelImage.color   = Color.magenta;
        }
        _button.onClick.AddListener(()=>{
            Select();
        });
    }

    /// <summary>
    /// 選択
    /// </summary>
    private void Select()
    {
        if(_equipFlg || !_unlockFlg) return;
        _button.image.color = Color.white;
        _panelImage.color   = Color.magenta;
        _skinViewManger.SetEquip(_skinID);
        _equipFlg = true;
    }

    /// <summary>
    /// 着用解除
    /// </summary>
    public void Remove()
    {
        _equipFlg           = false;
        _button.image.color = Color.gray;
        _panelImage.color   = Color.magenta * 0.5f;
    }

    public void Unlock()
    {
        _unlockFlg = true;
        _panelImage.sprite = _skinViewManger.GetPanelSprite(_skinID);
    }
}
