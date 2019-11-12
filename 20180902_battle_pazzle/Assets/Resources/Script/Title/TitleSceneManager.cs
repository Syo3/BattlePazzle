using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

namespace Title{
    
    public class TitleSceneManager : MonoBehaviour {

        #region SerializeField
        [SerializeField, Tooltip("シーン遷移用コンテナプレハブ")]
        private GameObject _sceneContainer;
        [SerializeField, Tooltip("開始ボタン")]
        private Button _startButton;
        [SerializeField, Tooltip("開始ボタン")]
        private Button _startButtonDebug;
        [SerializeField, Tooltip("フェード管理")]
        private FadeManager _fadeManager;
        [SerializeField, Tooltip("メニュー画面")]
        private CanvasGroup _menuView;
        [SerializeField, Tooltip("メニューボタン")]
        private Button _menuButton;
        [SerializeField, Tooltip("名前入力エリア")]
        private NameArea _nameArea;
        [SerializeField, Tooltip("Logoアニメーター")]
        private Animator _logoAnimator;
        [SerializeField, Tooltip("Logoパネル")]
        private List<LogoPanel> _logoPanelList;
        [SerializeField, Tooltip("パスワード入力ビュー")]
        private PasswordInputView _passwordView;
        [SerializeField, Tooltip("プライバシーポリシーリンク")]
        private Button _privacyPolicyButton;
        #endregion

        #region access
        public GameObject SceneContainer{
            get{return _sceneContainer;}
        }
        #endregion

        void Start()
        {
            _nameArea.Init();
            _passwordView.Init(this);
            // playerpref 確認
            Debug.Log(PlayerPrefs.GetString(Common.Const.PLAYER_NAME_KEY, "player"));
            // シーンコンテナ取得
            var sceneContainer = FindObjectOfType<SceneContainer>();
            if(sceneContainer == null){
                sceneContainer = Instantiate(_sceneContainer).GetComponent<SceneContainer>();
                DontDestroyOnLoad(sceneContainer);
            }
            _fadeManager.SetCallBack(()=>{
                _logoAnimator.Play("TitleAnimation", 0, 0.0f);
                StartCoroutine( CheckLogoAnimation() );
            });
            // フェードイン
            StartCoroutine(_fadeManager.FadeIn());
            // 開始 通常
            _startButton.onClick.AddListener(()=>{
                sceneContainer.DebugFlg = false;
                StartGame();
            });
            // ルームマッチ
            _startButtonDebug.onClick.AddListener(()=>{
                _passwordView.Show(true);
            });



            // メニューボタン
            _menuButton.onClick.AddListener(()=>{
                _nameArea.Show(true);
            });
            // プライバシーポリシー
            _privacyPolicyButton.onClick.AddListener(()=>{
                Application.OpenURL("http://syo883.xsrv.jp/index.php");
            });
        }

        /// <summary>
        /// Mainシーン遷移
        /// </summary>
        public void StartGame()
        {
            _startButton.interactable      = false;
            _startButtonDebug.interactable = false;
            _fadeManager.SetCallBack(()=>{
                SceneManager.LoadScene("Main");
            });
            StartCoroutine(_fadeManager.FadeOut());
        }

        private IEnumerator CheckLogoAnimation()
        {
            yield return null;
            var info = _logoAnimator.GetCurrentAnimatorStateInfo(0);
            while(info.normalizedTime < 1.0f){
                yield return null;
                info = _logoAnimator.GetCurrentAnimatorStateInfo(0);
            }
            for(var i = 0; i < _logoPanelList.Count; ++i){
                _logoPanelList[i].PlayAnimation();
            }
        }
    }
}