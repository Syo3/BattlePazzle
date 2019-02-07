using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;


public class ClientManager : MonoBehaviour {

	private PhotonPlayer m_player;
	private PhotonView m_photonview;
	[SerializeField]
	private GameObject panel;
	[SerializeField]
	private GameObject block_prefab;
	[SerializeField]
	private Range m_range;


	[SerializeField]
	private GameObject m_panel_object_parent;
	private int m_turn_cnt;
	private Common.Const.PLAYER_TYPE m_player_type;
	private int m_color_type;
	private List<List<int>> m_block_list;

	#region アクセサ
	public int PlayerType{
		get{ return (int)m_player_type; }
	}
	public Range Range{
		set{ m_range = value; }
	}
	#endregion

	void Awake() {
	
		BlockSerializer.Register();
	}

	// Use this for initialization
	void Start () {

		//BlockSerializer.Register();

		// ターン数
		m_turn_cnt = 0;

		// プレイヤー情報取得
		m_player     = PhotonNetwork.player;
		m_photonview = GetComponent<PhotonView> ();

		//
		List<int> panel_object_list;
		// マスタークライアント
		if( m_player.isMasterClient ) {
			Debug.Log( "Master" );
			m_player_type     = Common.Const.PLAYER_TYPE.MASTER;
			panel_object_list = new List<int>{ (int)Common.Const.PLAYER_TYPE.MASTER, (int)Common.Const.PLAYER_TYPE.GUEST };
			// 配置範囲を有効化
			m_range.State     = 1;

		}
		else{
			Debug.Log( "Not Master" );
			m_player_type     = Common.Const.PLAYER_TYPE.GUEST;
			panel_object_list = new List<int>{ (int)Common.Const.PLAYER_TYPE.GUEST, (int)Common.Const.PLAYER_TYPE.MASTER };
		}
		List<List<int>> panel_list = new List<List<int>>();
		m_block_list = new List<List<int>>();
		int i,j;
		for( i = 0; i < Common.Const.NUM_HEIGHT; ++i ) {

			// 上下でエリアを分ける
			if( Common.Const.NUM_HEIGHT / 2 > i ) {
				panel_list.Add( Enumerable.Repeat( panel_object_list[0], Common.Const.NUM_WIDTH ).ToList() );
			}
			else{
				panel_list.Add( Enumerable.Repeat( panel_object_list[1], Common.Const.NUM_WIDTH ).ToList() );
			}
			m_block_list.Add( Enumerable.Repeat( 0, Common.Const.NUM_WIDTH ).ToList() );
		}
		Debug.Log( "count:"+panel_list.Count );
		Debug.Log( Common.Const.BLOCK_SIZE );
		Debug.Log( Common.Const.START_POS_X );
		// 陣地作成
//		GameObject panel_obj;
		for( i = 0; i < panel_list.Count; ++i ) {

			for( j = 0; j < panel_list[i].Count; ++j ) {

				var panel_obj = Instantiate( panel, new Vector3( j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f ), Quaternion.identity, transform );
				panel_obj.GetComponent<Panel> ().SetState( panel_list[i][j] );
			}
		}
	}
	
	// Update is called once per frame
	void Update () {

		if( m_turn_cnt == (int)m_player_type - 1 ) {
			if( Input.GetKey( KeyCode.D ) ) {
				// if キー操作とか色々
				//UpdateBlockList();
			}
		}
	}


	[PunRPC]
	private void UpdateBlock( List<List<int>> list ) {

		// プレイヤー2は反転して描画
		if( m_player_type != Common.Const.PLAYER_TYPE.MASTER ) {

			for( var i = 0; i < Common.Const.NUM_HEIGHT; ++i ) {
				list[i].Reverse();
			}
			list.Reverse();
		}

		Debug.Log( "PunRPC start" );

		Debug.Log( list[0][0] );
		GameObject block_obj;
		for( var i = 0; i < Common.Const.NUM_HEIGHT; ++i ) {

			for( var j = 0; j < Common.Const.NUM_WIDTH; ++j ) {

				Debug.Log( i+","+j+":"+m_block_list[i][j]+"-"+list[i][j] );
				if( m_block_list[i][j] != list[i][j] ) {

					Debug.Log( "create" );
					block_obj = Instantiate( block_prefab, new Vector3( j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f ), Quaternion.identity, transform );
					block_obj.GetComponent<Block> ().SetState( m_block_list[i][j] );
				}
			}
		}

		// 最後にターン終了扱いにしてターンを更新
		//m_turn_cnt = ++m_turn_cnt % 2;
		// 敵と味方でY軸が逆になるのがネックよねー
	}

	public void UpdateBlockList( List<List<int>> range_list ) {

		// そのままだとアドレス渡しになるので
//		var frame_block_list = new List<List<int>> ();
//		for( int i = 0; i < 8; ++i ) {
//			frame_block_list.Add( new List<int>( m_block_list[i] ) );
//		}


		// プレイヤー2は置く場所を反転する
		//frame_block_list[0][0] = 1;

		// なんかデータ受け取る処理
		// 置いたら　座標 / サイズみたいなのして配列番号に入れる

		//Debug.Log( "color:"+m_block_list[0][0] );
		// punrpc UpdateBlock みたいな
		// とりあえず臨時の代入処理
		//frame_block_list[0][0] = m_color_type + 1;
		//frame_block_list[0][1] = m_color_type + 1;
//		object[] arg = new object[]{ frame_block_list };
		m_photonview.RPC( "UpdateBlock", PhotonTargets.All, range_list );

	}


}


