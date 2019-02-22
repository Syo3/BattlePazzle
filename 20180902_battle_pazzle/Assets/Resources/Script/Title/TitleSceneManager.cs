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
	#endregion

	void Start()
	{
		// シーンコンテナ取得
		var sceneContainer = FindObjectOfType<SceneContainer>();
		if(sceneContainer == null){
			sceneContainer = Instantiate(_sceneContainer).GetComponent<SceneContainer>();
			DontDestroyOnLoad(sceneContainer);
		}
		// 開始 通常
		_startButton.onClick.AddListener(()=>{
			sceneContainer.DebugFlg = false;
			SceneManager.LoadScene("Main");
		});
		// 開始 デバッグ
		_startButtonDebug.onClick.AddListener(()=>{
			sceneContainer.DebugFlg = true;
			SceneManager.LoadScene("Main");
		});
	}
}
