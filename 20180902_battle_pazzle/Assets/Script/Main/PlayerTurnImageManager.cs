﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class PlayerTurnImageManager : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("現在ターン画像リスト")]
    private List<Sprite> _turnSpriteList;
    [SerializeField, Tooltip("現在ターンImage")]
    private Image _turnImage;
    #endregion

    #region private field
    private System.Action _callback;
    private System.Action _intervalCallback;
    #endregion

    public void SetTurnImage(bool flg)
    {
        StartCoroutine(TurnChangeAnimation(flg));
    }

    /// <summary>
    /// 相手ターン中ですよ　アニメーション
    /// </summary>
    public void SetEnemyTurnAnimation()
    {
        var animator  = GetComponent<Animator>();
        var stateInfo = animator.GetCurrentAnimatorStateInfo(0);
        // 再生中なら終了
        if(stateInfo.normalizedTime < 1.0f) return;
        animator.Play("EnemyTurnNow", 0, 0.0f);
    }

    private IEnumerator TurnChangeAnimation(bool flg)
    {
        var animator = GetComponent<Animator>();
        // 再生中か
        var stateInfo = animator.GetCurrentAnimatorStateInfo(0);
        if(stateInfo.normalizedTime < 1.0f){
            animator.enabled = false;
            _turnImage.transform.eulerAngles = new Vector3(0.0f, 90.0f, 0.0f);
            yield return null;
            animator.enabled = true;
            _turnImage.transform.eulerAngles = new Vector3(0.0f, 0.0f, 0.0f);
        }

        animator.Play("TurnChangeStart", 0, 0.0f);
        yield return null;
        stateInfo = animator.GetCurrentAnimatorStateInfo(0);
        //Debug.Log(stateInfo.normalizedTime);
        while(stateInfo.normalizedTime < 1.0f){
            yield return null;
            stateInfo = animator.GetCurrentAnimatorStateInfo(0);
        }
        
        if(_intervalCallback != null){
             _intervalCallback();
             _intervalCallback = null;
        }

        // 回転
        // while(_turnImage.transform.eulerAngles.y < 90.0f){
        //     yield return null;
        //     _turnImage.transform.Rotate(0.0f, 9.0f, 0.0f);
        // }
        _turnImage.transform.Rotate(0.0f, -180.0f, 0.0f);
        _turnImage.sprite                  = flg ? _turnSpriteList[0] : _turnSpriteList[1];
        _turnImage.rectTransform.sizeDelta = flg ? new Vector2(108.0f, 78.0f) : new Vector2(120.0f, 78.0f);
        // yield return null;
        // Debug.Log(_turnImage.transform.eulerAngles.y);
        // Debug.Log(_turnImage.transform.eulerAngles.y < 0.0f);
        // while(_turnImage.transform.eulerAngles.y < 350.0f){
        //     yield return null;
        //     _turnImage.transform.Rotate(0.0f, 9.0f, 0.0f);
        // }
        // _turnImage.transform.eulerAngles = new Vector3(0.0f, 0.0f, 0.0f);

        animator.Play("TurnChangeEnd", 0, 0.0f);
        yield return null;
        stateInfo = animator.GetCurrentAnimatorStateInfo(0);
        while(stateInfo.normalizedTime < 1.0f){
            yield return null;
            stateInfo = animator.GetCurrentAnimatorStateInfo(0);
        }


        if(_callback != null){
            _callback();
            _callback = null;
        }
        //_turnImage.transform.eulerAngles = new Vector3(0.0f, 0.0f, 0.0f);

    }

    /// <summary>
    /// 演出終了時コールバック
    /// </summary>
    /// <param name="callback"></param>
    public void SetCallback(System.Action callback)
    {
        _callback = callback;
    }

    /// <summary>
    /// 演出の中間で動作するコールバック
    /// </summary>
    /// <param name="callback"></param>
    public void SetIntervalCallback(System.Action callback)
    {
        _intervalCallback = callback;
    }
}
