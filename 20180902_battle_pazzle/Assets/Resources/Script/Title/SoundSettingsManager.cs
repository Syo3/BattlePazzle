using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Title{

    public class SoundSettingsManager : MonoBehaviour {

        #region SerializeField
        [SerializeField, Tooltip("AudioSource")]
        private AudioSource _audioSource;
        [SerializeField, Tooltip("Slider")]
        private Slider _volumeSlider;
        #endregion

        #region public function
        /// <summary>
        /// 初期化
        /// </summary>
        public void Init()
        {
            _audioSource.volume = PlayerPrefs.GetFloat(Common.Const.VOLUME_KEY, 0.5f);
            _volumeSlider.value = _audioSource.volume;
        }

        /// <summary>
        /// ボリューム設定
        /// </summary>
        public void SetVolume()
        {
            _audioSource.volume = _volumeSlider.value;
            PlayerPrefs.SetFloat(Common.Const.VOLUME_KEY, _audioSource.volume);
        }
        #endregion
    }
}