using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TimeLimitClock : MonoBehaviour {

    #region
    [SerializeField, Tooltip("時計画像")]
    private Image _frameImage;
    [SerializeField, Tooltip("時計針")]
    private Image _clockHandImage;
    #endregion

    #region
    public void SetClock(float max, float nowValue)
    {
        var angle = 360 / max * nowValue;
        _clockHandImage.transform.eulerAngles = new Vector3( 0.0f, 0.0f, angle);
    }

    public void ResetClock()
    {
        _clockHandImage.transform.eulerAngles = new Vector3( 0.0f, 0.0f, 0.0f);
    }
    #endregion

}
