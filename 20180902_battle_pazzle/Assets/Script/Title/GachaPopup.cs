using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GachaPopup : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("表示管理")]
    private CanvasGroup _canvasGroup;
    [SerializeField, Tooltip("閉じるボタン")]
    private Button _closeButton;
    #endregion

    void Start()
    {
        _closeButton.onClick.AddListener(()=>{
            Show(false);
        });
    }

    #region public function
    /// <summary>
    /// 表示管理
    /// </summary>
    /// <param name="flg"></param>
    public void Show(bool flg)
    {
        StartCoroutine(flg ? Open() : Close());
    }

    /// <summary>
    /// 表示
    /// </summary>
    /// <returns></returns>
    private IEnumerator Open()
    {
        _canvasGroup.interactable   = true;
        _canvasGroup.blocksRaycasts = true;
        while(_canvasGroup.alpha < 1.0f){
            yield return null;
            _canvasGroup.alpha += Time.deltaTime * 2.0f;
        }
        _canvasGroup.alpha = 1.0f;
    }

    /// <summary>
    /// 非表示
    /// </summary>
    /// <returns></returns>
    private IEnumerator Close()
    {
        while(_canvasGroup.alpha > 0.0f){
            yield return null;
            _canvasGroup.alpha -= Time.deltaTime * 2.0f;
        }
        _canvasGroup.alpha          = 0.0f;
        _canvasGroup.interactable   = false;
        _canvasGroup.blocksRaycasts = false;
    }
    #endregion
}
