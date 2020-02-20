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
    #endregion

    /// <summary>
    /// 初期設定
    /// </summary>
    public void Init(Action endCallback=null)
    {
        _seekBar.value    = 0.0f;
        _dragFlg          = false;
        _videoLength      = (float)_videoPlayer.clip.length;
        _resetTime        = 0.0f;
        _movieEndCallback = endCallback;
        _videoPlayer.Play();
        StartCoroutine(MovieEndCheck());
    }

	// Use this for initialization
	void Start ()
    {
        Init();
	}
	
	// Update is called once per frame
	void Update ()
    {
        // シークバー移動表示
        if(!_dragFlg){
            var now        = (float)_videoPlayer.time;
            _seekBar.value = now / _videoLength;
            _dragFlg       = false;
        }
        else{
            _resetTime += Time.deltaTime;
            if(_resetTime > 1.0f){
                _dragFlg = false;
            }
        }
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
        if(!_videoPlayer.isPlaying){
            _videoPlayer.Play();
        }
        var seekTime      = _videoPlayer.clip.length * _seekBar.value;
        _videoPlayer.time = seekTime;
        _dragFlg          = true;
        _resetTime        = 0.0f;
    }



    private IEnumerator MovieEndCheck()
    {
        yield return null;
        while(_videoPlayer.isPlaying){
            yield return null;
        }
        if(_movieEndCallback != null){
            _movieEndCallback();
            _movieEndCallback = null;
        }
    }
}
