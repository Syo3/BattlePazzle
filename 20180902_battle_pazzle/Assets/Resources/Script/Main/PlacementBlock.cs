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
			_sprite.color  = new Color(Common.Const.MASTER_COLOR.r / 2, Common.Const.MASTER_COLOR.g / 2, Common.Const.MASTER_COLOR.b / 2, 1);
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.color  = new Color(Common.Const.GUEST_COLOR.r / 2, Common.Const.GUEST_COLOR.g / 2, Common.Const.GUEST_COLOR.b / 2, 1);
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
			_sprite.color  = Common.Const.MASTER_COLOR;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.color  = Common.Const.GUEST_COLOR;
			break;
		}

	}
	#endregion
}
