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

	#region access
	public int State{
		get{return _state;}
	}
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
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_2");
			_sprite.color  = Color.green;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_1");
			_sprite.color  = Color.magenta;
			break;
		}
	}
	#endregion
}
