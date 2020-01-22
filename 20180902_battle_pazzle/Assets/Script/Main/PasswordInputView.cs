using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PasswordInputView : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("CanvasGroup")]
    private CanvasGroup _canvasGroup;
    [SerializeField, Tooltip("入力ボックス")]
    private TMPro.TMP_InputField _textInputField;
    [SerializeField, Tooltip("決定ボタン")]
    private Button _executeButton;
    [SerializeField, Tooltip("パスワードキャンセルボタン")]
    private Button _passwordCancelButton;
    [SerializeField, Tooltip("ボタン管理　パスワードOKボタン")]
    private ButtonManager _passwordOkButtonMaanager;
    [SerializeField, Tooltip("ボタン管理　パスワードキャンセルボタン")]
    private ButtonManager _passwordCancelButtonManager;
    [SerializeField, Tooltip("ボタン管理　開始ボタン")]
    private ButtonManager _startButtonManager;
    [SerializeField, Tooltip("ボタン管理　ルームマッチボタン")]
    private ButtonManager _roomMatchButtonManager;
    #endregion

    #region private field
    #endregion

    #region public function
    public void Init(Title.TitleSceneManager titleSceneManager)
    {
        // パスワードOKボタン
        _executeButton.onClick.AddListener(()=>{
            // コンテナ
            var password = _textInputField.text;
            Debug.Log(password);
        	var sceneContainer = Instantiate(titleSceneManager.SceneContainer).GetComponent<SceneContainer>();
            sceneContainer.Password = password;
        	DontDestroyOnLoad(sceneContainer);
            titleSceneManager.StartGame();
        });
        // パスワードキャンセルボタン
        _passwordCancelButton.onClick.AddListener(()=>{
            Show(false);
        });
    }

    /// <summary>
    /// 表示
    /// </summary>
    /// <param name="flg"></param>
    public void Show(bool flg)
    {
        StartCoroutine( flg ? "FadeInCoroutine" : "FadeOutCoroutine" );
    }
    #endregion

    #region private function
    private IEnumerator FadeInCoroutine()
    {
        _startButtonManager.FadeOut();
        _roomMatchButtonManager.FadeOut();
        while(_canvasGroup.alpha < 1.0f){
            yield return null;
            _canvasGroup.alpha += 0.05f;
        }
        _canvasGroup.alpha = 1.0f;
        _passwordOkButtonMaanager.FadeIn();
        _passwordCancelButtonManager.FadeIn();
        _canvasGroup.interactable   = true;
        _canvasGroup.blocksRaycasts = true;
    }

    private IEnumerator FadeOutCoroutine()
    {
        _passwordOkButtonMaanager.FadeOut();
        _passwordCancelButtonManager.FadeOut();
        while(_canvasGroup.alpha > 0.0f){
            yield return null;
            _canvasGroup.alpha -= 0.05f;
        }
        _canvasGroup.alpha          = 0.0f;
        _canvasGroup.interactable   = false;
        _canvasGroup.blocksRaycasts = false;
        _startButtonManager.FadeIn();
        _roomMatchButtonManager.FadeIn();
    }
    #endregion
}
