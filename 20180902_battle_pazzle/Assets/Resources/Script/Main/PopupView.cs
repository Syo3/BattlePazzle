using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PopupView : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("CanvasGroup")]
	private CanvasGroup _canvasGroup;
	[SerializeField, Tooltip("")]
	private Button _reStartButton;
	[SerializeField, Tooltip("")]
	private Button _closeButton;
	#endregion

	#region private field
	private MainManager _mainManager;
	#endregion

	#region public function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="mainManager"></param>
	public void Init(MainManager mainManager)
	{
		_mainManager = mainManager;
		// リセットボタン
		_reStartButton.onClick.AddListener(()=>{
			Debug.Log("リセット");
		});
		// 閉じるボタン
		_closeButton.onClick.AddListener(()=>{
			StartCoroutine(ClosePopupView());
		});
	}

	/// <summary>
	/// 表示
	/// </summary>
	public void Open()
	{
		StartCoroutine(OpenPopupView());
	}

	/// <summary>
	/// フェードアウト
	/// </summary>
	/// <returns></returns>
	private IEnumerator ClosePopupView()
	{
		while(_canvasGroup.alpha > 0.0f){
			_canvasGroup.alpha -= 0.5f;
			yield return null;
		}
		_canvasGroup.interactable   = false;
		_canvasGroup.blocksRaycasts = false;
	}

	/// <summary>
	/// フェードイン
	/// </summary>
	/// <returns></returns>
	private IEnumerator OpenPopupView()
	{
		_canvasGroup.interactable   = true;
		_canvasGroup.blocksRaycasts = true;
		while(_canvasGroup.alpha < 1.0f){
			_canvasGroup.alpha += 0.5f;
			yield return null;
		}
	}
	#endregion
}
