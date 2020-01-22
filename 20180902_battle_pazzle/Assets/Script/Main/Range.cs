using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Range : MonoBehaviour {

	private Vector3 m_dist_vec;
	private Vector3 m_screen_block_pos;

	private ClientManager m_client_manager;

	private int m_state;

	#region アクセサ
	public ClientManager ClientManager{
		set{ m_client_manager = value; }
	}
	public int State{
		set{ m_state = value; }
	}
	#endregion

	void Awake() {

		m_state = 0;
	}



	/// <summary>
	/// Ons the mouse down.
	/// </summary>
	private void OnMouseDown() {

		if( m_state == 0 ) return;


		m_screen_block_pos = Camera.main.WorldToScreenPoint( transform.position );

		float x = Input.mousePosition.x;
		float y = Input.mousePosition.y;

		m_dist_vec = transform.position - Camera.main.ScreenToWorldPoint( new Vector3( x, y, m_screen_block_pos.z ) );
	}

	/// <summary>
	/// Ons the mouse drag.
	/// </summary>
	private void OnMouseDrag() {

		if( m_state == 0 ) return;


		float x = Input.mousePosition.x;
		float y = Input.mousePosition.y;
		Vector3 point     = new Vector3( x, y, m_screen_block_pos.z );
		Vector3 block_pos = Camera.main.ScreenToWorldPoint( point ) + m_dist_vec;


		int list_y = (int)( block_pos.y - Common.Const.START_POS_Y + Common.Const.BLOCK_SIZE_HALF / Common.Const.BLOCK_SIZE );
		int list_x = (int)( block_pos.x - Common.Const.START_POS_X + Common.Const.BLOCK_SIZE_HALF / Common.Const.BLOCK_SIZE );

		transform.position = new Vector3( list_x * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, list_y * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f );
	}

	/// <summary>
	/// Ons the mouse up.
	/// </summary>
	private void OnMouseUp() {

		if( m_state == 0 ) return;


		float x = Input.mousePosition.x;
		float y = Input.mousePosition.y;
		Vector3 point = new Vector3( x, y, m_screen_block_pos.z );
		Vector3 block_pos = Camera.main.ScreenToWorldPoint( point ) + m_dist_vec;

		int list_y = (int)( block_pos.y - Common.Const.START_POS_Y + Common.Const.BLOCK_SIZE_HALF / Common.Const.BLOCK_SIZE );
		int list_x = (int)( block_pos.x - Common.Const.START_POS_X + Common.Const.BLOCK_SIZE_HALF / Common.Const.BLOCK_SIZE );

		Debug.Log( list_x+","+list_y );

		var range_list = new List<List<int>>();
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i ) {
			range_list.Add( Enumerable.Repeat( 0, Common.Const.NUM_WIDTH ).ToList() );
		}

		// 範囲の外側チェック
		if( list_x < 0 || list_x >= Common.Const.NUM_WIDTH ||
		   list_y < 0 || list_y >= Common.Const.NUM_HEIGHT ) {
			transform.position = new Vector3( 0.5f, -2.5f, 0.0f );
			return;
		}

		var player_type = m_client_manager.PlayerTypeint;



		range_list[list_y][list_x] = player_type;
		m_client_manager.UpdateBlockList( range_list );
	}
}
