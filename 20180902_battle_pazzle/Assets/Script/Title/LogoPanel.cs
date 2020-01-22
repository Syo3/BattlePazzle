using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LogoPanel : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("Animator")]
    private Animator _animator;
    #endregion

    #region public function
    public void PlayAnimation()
    {
        Debug.Log("logo");
        _animator.Play("LogoPanel");
    }
    #endregion
}
