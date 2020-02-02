using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class PopupView : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("CanvasGroup")]
	private CanvasGroup _canvasGroup;
	[SerializeField, Tooltip("リスタートボタン")]
	private Button _reStartButton;
	[SerializeField, Tooltip("閉じるボタン")]
	private Button _closeButton;
	[SerializeField, Tooltip("タイトルボタン")]
	private Button _titleButton;
    [SerializeField, Tooltip("文言")]
    private TMPro.TextMeshProUGUI _popupText;
    [SerializeField, Tooltip("閉じるボタンテキスト")]
    private TMPro.TextMeshProUGUI _closeButtonText;
    [SerializeField, Tooltip("タイトルボタンテキスト")]
    private TMPro.TextMeshProUGUI _titleButtonText;
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
		// 閉じるボタン
		_closeButton.onClick.AddListener(()=>{
			StartCoroutine(ClosePopupView());
		});
		// タイトルボタン
		_titleButton.onClick.AddListener(()=>{
            // 対戦中の場合
            if(_mainManager.ClientManager.InitFlg){
                var rate = int.Parse(PlayerPrefs.GetString(Common.Const.PLAYER_RATE_KEY, "1500"));
                PlayerPrefs.SetString(Common.Const.PLAYER_RATE_KEY, (rate-15).ToString());
            }
            // 退出
            PhotonNetwork.LeaveRoom();
			// 切断
			PhotonNetwork.Disconnect();
            

            _mainManager.FadeManager.SetCallBack(()=>{
    			SceneManager.LoadScene("Title");
            });
            StartCoroutine(_mainManager.FadeManager.FadeOut());
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
    /// 相手が退出した場合表示
    /// </summary>
    public void SetExitView()
    {
        _titleButtonText.text = "Title";
        _closeButton.gameObject.SetActive(false);
        _popupText.text = "相手がルームを退出しました。\nあなたの勝利になります。";
        // レート
        var rate = int.Parse(PlayerPrefs.GetString(Common.Const.PLAYER_RATE_KEY, "1500"));
        PlayerPrefs.SetString(Common.Const.PLAYER_RATE_KEY, (rate+15).ToString());

        _titleButton.onClick.RemoveAllListeners();
        _titleButton.onClick.AddListener(()=>{
            _mainManager.FadeManager.SetCallBack(()=>{
    			SceneManager.LoadScene("Title");
            });
            StartCoroutine(_mainManager.FadeManager.FadeOut());
		});
    }

    /// <summary>
    /// タイトルに戻る表示設定
    /// </summary>
    public void SetTitleMenuView()
    {
        _titleButtonText.text = "Yes";
        _closeButtonText.text = "No";
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
