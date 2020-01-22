using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Title{
    public class ButtonSoundManager : MonoBehaviour {

        #region SerializeField
        [SerializeField, Tooltip("再生")]
        private AudioSource _audioSource;
        [SerializeField, Tooltip("SE一覧")]
        private List<AudioClip> _seList;
        #endregion

        #region 
        public void PlaySE(int seID)
        {
            _audioSource.PlayOneShot(_seList[seID]);
        }
        #endregion
    }
}