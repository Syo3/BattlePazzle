using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Panel : MonoBehaviour {

	[SerializeField, Tooltip("スプライト")]
	private SpriteRenderer _sprite;

	/// <summary>
	/// Sets the state.
	/// </summary>
	/// <param name="state">Set state.</param>
	public void SetState(int state)
	{
		// if( state == m_state ) {
		// 	return;
		// }
		// m_state = state;
		switch(state){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_sprite.color = Color.white;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.color = Color.black;
			break;
		}
	}
}
