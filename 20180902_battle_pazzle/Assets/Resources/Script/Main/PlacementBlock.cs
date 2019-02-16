using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementBlock : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("スプライト")]
	private SpriteRenderer _sprite;
	#endregion

	#region private field
	private int _positionX;
	private int _positionY;
	#endregion

	#region access
	public SpriteRenderer Sprite{
		get{return _sprite;}
	}
	public int PositionX{
		get{return _positionX;}
	}
	public int PositionY{
		get{return _positionY;}
	}
	#endregion

	#region public funtion
	public void Init(int x, int y, int playerType)
	{
		_positionX = x;
		_positionY = y;
		switch(playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_sprite.sprite = ResourceManager.LoadSprite("Image/panel_2");
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.sprite = ResourceManager.LoadSprite("Image/panel_1");
			break;
		}
	}
	#endregion
}
