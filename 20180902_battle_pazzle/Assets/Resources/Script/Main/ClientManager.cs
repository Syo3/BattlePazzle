﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;


public class ClientManager : MonoBehaviour {

	#region SerializeField
	//[SerializeField]
	//private GameObject _PanelObjectParent;
	[SerializeField, Tooltip("PhotonView")]
	private PhotonView _photonView;
	#endregion

	#region private field
	private MainManager _mainManager;
	private PhotonPlayer _player;
	private int _turnCnt;
	private Common.Const.PLAYER_TYPE _playerType;
	private List<List<Area>> _areaList;
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
		_turnCnt    = (int)Common.Const.PLAYER_TYPE.MASTER;
		// プレイヤー情報取得
		_player     = PhotonNetwork.player;
		//
		List<int> panel_object_list;
		// マスタークライアント
		if(_player.IsMasterClient){
			Debug.Log( "Master" );
			_playerType     = Common.Const.PLAYER_TYPE.MASTER;
			panel_object_list = new List<int>{ (int)Common.Const.PLAYER_TYPE.MASTER, (int)Common.Const.PLAYER_TYPE.GUEST };
			GameObject.Find( "Text" ).GetComponent<UnityEngine.UI.Text>().text = "あなたのターン";
		}
		// ゲスト
		else{
			Debug.Log( "Not Master" );
			_playerType     = Common.Const.PLAYER_TYPE.GUEST;
			panel_object_list = new List<int>{ (int)Common.Const.PLAYER_TYPE.GUEST, (int)Common.Const.PLAYER_TYPE.MASTER };
			GameObject.Find( "Text" ).GetComponent<UnityEngine.UI.Text>().text = "あいてのターン";
		}
		List<List<int>> state_list = new List<List<int>>();		

		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i ) {

			// 上下でエリアを分ける
			if( Common.Const.NUM_HEIGHT / 2 > i ) {
				state_list.Add(Enumerable.Repeat(panel_object_list[0], Common.Const.NUM_WIDTH).ToList());
			}
			else{
				state_list.Add(Enumerable.Repeat(panel_object_list[1], Common.Const.NUM_WIDTH).ToList());
			}
			//_blockList.Add(Enumerable.Repeat(0, Common.Const.NUM_WIDTH ).ToList());
		}
		Debug.Log( "count:"+state_list.Count );
		Debug.Log( Common.Const.BLOCK_SIZE );
		Debug.Log( Common.Const.START_POS_X );
		// ステージ作成
		var parentTransform = _mainManager.PanelParentTransform;
		_areaList           = new List<List<Area>>();
		for(var i = 0; i < state_list.Count; ++i){

			_areaList.Add(new List<Area>());
			for(var j = 0; j < state_list[i].Count; ++j){

				var area  = Instantiate(_mainManager.AreaPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * 0.4f, Quaternion.identity, parentTransform).GetComponent<Area>();
				var panel = Instantiate(_mainManager.PanelPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * 0.4f, Quaternion.identity, area.transform).GetComponent<Panel>();
				//var panel = Instantiate(_mainManager.PanelPrefab, Vector3.zero, Quaternion.identity, area.transform).GetComponent<Panel>();
				panel.SetState(state_list[i][j]);
				area.Init(panel, state_list[i][j], 0);
				_areaList[i].Add(area);
			}
		}
		// 掴むブロック作成
		for(var i = 0; i < 3; ++i){

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
	/// <summary>
	/// ブロック生成RPC
	/// </summary>
	/// <param name="list"></param>
	/// <param name="playerType"></param>
	private void UpdateBlock(List<List<int>> list, Common.Const.PLAYER_TYPE playerType)
	{
		Debug.Log( "PunRPC start" );
		Debug.Log(list);
		Debug.Log(list.Count);

		// 受信側プレイヤーは反転表示
		if(_playerType != playerType){

			for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){
				list[i].Reverse();
			}
			list.Reverse();
		}

		Debug.Log( "PunRPC start" );

		Debug.Log( list[0][0] );
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				Debug.Log(_areaList.Count);
				Debug.Log(_areaList[i].Count);
				Debug.Log(_areaList[i][j]);
				Debug.Log(_areaList[i][j].Block);
				if(list[i][j] > 0 && _areaList[i][j].Block == null /*&& _areaList[i][j].Panel.State == list[i][j]*/){

					Debug.Log( "create:"+i+","+j );
//								Instantiate(_mainManager.PanelPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * 0.4f, Quaternion.identity, parentTransform);

					var block = Instantiate(_mainManager.BlockPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * 0.4f, Quaternion.identity, _mainManager.PanelParentTransform).GetComponent<Block>();
					block.Init(list[i][j]);
					//_blockList[i][j] = list[i][j];
					_areaList[i][j].Block = block;
				}
			}
		}

		// 最後にターン終了扱いにしてターンを更新
		//m_turn_cnt = ++m_turn_cnt % 2;
		// 敵と味方でY軸が逆になるのがネックよねー
		if(playerType == _playerType){
			Invoke("AreaUpdateCheck", 0.5f);
		}
	}

	[PunRPC]
	/// <summary>
	/// ブロック削除RPC
	/// </summary>
	/// <param name="list"></param>
	/// <param name="playerType"></param>
	private void DeleteBlock(List<List<int>> list, List<List<int>> panelList,Common.Const.PLAYER_TYPE playerType, int lineCnt)
	{
		// 受信側プレイヤーは反転表示
		Debug.Log("reverse check:"+(_playerType != playerType));
		var checkStartY = Common.Const.NUM_HEIGHT;
		var checkEndY   = 0;
		var loopAddNum  = -1;
		if(_playerType != playerType){
			for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){
				panelList[i].Reverse();
				list[i].Reverse();
			}
			panelList.Reverse();
			list.Reverse();

			// ブロックを移動させる関係で受信側は逆で判定
			checkStartY = 0;
			checkEndY   = Common.Const.NUM_HEIGHT;
			loopAddNum  = 1;
		}
		// 列が揃ったブロック削除
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				if(list[i][j] > 0 && _areaList[i][j].Block != null){
					Destroy(_areaList[i][j].Block.gameObject);
					_areaList[i][j].Block = null;
				}
			}
		}
		// ブロック移動判定
		if(_playerType == playerType){
			_areaList.Reverse();
		}
		Debug.Log("lineCnt:"+lineCnt);
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			if(_areaList[i][0].Panel.State == (int)playerType){
				break;
			}
			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				// ブロックがあればブロック移動
				if(_areaList[i][j].Block != null){
					if(i - lineCnt >= 0 && _areaList[i-lineCnt][j].Block == null){
						_areaList[i-lineCnt][j].Block = _areaList[i][j].Block;
						_areaList[i-lineCnt][j].Block.transform.position = _areaList[i-lineCnt][j].Panel.transform.position;
						Debug.Log("move:"+i+","+j+"->"+(i-lineCnt)+","+j);
					}
					else{
						Debug.Log("destroy:"+i+","+j);
						Destroy(_areaList[i][j].Block.gameObject);
					}
					_areaList[i][j].Block = null;
				}
			}
		}
		if(_playerType == playerType){
			_areaList.Reverse();
		}
		// パネル更新
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				if(panelList[i][j] != _areaList[i][j].Panel.State){
					_areaList[i][j].Panel.SetState(panelList[i][j]);
				}
			}
		}



		// ターン？
		if(playerType == _playerType){
			// ターン切り替え
			var obj = new object[]{_playerType};
			_photonView.RPC("TurnChange", PhotonTargets.All, obj);
		}
	}

	[PunRPC]
	/// <summary>
	/// ターン変更RPC
	/// </summary>
	/// <param name="list"></param>
	/// <param name="playerType"></param>
	public void TurnChange(Common.Const.PLAYER_TYPE playerType)
	{
		return;
		if(Common.Const.PLAYER_TYPE.MASTER == playerType){
			_turnCnt = (int)Common.Const.PLAYER_TYPE.GUEST;
		}
		else{
			_turnCnt = (int)Common.Const.PLAYER_TYPE.MASTER;
		}
		if(_turnCnt == (int)_playerType){
			GameObject.Find( "Text" ).GetComponent<UnityEngine.UI.Text>().text = "あなたのターン";
		}
		else{
			GameObject.Find( "Text" ).GetComponent<UnityEngine.UI.Text>().text = "あいてのターン";
		}
	}

	/// <summary>
	/// ブロック更新処理
	/// </summary>
	/// <param name="range_list"></param>
	public void UpdateBlockList( List<List<int>> range_list )
	{
		var obj = new object[]{range_list, _playerType};
		_photonView.RPC("UpdateBlock", PhotonTargets.All, obj);
	}

	/// <summary>
	/// エリア更新判定
	/// </summary>
	public void AreaUpdateCheck()
	{
		var deleteList = new List<List<int>>();
		var lineCnt    = 0;
		for(var i = 0; i < _areaList.Count; ++i){

			// ブロック削除後リスト作成
			deleteList.Add(Enumerable.Repeat(0, _areaList[i].Count).ToList());
			var j = 0;
			// 列揃ったか判定
			for(; j < _areaList[i].Count; ++j){

				if(_areaList[i][j].Block == null){
					break;
				}
			}
			// ライン全部埋まったか
			if(j == _areaList[i].Count){
				for(j = 0; j < _areaList[i].Count; ++j){
					Destroy(_areaList[i][j].Block.gameObject);
					_areaList[i][j].Block = null;
					deleteList[i][j]      = 1;
				}
				++lineCnt;
			}
		}
		// パネル更新判定
		if(lineCnt > 0){
			var checkLineCnt    = lineCnt;
			var updatePanelList = new List<List<int>>();			
			for(var i = 0; i < _areaList.Count; ++i){

				updatePanelList.Add(new List<int>());
				for(var j = 0; j < _areaList[i].Count; ++j){
					updatePanelList[i].Add(_areaList[i][j].Panel.State);
				}
			}
			// パネル更新後リスト作成
			for(var i = 0; i < _areaList.Count; ++i){

				if(updatePanelList[i][0] != (int)_playerType){
					Debug.Log("delete check:"+i);
					for(var j = 0; j < _areaList[i].Count; ++j){
						updatePanelList[i][j] = (int)_playerType;
					}
					--checkLineCnt;
					if(checkLineCnt == 0){
						break;
					}
				}
			}
			var obj = new object[]{deleteList, updatePanelList, _playerType, lineCnt};
			_photonView.RPC("DeleteBlock", PhotonTargets.All, obj);
		}
		else{
			// ターン切り替え
			var obj = new object[]{_playerType};
			_photonView.RPC("TurnChange", PhotonTargets.All, obj);
		}
	}

	/// <summary>
	/// 現在ターン中か
	/// </summary>
	/// <returns>true or false</returns>
	public bool CheckNowTurn()
	{
		return (int)_playerType == _turnCnt;
	}
}


