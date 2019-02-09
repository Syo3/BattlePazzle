using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;


public class ClientManager : MonoBehaviour {

	#region SerializeField
	//[SerializeField]
	//private GameObject _PanelObjectParent;
	#endregion

	#region private field
	private MainManager _mainManager;
	private PhotonView _photonView;
	private PhotonPlayer _Player;
	private int _turnCnt;
	private Common.Const.PLAYER_TYPE _playerType;
	private int mColorType;
	private List<List<int>> m_block_list;
	#endregion



	#region アクセサ
	public int PlayerType{
		get{ return (int)_playerType; }
	}
	#endregion

	void Awake()
	{
		BlockSerializer.Register();
	}

	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="mainManager"></param>
	public void Init(MainManager mainManager)
	{
		_mainManager = mainManager;
		// ターン数
		_turnCnt    = 0;
		// プレイヤー情報取得
		_Player     = PhotonNetwork.player;
		_photonView = GetComponent<PhotonView>();

		//
		List<int> panel_object_list;
		// マスタークライアント
		if(_Player.isMasterClient){
			Debug.Log( "Master" );
			_playerType     = Common.Const.PLAYER_TYPE.MASTER;
			panel_object_list = new List<int>{ (int)Common.Const.PLAYER_TYPE.MASTER, (int)Common.Const.PLAYER_TYPE.GUEST };
		}
		// ゲスト
		else{
			Debug.Log( "Not Master" );
			_playerType     = Common.Const.PLAYER_TYPE.GUEST;
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
		// ステージ作成
		var parentTransform = _mainManager.PanelParentTransform;
		for(i = 0; i < panel_list.Count; ++i){

			for(j = 0; j < panel_list[i].Count; ++j){

				var panel_obj = Instantiate(_mainManager.PanelPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * 0.4f, Quaternion.identity, parentTransform);
				panel_obj.GetComponent<Panel> ().SetState(panel_list[i][j]);
			}
		}
		// 掴むブロック作成
		for(i = 0; i < 3; ++i){

			var holdBlock = Instantiate(_mainManager.HoldBlockPrefab, new Vector3(2.0f * i - 2.0f, -4.0f, 0.0f), Quaternion.identity, _mainManager.HoldParentTransform).GetComponent<HoldBlock>();
			holdBlock.Init(_mainManager);
		}
	}
	
	// Update is called once per frame
	void Update ()
	{
		if( _turnCnt == (int)_playerType - 1 ) {
			if( Input.GetKey( KeyCode.D ) ) {
				// if キー操作とか色々
				//UpdateBlockList();
			}
		}
	}


	[PunRPC]
	private void UpdateBlock(List<List<int>> list, Common.Const.PLAYER_TYPE playerType)
	{
		Debug.Log( "PunRPC start" );
		Debug.Log(list);
		Debug.Log(list.Count);

		// プレイヤー2は反転して描画
		if(_playerType != playerType){

			for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){
				list[i].Reverse();
			}
			list.Reverse();
		}

		Debug.Log( "PunRPC start" );

		Debug.Log( list[0][0] );
		for( var i = 0; i < Common.Const.NUM_HEIGHT; ++i ) {

			for( var j = 0; j < Common.Const.NUM_WIDTH; ++j ) {

				if( m_block_list[i][j] != list[i][j] ) {

					Debug.Log( "create:"+i+","+j );

//								Instantiate(_mainManager.PanelPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * 0.4f, Quaternion.identity, parentTransform);

					var block = Instantiate(_mainManager.BlockPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * 0.4f, Quaternion.identity, _mainManager.PanelParentTransform).GetComponent<Block>();
					block.Init(list[i][j]);
					m_block_list[i][j] = list[i][j];
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
		var obj = new object[]{range_list, _playerType};


		//_photonView.RPC( "UpdateBlock", PhotonTargets.All, range_list );
		_photonView.RPC("UpdateBlock", PhotonTargets.All, obj);
	}


}


