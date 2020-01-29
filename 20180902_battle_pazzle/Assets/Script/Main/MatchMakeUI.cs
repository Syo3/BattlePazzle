using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MatchMakeUI : MonoBehaviour {

    private readonly float kAnimationSpeed = 2.0f;

    #region SerializeField
    [SerializeField, Tooltip("マッチング表示")]
    private List<TMPro.TextMeshProUGUI> _matchingText;
    [SerializeField, Tooltip("マッチング表示")]
    private List<TMPro.TextMeshProUGUI> _matchingTextShadow;
    #endregion

    void Start()
    {
        for(var i = 0; i < _matchingText.Count; ++i){
            StartCoroutine(TextActive(i, 0.2f * i));
        }
    }

    private IEnumerator TextActive(int key, float interval=0.0f)
    {
        yield return new WaitForSeconds(interval);
        var rectTransform = _matchingText[key].rectTransform;
        var basePosition  = rectTransform.anchoredPosition.y;
        var checkTime     = 0.0f;
        while(checkTime < 1.0f){

            yield return null;
            checkTime                     += Time.deltaTime * kAnimationSpeed;
            rectTransform.anchoredPosition = new Vector2(rectTransform.anchoredPosition.x, Mathf.Lerp(basePosition, 0.0f, checkTime));
            _matchingText[key].alpha       = Mathf.Lerp(0.0f, 1.0f, checkTime);
            _matchingTextShadow[key].alpha = Mathf.Lerp(0.0f, 0.9f, checkTime);
        }
        rectTransform.anchoredPosition = new Vector2(rectTransform.anchoredPosition.x, 0.0f);
        _matchingText[key].alpha       = 1.0f;
         _matchingTextShadow[key].alpha = 1.0f;

        StartCoroutine(TextWait(key));
    }


    private IEnumerator TextWait(int key)
    {
        var rectTransform = _matchingText[key].rectTransform;
        var rectTransformShadow = _matchingTextShadow[key].rectTransform;
        var checkTime     = 0.0f;
        var sinAdd        = Random.Range(0.0f, 2.0f);
        while(checkTime < 4.0f){

            yield return null;
            checkTime             += Time.deltaTime;
            rectTransform.anchoredPosition = new Vector2(rectTransform.anchoredPosition.x, Mathf.Sin((checkTime * 4.0f )* 1.1f));
            rectTransformShadow.anchoredPosition = new Vector2(rectTransformShadow.anchoredPosition.x, Mathf.Sin((checkTime * 4.0f )* 1.0f));
        }
        yield return new WaitForSeconds(1.0f);
        StartCoroutine(TextNone(key));
    }

    private IEnumerator TextNone(int key)
    {
        var rectTransform = _matchingText[key].rectTransform;
        var basePosition  = rectTransform.anchoredPosition.y;
        var checkTime     = 0.0f;
        while(checkTime < 1.0f){

            yield return null;
            checkTime                     += Time.deltaTime * kAnimationSpeed;
            rectTransform.anchoredPosition = new Vector2(rectTransform.anchoredPosition.x, Mathf.Lerp(basePosition, -5.0f, checkTime));
            _matchingText[key].alpha       = Mathf.Lerp(1.0f, 0.0f, checkTime);
            _matchingTextShadow[key].alpha = Mathf.Lerp(1.0f, 0.1f, checkTime);
        }
        rectTransform.anchoredPosition = new Vector2(rectTransform.anchoredPosition.x, 5.0f);
        _matchingText[key].alpha       = 0.0f;
        _matchingTextShadow[key].alpha = 0.0f;
        yield return new WaitForSeconds(2.0f);

        StartCoroutine(TextActive(key));
    }
}
