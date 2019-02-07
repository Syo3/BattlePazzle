using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Panel : MonoBehaviour {

	private int m_state;
	private Color m_color;
	private SpriteRenderer m_sprite;

	private void Awake() {
		m_state  = 0;
		m_sprite = GetComponent<SpriteRenderer> ();
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
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
			m_color = new Color( 255.0f, 255.0f, 255.0f, 1.0f );
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			m_color = new Color( 0.0f, 0.0f, 0.0f, 1.0f );
			break;
		}
		m_sprite.color = m_color;
	}
}
