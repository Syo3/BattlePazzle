using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaVertexLight : MonoBehaviour {

    #region private field
    private Transform _transformCache;
    private float _moveVec;
    private ClientManager _clientManager;
    #endregion

    #region public field
    public void Init(ClientManager clientManager)
    {
        _clientManager = clientManager;
    }
    #endregion

	// Use this for initialization
	void Start ()
    {
        _transformCache = transform;
        _moveVec        = Random.Range(0.01f, 0.02f);
        _moveVec        = _transformCache.position.x > 0.0f ? -_moveVec : _moveVec;
	}
	
	// Update is called once per frame
	void Update ()
    {
		_transformCache.Translate(_moveVec, 0.0f, 0.0f);
        if(_transformCache.position.x > 10.0f || _transformCache.position.x < -10.0f){            
            _clientManager.AreaVertexLightList.Remove(this);
            Destroy(gameObject);
        }
	}
}
