using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonManager : MonoBehaviour {

    #region define
    private readonly float kFadeSpeed = 0.1f;
    #endregion

    #region SerializeField
    [SerializeField, Tooltip("Image")]
    private Image _image;
    [SerializeField, Tooltip("Text")]
    private TMPro.TextMeshProUGUI _text;
    #endregion

    #region public function
    public void FadeOut()
    {
        StartCoroutine(FadeOutCoroutine());
    }

    public void FadeIn()
    {
        StartCoroutine(FadeInCoroutine());
    }
    #endregion

    #region private field
    private IEnumerator FadeOutCoroutine()
    {
        var color = _image.color;
        while(color.a > 0.0f){
            yield return null;
            color.a     -= kFadeSpeed;
            _image.color = color;
            _text.color  = color;
        }
        color.a              = 0.0f;
        _image.color         = color;
        _text.color          = color;
        _image.raycastTarget = false;
    }

    private IEnumerator FadeInCoroutine()
    {
        yield return null;
        var color = _image.color;
        while(color.a < 1.0f){
            yield return null;
            color.a     += kFadeSpeed;
            _image.color = color;
            _text.color  = color;
        }
        color.a              = 1.0f;
        _image.color         = color;
        _text.color          = color;
        _image.raycastTarget = true;
    }
    #endregion
}
