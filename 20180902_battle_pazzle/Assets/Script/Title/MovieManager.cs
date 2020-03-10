using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;
using UnityEngine.EventSystems;

public class MovieManager : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("")]
    private RawImage _rawImage;
    [SerializeField, Tooltip("")]
    private VideoPlayer _videoPlayer;
    [SerializeField, Tooltip("シークバー")]
    private Slider _seekBar;
    [SerializeField, Tooltip("グループ")]
    private CanvasGroup _canvasGroup;
    #endregion

    #region private field
    private bool _dragFlg;
    private float _videoLength;
    private float _resetTime;
    private Action _movieEndCallback;
    private bool _initFlg = false;
    private bool _seekFlg = false;
    private bool _moviePlay = false;
    #endregion

    /// <summary>
    /// 初期設定
    /// </summary>
    public void Init(Action endCallback=null)
    {
        Debug.Log("MovieInit");
        _seekBar.value    = 0.0f;
        _dragFlg          = false;
        _seekFlg          = false;
        _videoLength      = (float)_videoPlayer.clip.length;
        _resetTime        = 0.0f;
        _movieEndCallback = endCallback;

        _canvasGroup.interactable   = true;
        _canvasGroup.blocksRaycasts = true;
        _videoPlayer.time           = 0.0f;
        StartCoroutine(ShowMovie());
        _initFlg = true;
    }
	
    void Start()
    {

        // ロード官僚のせんで調べる

        // #if UNITY_EDITOR
        // var path         = "file:///"+Application.streamingAssetsPath+"/20200303_PaneonMovie.mp4";
        // #endif

        // #if !UNITY_EDITOR && UNITY_ANDROID
        // var path         = Application.streamingAssetsPath+"/20200303_PaneonMovie.mp4";
        // path = "jar:file://" + Application.dataPath + "!/assets" + "/20200303_PaneonMovie.mp4";
        // #endif
        // #if !UNITY_EDITOR && UNITY_IOS
        // var path         = "file:///"+Application.streamingAssetsPath+"/20200303_PaneonMovie.mp4";
        // #endif
        // _videoPlayer.url = path;
        
        // _videoPlayer.Play();
        // StartCoroutine(Test());
        // _videoPlayer.errorReceived += ErrorReceived;

        // return;
        _videoPlayer.time = 0.0f;
        _videoLength      = (float)_videoPlayer.clip.length;

        _videoPlayer.errorReceived += delegate (VideoPlayer videoPlayer, string message)
        {
            Debug.LogWarning("[VideoPlayer] Play Movie Error: " + message);
            //Handheld.PlayFullScreenMovie(_videoPlayer.clip.originalPath, Color.black, FullScreenMovieControlMode.CancelOnInput, FullScreenMovieScalingMode.AspectFit);
            _videoPlayer.Stop();
            _videoPlayer.Play();
        };
    }

	// Update is called once per frame
	void Update ()
    {
        if(!_videoPlayer.isPlaying) return;
        // シークバー移動表示
        if(!_dragFlg){
            var now        = (float)_videoPlayer.time;
            _seekFlg       = true;
            _seekBar.value = now / _videoLength;
            _dragFlg       = false;
            if(!_videoPlayer.isPlaying && _moviePlay){
                _videoPlayer.Play();
            }
        }
        else{
            _resetTime += Time.deltaTime;
            if(_resetTime > 1.0f){
                _dragFlg = false;
            }
        }
	}

    /// <summary>
    /// ムービーを閉じる
    /// </summary>
    public void Close()
    {
        _canvasGroup.interactable   = false;
        _canvasGroup.blocksRaycasts = false;
        _canvasGroup.alpha          = 1.0f;
    }


    /// <summary>
    /// ドラッグ開始
    /// </summary>
    public void DragBeginSeekBar()
    {
    }

    /// <summary>
    /// ドラッグ終了
    /// </summary>
    public void DragEndSeekBar()
    {
        _dragFlg = false;
    }

    /// <summary>
    /// シークバー移動
    /// </summary>
    public void SelectSeekBar()
    {
        if(_seekFlg){
            _seekFlg = false;
            return;
        }
        if(!_canvasGroup.interactable || !_initFlg) return;
        //return;
        Debug.Log("SetSeekBar");
        if(!_videoPlayer.isPlaying){
            _videoPlayer.Play();
        }
        var seekTime      = _videoPlayer.clip.length * _seekBar.value;
        _videoPlayer.time = seekTime;
        _dragFlg          = true;
        _resetTime        = 0.0f;
    }


    private IEnumerator ShowMovie()
    {
        Debug.Log("show moview");
        yield return null;
        var fadeInTime = 0.0f;
        while(fadeInTime < 0.5f){
            _canvasGroup.alpha = fadeInTime * 2.0f;
            yield return null;
            fadeInTime += Time.deltaTime;
        }
        _canvasGroup.alpha = 1.0f;
        _videoPlayer.gameObject.SetActive(true);
        StartCoroutine(MovieEndCheck());
    }

    private IEnumerator HiddenMovie()
    {
        Debug.Log("hidden moview");
        yield return null;
        var fadeInTime = 0.0f;
        while(fadeInTime < 0.5f){
            _canvasGroup.alpha = 1.0f - fadeInTime * 2.0f;
            yield return null;
            fadeInTime += Time.deltaTime;
        }
        _canvasGroup.alpha = 0.0f;
    }

    private IEnumerator MovieEndCheck()
    {
        _videoPlayer.Play();
        _moviePlay = true;
        while(!_videoPlayer.isPlaying){
            yield return null;
        }
        yield return null;
        Debug.Log("MovieEndCheck");
        Debug.Log(_videoPlayer.isPlaying);
        while(_videoPlayer.isPlaying){
            yield return null;
        }
        if(_movieEndCallback != null){
            _movieEndCallback();
            _movieEndCallback = null;
            StartCoroutine(HiddenMovie());
        }
        _videoPlayer.gameObject.SetActive(false);

        Debug.Log("MovieEnd");
    }
}
