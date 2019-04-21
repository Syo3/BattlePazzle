using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;


public class ClientManager : MonoBehaviour {

    #region 定数
    public enum EEventType : byte
    {
        PlayerName = 1,
    }
    #endregion

	#region SerializeField
	//[SerializeField]
	//private GameObject _PanelObjectParent;
	[SerializeField, Tooltip("PhotonView")]
	private PhotonView _photonView;
	#endregion

	#region private field
	private MainManager _mainManager;
	private PhotonPlayer _player;
	private int _turnFlg;
	private int _turnCnt;
	private float _turnTimeLimit;
	private int _territoryLineNum;
	private Common.Const.PLAYER_TYPE _playerType;
	private List<List<Area>> _areaList;
    private List<List<AreaVertex>> _areaVertexList;
	private bool _gameEndFlg;
	private List<HoldBlock> _holdBlockList;
	private Coroutine _turnTimeLimitCoroutine;
	#endregion

	#region access
	public int PlayerTypeint{
		get{ return (int)_playerType; }
	}
	public Common.Const.PLAYER_TYPE PlayerType{
		get{return _playerType;}
	}
	public List<List<Area>> AreaList{
		get{return _areaList;}
	}
	public PhotonView PhotonView{
		get{return _photonView;}
	}
	public List<HoldBlock> HoldBlockList{
		get{return _holdBlockList;}
	}
	public bool GameEndFlg{
		get{return _gameEndFlg;}
	}
    public List<List<AreaVertex>> AreaVertexList{
        get{return _areaVertexList;}
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
		_gameEndFlg  = false;
		// ターン数
		_turnFlg       = (int)Common.Const.PLAYER_TYPE.MASTER;
		_turnCnt       = 1;
		_turnTimeLimit = Common.Const.TURN_TIME;
		_turnTimeLimitCoroutine = null;
		// プレイヤー情報取得
		_player           = PhotonNetwork.player;
		_territoryLineNum = Common.Const.NUM_HEIGHT / 2;
        // イベント登録
        PhotonNetwork.OnEventCall += OnRaiseEvent;
		List<int> panel_object_list;
		var territoryList = _mainManager.TerritoryList;
		GameObject.Find( "TimeLimitText" ).GetComponent<TMPro.TextMeshProUGUI>().text = "Limit:"+_turnTimeLimit;
		// マスタークライアント
		if(_player.IsMasterClient){
			Debug.Log( "Master" );
			_playerType     = Common.Const.PLAYER_TYPE.MASTER;
			panel_object_list = new List<int>{ (int)Common.Const.PLAYER_TYPE.MASTER, (int)Common.Const.PLAYER_TYPE.GUEST };
			//GameObject.Find( "GameObject/UserTurnText" ).GetComponent<TMPro.TextMeshProUGUI>().text = "あなたのターン";
            _mainManager.PlayerTurnImageManager.SetTurnImage(true);
			for(var i = 0; i < 2; ++i){
				territoryList[i].Init(i+1, (int)_playerType);
				territoryList[i].SetSize(_territoryLineNum);
			}
			_turnTimeLimitCoroutine = StartCoroutine(TimeLimitCount());
		}
		// ゲスト
		else{
			Debug.Log( "Not Master" );
			_playerType     = Common.Const.PLAYER_TYPE.GUEST;
			panel_object_list = new List<int>{ (int)Common.Const.PLAYER_TYPE.GUEST, (int)Common.Const.PLAYER_TYPE.MASTER };
			//GameObject.Find( "GameObject/UserTurnText" ).GetComponent<TMPro.TextMeshProUGUI>().text = "あいてのターン";
            _mainManager.PlayerTurnImageManager.SetTurnImage(false);

			for(var i = 1; i >= 0; --i){
				territoryList[i].Init(i+1, (int)_playerType);
				territoryList[i].SetSize(_territoryLineNum);
			}
		}
        PhotonNetwork.RaiseEvent( (byte)EEventType.PlayerName, "Hello!", true, RaiseEventOptions.Default );
		//_mainManager.TerritoryLine.SetPos(_territoryLineNum);
		_mainManager.TerritoryLine.Init();


		var parentTransform = _mainManager.PanelParentTransform;
		var scaleRate       = _mainManager.WorldTransform.localScale.x;
        var worldPosition   = _mainManager.WorldTransform.position;
        // エリア頂点リスト
        _areaVertexList   = new List<List<AreaVertex>>();
        var vertextHeight = Common.Const.NUM_HEIGHT+1;
        var vertexWidth   = Common.Const.NUM_WIDTH+1;
        for(var i = 0; i < vertextHeight; ++i){

            _areaVertexList.Add(new List<AreaVertex>());
            for(var j = 0; j < vertexWidth; ++j){

                var areaVertex  = Instantiate(_mainManager.AreaVertexPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X - Common.Const.BLOCK_SIZE_HALF, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y - Common.Const.BLOCK_SIZE_HALF, 0.0f) * scaleRate + worldPosition, Quaternion.identity, parentTransform).GetComponent<AreaVertex>();
                _areaVertexList[i].Add(areaVertex);
            }
        }




