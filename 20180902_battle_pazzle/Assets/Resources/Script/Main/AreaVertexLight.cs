using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaVertexLight : MonoBehaviour {

    private Transform _transformCache;

	// Use this for initialization
	void Start ()
    {
        _transformCache = transform;
	}
	
	// Update is called once per frame
	void Update ()
    {
		_transformCache.Translate(0.1f, 0.0f, 0.0f);
	}
}
