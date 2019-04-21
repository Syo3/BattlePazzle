using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class PlayerTurnImageManager : MonoBehaviour {

    [SerializeField, Tooltip("現在ターン画像リスト")]
    private List<Sprite> _turnSpriteList;
    [SerializeField, Tooltip("現在ターンImage")]
    private Image _turnImage;

    public void SetTurnImage(bool flg)
    {
        _turnImage.sprite = flg ? _turnSpriteList[0] : _turnSpriteList[1];
    }
}
