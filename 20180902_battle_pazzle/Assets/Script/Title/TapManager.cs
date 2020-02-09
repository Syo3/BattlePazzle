using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TapManager : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("タップパーティクル")]
    private ParticleSystem _tapParticle;
    #endregion

    #region private field
    private List<ParticleSystem> _tapParticlePool = new List<ParticleSystem>();
    #endregion

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {


        // タップされた
		if(Input.GetMouseButtonUp(0)){

            var position = Input.mousePosition;
            // マウス位置座標をスクリーン座標からワールド座標に変換する
            var screenToWorldPointPosition = Camera.main.ScreenToWorldPoint(position);
            var particle = GetParticle();
            particle.transform.position = screenToWorldPointPosition;
        }
	}

    private ParticleSystem GetParticle()
    {
        for(var i = 0; i < _tapParticlePool.Count; ++i){

            if(!_tapParticlePool[i].isPlaying){
                _tapParticlePool[i].Play();
                return _tapParticlePool[i];
            }
        }
        var particle = Instantiate(_tapParticle).GetComponent<ParticleSystem>();
        particle.transform.SetParent(transform);
        _tapParticlePool.Add(particle);
        return particle;
    }
}