        // 状態リスト
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
		// ステージ作成
		_areaList           = new List<List<Area>>();
		for(var i = 0; i < state_list.Count; ++i){

			_areaList.Add(new List<Area>());
			for(var j = 0; j < state_list[i].Count; ++j){

				var area  = Instantiate(_mainManager.AreaPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * scaleRate + worldPosition, Quaternion.identity, parentTransform).GetComponent<Area>();
				var panel = Instantiate(_mainManager.PanelPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * scaleRate + worldPosition, Quaternion.identity, area.transform).GetComponent<Panel>();
				//var panel = Instantiate(_mainManager.PanelPrefab, Vector3.zero, Quaternion.identity, area.transform).GetComponent<Panel>();
				panel.StateChange(state_list[i][j]);
				area.Init(panel, state_list[i][j], 0);
				_areaList[i].Add(area);
			}
		}
		// 置ける場所設定
		for(var i = 0; i < Common.Const.NUM_WIDTH; ++i){
			_areaList[0][i].SetPlacementFlg(true);
		}
		// 掴むブロック作成
		_holdBlockList = new List<HoldBlock>();
		for(var i = 0; i < 3; ++i){

			var holdBlock = Instantiate(_mainManager.HoldBlockPrefab, new Vector3(2.0f * i - 2.0f, -3.2f, 0.0f) + worldPosition, Quaternion.identity, _mainManager.HoldParentTransform).GetComponent<HoldBlock>();
			holdBlock.Init(_mainManager);
			_holdBlockList.Add(holdBlock);
		}
	}


	
	// Update is called once per frame
	void Update ()
	{
		if( _turnFlg == (int)_playerType - 1 ) {
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
		// 受信側プレイヤーは反転表示
		if(_playerType != playerType){

			for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){
				list[i].Reverse();
			}
			list.Reverse();
		}

        var worldPosition = _mainManager.WorldTransform.position;
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				if(list[i][j] > 0 && _areaList[i][j].Block == null /*&& _areaList[i][j].Panel.State == list[i][j]*/){

					var block = Instantiate(_mainManager.BlockPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * _mainManager.WorldTransform.localScale.x + worldPosition, Quaternion.identity, _mainManager.PanelParentTransform).GetComponent<Block>();
					block.Init(list[i][j], this, j, i);
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
			_territoryLineNum -= lineCnt;
		}
		else{
			_territoryLineNum += lineCnt;
		}
		// 列が揃ったブロック削除
		var destroyStart  = 0;
        var worldPosition = _mainManager.WorldTransform.position;
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				if(list[i][j] > 0 && _areaList[i][j].Block != null){
					if(destroyStart == -1){
						destroyStart = i + j;
					}
					var effect = Instantiate(_mainManager.DestroyEffectPrefab, _areaList[i][j].Block.transform.position, Quaternion.identity, _mainManager.PanelParentTransform).GetComponent<DestroyEffect>();
					effect.Init(_areaList[i][j].Block.State, _mainManager.SoundManager, (i+j-destroyStart)*0.1f);
					Destroy(_areaList[i][j].Block.gameObject);
					_areaList[i][j].Block = null;
				}
			}
		}
		// ブロック移動判定
		if(_playerType == playerType){
			_areaList.Reverse();
		}
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			if(_areaList[i][0].Panel.State == (int)playerType){
				break;
			}
			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				// ブロックがあればブロック移動
				if(_areaList[i][j].Block != null){
					if(i - lineCnt >= 0 && _areaList[i-lineCnt][j].Block == null){
						_areaList[i-lineCnt][j].Block = _areaList[i][j].Block;
						_areaList[i-lineCnt][j].Block.Move(_areaList[i-lineCnt][j].Panel.transform.position, j, i-lineCnt);
					}
					else{
//                        _areaList[i-lineCnt][j].Block.Move(_areaList[i-lineCnt][j].Panel.transform.position);
//						Destroy(_areaList[i][j].Block.gameObject);
                        //_areaList[i][j].Block.Move(new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, (i-lineCnt) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * _mainManager.WorldTransform.localScale.x, true);
                        //_areaList[i][j].Block.Move(_areaList[i][j].Panel.transform.position - new Vector3(0.0f, lineCnt * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y * _mainManager.WorldTransform.localScale.x, 0.0f), true);
                        //Debug.Log(new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, (i-lineCnt) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * _mainManager.WorldTransform.localScale.x);
                        var effect = Instantiate(_mainManager.DestroyEffectPrefab, _areaList[i][j].Block.transform.position, Quaternion.identity, _mainManager.PanelParentTransform).GetComponent<DestroyEffect>();
                        effect.Init(_areaList[i][j].Block.State, _mainManager.SoundManager, 0.0f);
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
					_areaList[i][j].Panel.StateChange(panelList[i][j]);
				}
			}
		}
		// 範囲更新
		UpdateTerritory();


		// 勝敗判定
		if(_territoryLineNum == Common.Const.NUM_HEIGHT){
			Debug.Log("win");
			// 勝利ユーザー送信
			_gameEndFlg = true;
			var obj     = new object[]{_playerType, false};
			_photonView.RPC("GameEnd", PhotonTargets.All, obj);
		}
		// チェック
		if(playerType == _playerType && !_gameEndFlg){
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
		if(_mainManager._debugFlg){
			UpdatePlacementArea();
			return;
		}
		if(Common.Const.PLAYER_TYPE.MASTER == playerType){
			_turnFlg = (int)Common.Const.PLAYER_TYPE.GUEST;
		}
		else{
			_turnFlg = (int)Common.Const.PLAYER_TYPE.MASTER;
		}
		// 終了ターン数経過
		if(_playerType == Common.Const.PLAYER_TYPE.MASTER){
			if(_turnCnt + 1 > Common.Const.GAME_END_TURN){
				GameEndTurnCheck();
				return;
			}
		}
		// ターンカウント
		if(playerType == _playerType){
			++_turnCnt;
			GameObject.Find( "TurnText" ).GetComponent<TMPro.TextMeshProUGUI>().text = _turnCnt.ToString();
		}
		// タイムリミット表示
		_turnTimeLimit = Common.Const.TURN_TIME;
		GameObject.Find( "TimeLimitText" ).GetComponent<TMPro.TextMeshProUGUI>().text = _turnTimeLimit.ToString();
		if(_turnTimeLimitCoroutine != null){
			StopCoroutine(_turnTimeLimitCoroutine);
			_turnTimeLimitCoroutine = null;
		}

		// 表示
		if(_turnFlg == (int)_playerType){
//			GameObject.Find( "UserTurnText" ).GetComponent<TMPro.TextMeshProUGUI>().text = "あなたのターン";
            _mainManager.PlayerTurnImageManager.SetTurnImage(true);

			_turnTimeLimitCoroutine = StartCoroutine(TimeLimitCount());
		}
		else{
//			GameObject.Find( "UserTurnText" ).GetComponent<TMPro.TextMeshProUGUI>().text = "あいてのターン";
            _mainManager.PlayerTurnImageManager.SetTurnImage(false);

		}

		// 置ける範囲更新
		UpdatePlacementArea();
	}

	[PunRPC]
	/// <summary>
	/// ゲーム終了RPC
	/// </summary>
	/// <param name="playerType">勝利したユーザータイプ</param>
	public void GameEnd(Common.Const.PLAYER_TYPE playerType, bool drawFlg)
	{		
		_gameEndFlg       = true;
        var victoryString = "";
		if(!drawFlg){
			// 勝ち
			if(_playerType == playerType){
                victoryString = "Win";
			}
			// 負け
			else{
                victoryString = "Lose";
			}
		}
		// 引き分け
		else{
            victoryString = "Draw";
		}
		// 終了表示
        _mainManager.VictoryView.SetContent(victoryString);
		Invoke("EndGame", 1.0f);
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
		// ブロック削除後リスト作成
		for(var i = 0; i < _areaList.Count; ++i){
			deleteList.Add(Enumerable.Repeat(0, _areaList[i].Count).ToList());
		}
		var lineCnt = CheckLineDeleteNum(ref deleteList);


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
	/// 配置できる場所を更新
	/// </summary>
	private void UpdatePlacementArea()
	{
		// 初期化
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){
			
			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				if(_areaList[i][j].PlacementFlg){
					_areaList[i][j].SetPlacementFlg(false);
				}
			}
		}
		// 更新
		var updateFlg = false;
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){
			
			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				// 自分のブロックがある場合
				if(_areaList[i][j].Block != null && _areaList[i][j].Block.State == (int)_playerType){

					// 四方チェック
					// 下
					if(i>0 && _areaList[i-1][j].Block == null){
						_areaList[i-1][j].SetPlacementFlg(true);
						updateFlg = true;
					}
					// 上
					if(i<Common.Const.NUM_HEIGHT-1 && _areaList[i+1][j].Block == null){
						_areaList[i+1][j].SetPlacementFlg(true);
						updateFlg = true;
					}
					// 左
					if(j>0 && _areaList[i][j-1].Block == null){
						_areaList[i][j-1].SetPlacementFlg(true);
						updateFlg = true;
					}
					// 右
					if(j<Common.Const.NUM_WIDTH-1 && _areaList[i][j+1].Block == null){
						_areaList[i][j+1].SetPlacementFlg(true);						
						updateFlg = true;
					}
				}
			}
		}
		// 一つも置ける場所がない場合
		if(!updateFlg){
			for(var i = 0; i < Common.Const.NUM_WIDTH; ++i){
				_areaList[0][i].SetPlacementFlg(true);
			}
		}
	}

	/// <summary>
	/// 現在ターン中か
	/// </summary>
	/// <returns>true or false</returns>
	public bool CheckNowTurn()
	{
		return (int)_playerType == _turnFlg;
	}

	/// <summary>
	/// パス
	/// </summary>
	public void PassTurn()
	{
		if(!CheckNowTurn()){
			return;
		}
		for(var i = 0; i < _holdBlockList.Count; ++i){
			_holdBlockList[i].Reset();
		}
		var obj = new object[]{_playerType};
		_photonView.RPC("TurnChange", PhotonTargets.All, obj);

	}

	/// <summary>
	/// 陣地更新
	/// </summary>
	private void UpdateTerritory()
	{
		if(_playerType == Common.Const.PLAYER_TYPE.MASTER){
			_mainManager.TerritoryList[0].ChangeSize(_territoryLineNum);
			_mainManager.TerritoryList[1].ChangeSize(Common.Const.NUM_HEIGHT-_territoryLineNum);
		}
		else{
			_mainManager.TerritoryList[1].ChangeSize(_territoryLineNum);
			_mainManager.TerritoryList[0].ChangeSize(Common.Const.NUM_HEIGHT-_territoryLineNum);
		}
		_mainManager.TerritoryLine.SetPos(_territoryLineNum);
	}

	/// <summary>
	/// 列揃った判定
	/// </summary>
	/// <param name="deleteList"></param>
	/// <returns></returns>
	private int CheckLineDeleteNum(ref List<List<int>> deleteList)
	{
		var lineCnt = 0;
		// 列揃ったか判定
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			var j = 0;
			for(; j < Common.Const.NUM_WIDTH; ++j){

				if(_areaList[i][j].Block == null){
					break;
				}
			}
			// ライン全部埋まったか
			if(j == Common.Const.NUM_WIDTH){
				for(j = 0; j < Common.Const.NUM_WIDTH; ++j){
					deleteList[i][j] = 1;
				}
				++lineCnt;
			}
		}
		// 行揃ったか判定
		for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

			var i = 0;
			for(; i < Common.Const.NUM_HEIGHT; ++i){

				if(_areaList[i][j].Block == null){
					break;
				}
			}
			// ライン全部埋まったか
			if(i == Common.Const.NUM_HEIGHT){
				for(i = 0; i < Common.Const.NUM_HEIGHT; ++i){
					deleteList[i][j] = 1;
				}
				++lineCnt;
			}
		}
		// 削除
        var worldPosition = _mainManager.WorldTransform.position;
		var destroyStart  = -1;
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				if(deleteList[i][j] == 1){
					// エフェクト開始地点
					if(destroyStart == -1){
						destroyStart = i + j;
					}
					var effect = Instantiate(_mainManager.DestroyEffectPrefab, _areaList[i][j].Block.transform.position, Quaternion.identity, _mainManager.PanelParentTransform).GetComponent<DestroyEffect>();
					Debug.Log(_areaList[i][j].Block.State);
					effect.Init(_areaList[i][j].Block.State, _mainManager.SoundManager, (i+j-destroyStart)*0.1f);
					Destroy(_areaList[i][j].Block.gameObject);
					_areaList[i][j].Block = null;
				}
			}
		}
		return lineCnt;
	}

	/// <summary>
	/// ターンのタイムリミット計測コルーチン
	/// </summary>
	/// <returns></returns>
	private IEnumerator TimeLimitCount()
	{
		// ターン計測
		while(true){

			_turnTimeLimit -= Time.deltaTime;
            _mainManager.TimeLimitClock.SetClock(Common.Const.TURN_TIME, _turnTimeLimit);
			if(_turnTimeLimit < 0.0f){
				_turnTimeLimit = 0.0f;
				break;
			}
			GameObject.Find( "TimeLimitText" ).GetComponent<TMPro.TextMeshProUGUI>().text = ((int)_turnTimeLimit).ToString();
			yield return null;
		}
		GameObject.Find( "TimeLimitText" ).GetComponent<TMPro.TextMeshProUGUI>().text = ((int)_turnTimeLimit).ToString();
		// ターン変更処理
		PassTurn();
	}

	/// <summary>
	/// ゲーム終了ターン判定
	/// </summary>
	private void GameEndTurnCheck()
	{
		var half     = Common.Const.NUM_HEIGHT / 2;
		object[] obj = null;
		// 勝利
		if(half < _territoryLineNum){
			obj = new object[]{_playerType, false};
		}
		// 敗北
		else if(half > _territoryLineNum){
			var sendPlayerType = Common.Const.PLAYER_TYPE.MASTER;
			if(_playerType == Common.Const.PLAYER_TYPE.MASTER){
				sendPlayerType = Common.Const.PLAYER_TYPE.GUEST;
			}
			obj = new object[]{sendPlayerType, false};
		}
		// 引き分け
		else{
			obj = new object[]{_playerType, true};
		}
		// 送信
		_photonView.RPC("GameEnd", PhotonTargets.All, obj);
	}

    private void OnRaiseEvent( byte i_eventcode, object i_content, int i_senderid )
    {
        string eventMessage = null;
        var eventType   = (EEventType)i_eventcode;
        switch( eventType ){
        case EEventType.PlayerName:
            //eventMessage    = string.Format( "[{0}] {1} - Sender({2})", eventType, (string)i_content, i_senderid );
            break;
        default:
            break;
        }
        // あれば表示
        if( !string.IsNullOrEmpty( eventMessage ) ){
            _mainManager.PlayerNameText.text = eventMessage;
        }
    }}


