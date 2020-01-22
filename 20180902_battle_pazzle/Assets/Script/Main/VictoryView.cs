using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class VictoryView : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("canvas group")]
    private CanvasGroup _canvasGroup;
    [SerializeField, Tooltip("勝利テキスト")]
    private TMPro.TextMeshProUGUI _victoryText;
    [SerializeField, Tooltip("タイトルボタン")]
    private Button _titleButton;
    [SerializeField, Tooltip("再マッチボタン")]
    private Button _retryButton;
    [SerializeField, Tooltip("")]
    private CanvasGroup _buttonCanvasGroup;
    #endregion

    #region private field
    private MainManager _mainManager;
    #endregion

    #region private function
    /// <summary>
    /// 初期設定
    /// </summary>
    public void Init(MainManager mainManager)
    {
        _mainManager = mainManager;
        // タイトルボタン
        _titleButton.onClick.AddListener(()=>{
            _mainManager.FadeManager.SetCallBack(()=>{
    			UnityEngine.SceneManagement.SceneManager.LoadScene("Title");
            });
            StartCoroutine(_mainManager.FadeManager.FadeOut());
        });
        // 再マッチボタン
        _retryButton.onClick.AddListener(()=>{
            _mainManager.FadeManager.SetCallBack(()=>{
                // コンテナ保存
                _mainManager.CreateContainer();
    			UnityEngine.SceneManagement.SceneManager.LoadScene("Main");
            });
            StartCoroutine(_mainManager.FadeManager.FadeOut());
        });
    }

    /// <summary>
    /// 勝敗表示
    /// </summary>
    /// <param name="victoryString"></param>
    public void SetContent(string victoryString)
    {
        _victoryText.text           = victoryString;
        _canvasGroup.alpha          = 1.0f;
        _canvasGroup.interactable   = true;
        _canvasGroup.blocksRaycasts = true;
        StartCoroutine(ButtonShowWait());
    }
    #endregion

    #region private function
    private IEnumerator ButtonShowWait()
    {
        yield return new WaitForSeconds(1.5f);
        // 広告判定
        var ads_count = PlayerPrefs.GetInt("ads_count", 0);
        if(ads_count > 1){
            // TODO: 乱数ないから必ず表示されるーよ
            #if UNITY_ANDROID || UNITY_IOS
            _mainManager.AdsManager.ShowRewardedAd();
            #endif
            PlayerPrefs.SetInt("ads_count", 0);
        }
        _buttonCanvasGroup.alpha          = 1.0f;
        _buttonCanvasGroup.interactable   = true;
        _buttonCanvasGroup.blocksRaycasts = true;
    }
    #endregion
}
