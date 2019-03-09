﻿using System.Collections;
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
        [SerializeField, Tooltip("メニュー閉じるボタン")]
        private Button _menuCloseButton;
        [SerializeField, Tooltip("名前入力エリア")]
        private NameArea _nameArea;
        #endregion

        void Start()
        {
            _nameArea.Init();
            // playerpref 確認
            Debug.Log(PlayerPrefs.GetString(Common.Const.PLAYER_NAME_KEY, "player"));
            // シーンコンテナ取得
            var sceneContainer = FindObjectOfType<SceneContainer>();
            if(sceneContainer == null){
                sceneContainer = Instantiate(_sceneContainer).GetComponent<SceneContainer>();
                DontDestroyOnLoad(sceneContainer);
            }
            // フェードイン
            StartCoroutine(_fadeManager.FadeIn());
            // 開始 通常
            _startButton.onClick.AddListener(()=>{
                sceneContainer.DebugFlg = false;
                StartGame();
            });
            // 開始 デバッグ
            _startButtonDebug.onClick.AddListener(()=>{
                sceneContainer.DebugFlg = true;
                StartGame();
            });
            // メニューボタン
            _menuButton.onClick.AddListener(()=>{
                _menuView.alpha = 1.0f;
                _menuView.interactable = true;
                _menuView.blocksRaycasts = true;
            });
            // メニュー閉じるボタン
            _menuCloseButton.onClick.AddListener(()=>{
                _menuView.alpha = 0.0f;
                _menuView.interactable = false;
                _menuView.blocksRaycasts = false;
            });
        }

        /// <summary>
        /// Mainシーン遷移
        /// </summary>
        private void StartGame()
        {
            _startButton.interactable      = false;
            _startButtonDebug.interactable = false;
            _fadeManager.SetCallBack(()=>{
                SceneManager.LoadScene("Main");
            });
            StartCoroutine(_fadeManager.FadeOut());
        }
    }
}