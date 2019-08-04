using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StartViewManager : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("canvas group")]
    private CanvasGroup _canvasGroup;
    [SerializeField, Tooltip("アニメーター")]
    private Animator _animator;
    [SerializeField, Tooltip("自分の名前")]
    private TMPro.TextMeshProUGUI _youNameText;
    [SerializeField, Tooltip("相手の名前")]
    private TMPro.TextMeshProUGUI _enemyNameText;
    #endregion

    #region private field
    private System.Action _animationCallback;
    #endregion

    #region access
    public TMPro.TextMeshProUGUI YouNameText{
        get{return _youNameText;}
    }
    public TMPro.TextMeshProUGUI EnemyNameText{
        get{return _enemyNameText;}
    }
    #endregion

    #region public function
    public void PlayAnimator(System.Action animationCallback)
    {
        _animationCallback = animationCallback;
        Debug.Log(_animator);
        if(_animator != null){
            _animator.Play("StartVSAnimation", 0, 0.0f);
            StartCoroutine(AnimationEndCheck());
        }
    }
    #endregion

    #region private function
    private IEnumerator AnimationEndCheck()
    {
        yield return null;
        var stateInfo = _animator.GetCurrentAnimatorStateInfo(0);
        while(stateInfo.normalizedTime < 1.0f){
            yield return null;
            stateInfo = _animator.GetCurrentAnimatorStateInfo(0);
        }



        if(_animationCallback != null){
            _animationCallback();
        }
        _canvasGroup.alpha          = 0.0f;
        _canvasGroup.interactable   = false;
        _canvasGroup.blocksRaycasts = false;
    }
    #endregion
}
