using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour{

    #region SerializeField
    [SerializeField, Tooltip("AudioSource")]
    private AudioSource _audioSource;
    [SerializeField, Tooltip("SE一覧")]
    private List<AudioClip> _seList;
    #endregion

    #region public function
    /// <summary>
    /// 初期化
    /// </summary>
    public void Init()
    {
        _audioSource.volume = PlayerPrefs.GetFloat(Common.Const.VOLUME_KEY, 0.5f);
    }

    /// <summary>
    /// SE再生
    /// </summary>
    /// <param name="seID"></param>
    public void PlayOnShot(int seID)
    {
        if(seID >= _seList.Count){
            return;
        }
        _audioSource.PlayOneShot(_seList[seID]);
    }
    #endregion
}
