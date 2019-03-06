using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PassView : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("Canvas")]
    private CanvasGroup _canvasGroup;
    [SerializeField, Tooltip("パスボタン")]
    private Button _passButton;
    [SerializeField, Tooltip("キャンセルボタン")]
    private Button _cancelButton;
    #endregion

    #region private field
    private ClientManager _clientManager;
    #endregion

    #region public function
    /// <summary>
    /// 初期設定
    /// </summary>
    public void Init(ClientManager clientManager)
    {
        _clientManager = clientManager;
        // パスボタン
        _passButton.onClick.AddListener(()=>{
            _clientManager.PassTurn();
        });
        // キャンセルボタン
        _cancelButton.onClick.AddListener(()=>{
            Show(false);
        });
    }

    /// <summary>
    /// 表示設定
    /// </summary>
    /// <param name="flg"></param>
    public void Show(bool flg)
    {
        _canvasGroup.alpha          = flg ? 1.0f : 0.0f;
        _canvasGroup.interactable   = flg;
        _canvasGroup.blocksRaycasts = flg;
    }
    #endregion
}
