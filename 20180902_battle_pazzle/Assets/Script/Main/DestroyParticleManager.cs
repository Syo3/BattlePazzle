using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyParticleManager : MonoBehaviour {

    #region private field
    private List<ParticleSystem> _particlePool = new List<ParticleSystem>();
    private GameObject _particlePrefab;
    #endregion

    /// <summary>
    /// 初期設定
    /// </summary>
    /// <param name="prefab"></param>
    public void Init(GameObject prefab)
    {
        _particlePrefab = prefab;
    }

    /// <summary>
    /// 作成
    /// </summary>
    /// <param name="playerType"></param>
    /// <param name="position"></param>
    public void Create(int playerType, Vector3 position)
    {
        var particle                = SearchPool();
        particle.transform.position = position;
        ParticleSetting(playerType, particle);
    }

    /// <summary>
    /// パーティクル受け取り
    /// </summary>
    /// <returns></returns>
    private ParticleSystem SearchPool()
    {
        for(var i = 0; i < _particlePool.Count; ++i){

            if(!_particlePool[i].isPlaying){
                _particlePool[i].Play();
                return _particlePool[i];
            }
        }
        var particle = Instantiate(_particlePrefab).transform.GetChild(0).GetComponent<ParticleSystem>();
        particle.transform.SetParent(transform);
        _particlePool.Add(particle);
        return particle;
    }

    /// <summary>
    /// パーティクル色設定
    /// </summary>
    /// <param name="playerType"></param>
    /// <param name="particle"></param>
    private void ParticleSetting(int playerType, ParticleSystem particle)
    {

        var particleMain = particle.main;
		switch(playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
            particleMain.startColor = Common.Const.MASTER_COLOR;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
            particleMain.startColor = Common.Const.GUEST_COLOR;
			break;
		}
    }
}
