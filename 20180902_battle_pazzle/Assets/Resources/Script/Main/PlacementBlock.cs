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
	private int _playerType;
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
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="x"></param>
	/// <param name="y"></param>
	/// <param name="playerType"></param>
	public void Init(int x, int y, int playerType)
	{
		_positionX  = x;
		_positionY  = y;
		_playerType = playerType;
		SetPlacementColor();
	}

	/// <summary>
	/// ドラッグ中色設定
	/// </summary>
	public void SetDragColor()
	{
		switch(_playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_sprite.color  = new Color(Color.green.r / 2, Color.green.g / 2, Color.green.b / 2, 1);
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.color  = new Color(Color.magenta.r / 2, Color.magenta.g / 2, Color.magenta.b / 2, 1);
			break;
		}	
	}

	/// <summary>
	/// 通常色設定
	/// </summary>
	public void SetPlacementColor()
	{

		switch(_playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_sprite.color  = Color.green;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.color  = Color.magenta;
			break;
		}

	}
	#endregion
}
