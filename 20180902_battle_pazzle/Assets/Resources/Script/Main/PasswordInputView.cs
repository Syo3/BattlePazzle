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
    // 戻るボタンいるよな
    #endregion

    #region private field
    #endregion

    #region public function
    public void Init(Title.TitleSceneManager titleSceneManager)
    {
        _executeButton.onClick.AddListener(()=>{
            // コンテナ
            var password = _textInputField.text;
            Debug.Log(password);
        	var sceneContainer = Instantiate(titleSceneManager.SceneContainer).GetComponent<SceneContainer>();
            sceneContainer.Password = password;
        	DontDestroyOnLoad(sceneContainer);
            titleSceneManager.StartGame();
        });
    }

    public void Show(bool flg)
    {
        _canvasGroup.alpha = flg ? 1.0f : 0.0f;
        _canvasGroup.interactable = flg;
        _canvasGroup.blocksRaycasts = flg;
    }
    #endregion
}
