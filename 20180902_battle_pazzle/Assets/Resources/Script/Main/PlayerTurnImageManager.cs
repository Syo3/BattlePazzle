using System.Collections;
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
    #endregion

    public void SetTurnImage(bool flg)
    {
        StartCoroutine(TurnChangeAnimation(flg));
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
        Debug.Log(stateInfo.normalizedTime);
        while(stateInfo.normalizedTime < 1.0f){
            yield return null;
            stateInfo = animator.GetCurrentAnimatorStateInfo(0);
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


        if(_callback != null) _callback();
        //_turnImage.transform.eulerAngles = new Vector3(0.0f, 0.0f, 0.0f);

    }

    public void SetCallback(System.Action callback)
    {
        _callback = callback;
    }
}
