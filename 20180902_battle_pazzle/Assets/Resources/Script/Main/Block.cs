using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Block : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("スプライト")]
	private SpriteRenderer _sprite;
	#endregion

	private int m_state;
	private Color m_color;

	#region acceess
	public SpriteRenderer SpriteRenderer{
		get{return _sprite;}
	}
	#endregion

	// Use this for initialization
	void Start ()
	{
		m_state  = 0;
	}

	/// <summary>
	/// Sets the state.
	/// </summary>
	/// <param name="set_state">Set state.</param>
	public void SetState( int set_state ) {

		if( set_state == m_state ) {
			return;
		}
		m_state = set_state;
		switch( m_state ) {
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			m_color = new Color( 255.0f, 131.0f, 131.0f, 1.0f );
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			m_color = new Color( 131.0f, 255.0f, 255.0f, 1.0f );
			break;
		}
		_sprite.color = m_color;
	}

}
