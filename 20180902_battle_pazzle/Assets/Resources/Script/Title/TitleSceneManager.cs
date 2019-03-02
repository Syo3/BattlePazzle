using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

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
	#endregion

	void Start()
	{
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
