using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ContentSizeManager : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("RectTransform")]
    private RectTransform _rect;
    [SerializeField, Tooltip("最大サイズ")]
    private Vector2 _contentMaxSize;
    #endregion

    #region 
    private Transform _transform;
    #endregion

	// Use this for initialization
	void Start () {
		_transform = transform;
	}

	// Update is called once per frame
	void Update () {

        if(!_transform.hasChanged) return;
        _rect.sizeDelta       = _rect.parent.GetComponent<RectTransform>().sizeDelta;
        var width             = _rect.sizeDelta.x > _contentMaxSize.x && _contentMaxSize.x > 0 ? _contentMaxSize.x : _rect.sizeDelta.x;
        var height            = _rect.sizeDelta.y > _contentMaxSize.y && _contentMaxSize.y > 0 ? _contentMaxSize.y : _rect.sizeDelta.y;
        _rect.sizeDelta       = new Vector2(width, height);
        _transform.hasChanged = false;
	}
}
