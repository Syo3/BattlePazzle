using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Block : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("スプライト")]
	private SpriteRenderer _sprite;
	#endregion

	#region private field
	private int _state;
	private Color _color;
	#endregion

	#region private function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="set_state">Set state.</param>
	public void Init(int set_state)
	{
		_state = set_state;
		switch(_state){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_color = Color.black;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_color = Color.white;
			break;
		}
		Debug.Log(_color);
		_sprite.color = _color;
	}
	#endregion
}
