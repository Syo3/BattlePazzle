using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Title{

    public class NameArea : MonoBehaviour {

        #region SerializeField
        [SerializeField, Tooltip("名前入力")]
        private TMPro.TMP_InputField _nameInput;
        // [SerializeField, Tooltip("決定ボタン")]
        // private Button _executeButton;
        [SerializeField, Tooltip("閉じるボタン")]
        private Button _closeButton;
        [SerializeField, Tooltip("キャンバス")]
        private CanvasGroup _canvasGroup;

        // [SerializeField, Tooltip("ボタン管理　パスワードOKボタン")]
        // private ButtonManager _passwordOkButtonMaanager;
        [SerializeField, Tooltip("ボタン管理　パスワードキャンセルボタン")]
        private ButtonManager _passwordCancelButtonManager;
        [SerializeField, Tooltip("ボタン管理　開始ボタン")]
        private ButtonManager _startButtonManager;
        [SerializeField, Tooltip("ボタン管理　ルームマッチボタン")]
        private ButtonManager _roomMatchButtonManager;
        #endregion

        #region public function
        /// <summary>
        /// 初期設定
        /// </summary>
        public void Init()
        {
            _nameInput.text = PlayerPrefs.GetString(Common.Const.PLAYER_NAME_KEY, "player");
            // 決定ボタン
            // _executeButton.onClick.AddListener(()=>{
            //     Debug.Log(_nameInput.text);
            //     PlayerPrefs.SetString(Common.Const.PLAYER_NAME_KEY, _nameInput.text);
            // });

            // 閉じるボタン
            _closeButton.onClick.AddListener(()=>{
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


        /// <summary>
        /// プレイヤー名保存　テキストボックスが変更された場合呼び出し
        /// </summary>
        public void SavePlayerName()
        {
            PlayerPrefs.SetString(Common.Const.PLAYER_NAME_KEY, _nameInput.text);
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
            //_passwordOkButtonMaanager.FadeIn();
            _passwordCancelButtonManager.FadeIn();
            _canvasGroup.interactable   = true;
            _canvasGroup.blocksRaycasts = true;
        }

        private IEnumerator FadeOutCoroutine()
        {
            //_passwordOkButtonMaanager.FadeOut();
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
}