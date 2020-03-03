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
        [SerializeField, Tooltip("サウンド設定")]
        private SoundSettingsManager _soundSettingsManager;
        [SerializeField, Tooltip("ポストプロセス")]
        private UnityEngine.Rendering.PostProcessing.PostProcessVolume _postProcessVolume;
        [SerializeField, Tooltip("ポストプロセス")]
        private UnityEngine.Rendering.PostProcessing.PostProcessLayer _postProcessLayer;
        [SerializeField, Tooltip("ライトモードボタン")]
        private Button _lightModeButton;
        [SerializeField, Tooltip("ライトモードボタンハンドル")]
        private Image _lightModeButtonHandle;
        [SerializeField, Tooltip("テキスト")]
        private TMPro.TextMeshProUGUI _lightModeText;
        [SerializeField, Tooltip("レート表示")]
        private TMPro.TextMeshProUGUI _rateText;
        [SerializeField, Tooltip("タップ管理")]
        private GameObject _tapManagerPrefab;
        [SerializeField, Tooltip("ムービー管理")]
        private MovieManager _movieManager;
        [SerializeField, Tooltip("チュートリアルボタン")]
        private Button _tutorialButton;
        #endregion

        private bool _lightModeFlg;
        private Coroutine _lightModeCoroutine;

        #region access
        public GameObject SceneContainer{
            get{return _sceneContainer;}
        }
        #endregion

        void Start()
        {
            _nameArea.Init();
            _passwordView.Init(this);
            _soundSettingsManager.Init();
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
                Application.OpenURL("http://syo883.xsrv.jp/paneon/privacypolicy/");
            });
            // ライトモード
            _lightModeFlg                = PlayerPrefs.GetInt(Common.Const.LIGHT_MODE_KEY, 1) == 1;
            _postProcessLayer.enabled    = _lightModeFlg;
            _postProcessVolume.enabled   = _lightModeFlg;
            _lightModeButtonHandle.rectTransform.anchoredPosition = _lightModeFlg ? new Vector3(-22.9f, 0.0f, 0.0f) : new Vector3(22.9f, 0.0f, 0.0f);
            _lightModeButtonHandle.color = _lightModeFlg ? Color.white : Color.magenta;
            _lightModeButton.image.color = _lightModeFlg ? Color.gray  : Color.magenta * 0.8f;
            _lightModeText.text          = _lightModeFlg ? "OFF" : "ON";
            _lightModeText.alignment     = _lightModeFlg ? TMPro.TextAlignmentOptions.MidlineRight : TMPro.TextAlignmentOptions.MidlineLeft;
            _lightModeButton.onClick.AddListener(()=>{

                if(_lightModeCoroutine != null) return;
                _lightModeFlg              = !_lightModeFlg;
                _postProcessLayer.enabled  = _lightModeFlg;
                _postProcessVolume.enabled = _lightModeFlg;
                PlayerPrefs.SetInt(Common.Const.LIGHT_MODE_KEY, _lightModeFlg ? 1 : 0);
                _lightModeCoroutine = StartCoroutine(SetLightModeEffect());
            });
            // レート
            _rateText.text = PlayerPrefs.GetString(Common.Const.PLAYER_RATE_KEY, "1500");
            // タップ管理
            if(GameObject.Find("TapManager(Clone)") == null){
                DontDestroyOnLoad(Instantiate(_tapManagerPrefab));
            }
            // チュートリアルもう一回みるボタン
            _tutorialButton.onClick.AddListener(()=>{
                _movieManager.Init(()=>{
                    // チュートリアル閲覧保存
                    _movieManager.Close();
                });

            });
            var tutorialFlg = PlayerPrefs.GetInt(Common.Const.TUTORIAL_PLAY_KEY, 0);
            if(tutorialFlg == 0) _tutorialButton.gameObject.SetActive(false);

            //PlayerPrefs.DeleteAll();

            // チュートリアル
            TutorialCheck();
        }

        void Update()
        {
            // バックキー
            if(Input.GetKeyDown(KeyCode.Escape)){
                Application.Quit();
                return;
            }
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

        /// <summary>
        /// ロゴアニメーション
        /// </summary>
        /// <returns></returns>
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

        /// <summary>
        /// ライトモード切り替えアニメーション
        /// </summary>
        /// <returns></returns>
        private IEnumerator SetLightModeEffect()
        {
            // 目標値設定
            var targetX     = _lightModeFlg ? -22.9f : 22.9f;
            var startX      = _lightModeFlg ? 22.9f  : -22.9f;
            var targetAngle = _lightModeFlg ? 180.0f : 0.0f;
            var startAngle  = _lightModeFlg ? 0.0f   : 180.0f;
            var time        = 0.0f;
            var checkTime   = 0.3f;
            _lightModeButtonHandle.rectTransform.anchoredPosition = new Vector2(Mathf.Lerp(startX, targetX, time / checkTime), 0.0f);
            _lightModeButtonHandle.rectTransform.eulerAngles      = new Vector3(0.0f, 0.0f, Mathf.Lerp(startAngle, targetAngle, time / checkTime));
            while(time < checkTime){

                yield return null;
                time += Time.deltaTime;
                _lightModeButtonHandle.rectTransform.anchoredPosition = new Vector2(Mathf.Lerp(startX, targetX, time / checkTime), 0.0f);
                _lightModeButtonHandle.rectTransform.eulerAngles      = new Vector3(0.0f, 0.0f, Mathf.Lerp(startAngle, targetAngle, time / checkTime));
            }
            _lightModeButtonHandle.rectTransform.anchoredPosition = new Vector2(targetX, 0.0f);
            _lightModeButtonHandle.rectTransform.eulerAngles      = new Vector3(0.0f, 0.0f, targetAngle);
            // 変更
            _lightModeButtonHandle.rectTransform.anchoredPosition = _lightModeFlg ? new Vector3(-22.9f, 0.0f, 0.0f) : new Vector3(22.9f, 0.0f, 0.0f);
            _lightModeButtonHandle.color = _lightModeFlg ? Color.white : Color.magenta;
            _lightModeButton.image.color = _lightModeFlg ? Color.gray  : Color.magenta * 0.8f;
            _lightModeText.text          = _lightModeFlg ? "OFF" : "ON";
            _lightModeText.alignment     = _lightModeFlg ? TMPro.TextAlignmentOptions.MidlineRight : TMPro.TextAlignmentOptions.MidlineLeft;
            _lightModeCoroutine          = null;
        }

        /// <summary>
        /// チュートリアルを行ったか判定
        /// </summary>
        private void TutorialCheck()
        {
            var tutorialFlg = PlayerPrefs.GetInt(Common.Const.TUTORIAL_PLAY_KEY, 0);
            if(tutorialFlg != 0) return;
            // チュートリアル処理
            _startButton.onClick.RemoveAllListeners();
            _startButton.onClick.AddListener(()=>{
                _movieManager.Init(()=>{
                    // チュートリアル閲覧保存
                    PlayerPrefs.SetInt(Common.Const.TUTORIAL_PLAY_KEY, 1);
                    StartGame();
                });
            });
            _startButtonDebug.interactable = false;
        }
    }
}