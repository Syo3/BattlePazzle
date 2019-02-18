using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Territory : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("sprite")]
	private SpriteRenderer _sprite;
	#endregion

	#region private field
	private int _playerType;
	private int _direction;
	#endregion

	#region public function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="playerType"></param>
	/// <param name="parentPlayerType"></param>
	public void Init(int playerType, int parentPlayerType)
	{
		switch(playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_sprite.color = Color.green;
			_direction    = playerType == parentPlayerType ? -1 : 1;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.color = Color.magenta;
			_direction    = playerType == parentPlayerType ? -1 : 1;
			break;
		}
		_playerType = playerType;
	}

	/// <summary>
	/// 大きさ設定
	/// </summary>
	/// <param name="line"></param>
	public void SetSize(int line)
	{
		_sprite.size            = new Vector2(Common.Const.BLOCK_SIZE * Common.Const.NUM_WIDTH, Common.Const.BLOCK_SIZE * line);
		transform.localPosition = new Vector3(0.0f, (Common.Const.NUM_HEIGHT - line) * Common.Const.BLOCK_SIZE_HALF * _direction, 0.0f);
	}
	#endregion
}
