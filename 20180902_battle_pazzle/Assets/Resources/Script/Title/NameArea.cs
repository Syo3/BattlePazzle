using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Title{

    public class NameArea : MonoBehaviour {

        #region SerializeField
        [SerializeField, Tooltip("名前入力")]
        private InputField _nameInput;
        [SerializeField, Tooltip("決定ボタン")]
        private Button _executeButton;
        #endregion

        /// <summary>
        /// 初期設定
        /// </summary>
        public void Init()
        {
            _nameInput.text = PlayerPrefs.GetString(Common.Const.PLAYER_NAME_KEY, "player");
            // 決定ボタン
            _executeButton.onClick.AddListener(()=>{
                Debug.Log(_nameInput.text);
                PlayerPrefs.SetString(Common.Const.PLAYER_NAME_KEY, _nameInput.text);
            });
        }
    }
}