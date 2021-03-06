﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;


public class ClientManager : MonoBehaviour {

    #region 定数
    public enum EEventType : byte
    {
        PlayerName = 1,
        StartAnimationEnd,
        EndGame
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
    private List<AreaVertexLight> _areaVertexLightList;
	private bool _gameEndFlg;
	private List<HoldBlock> _holdBlockList;
	private Coroutine _turnTimeLimitCoroutine;

    private Transform _parentTransform;
    private float _scaleRate;
    private Vector3 _worldPosition;
    private int _lightCreateInterval;
    private bool _initFlg;
    private string _enemyPlayerName;
    private int _enemyPanelID;
    private bool _enemyInitFlg;
    private bool _deleteNowFlg;
    private Block _spawnCheckBlock;
    private GameObject _tutorialObject;
    private float _initCheckCount;
    private ParticleSystem _playerParticle;
    private ParticleSystem _enemyParticle;
    private bool _blockSetFlg;
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
    public bool InitFlg{
        get{return _initFlg;}
    }
    public List<List<AreaVertex>> AreaVertexList{
        get{return _areaVertexList;}
    }
    public List<AreaVertexLight> AreaVertexLightList{
        get{return _areaVertexLightList;}
    }
    public bool BlockSetFlg{
        get{return _blockSetFlg;}
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
        _blockSetFlg = false;
        _lightCreateInterval = 300;
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
		var territoryList                   = _mainManager.TerritoryList;
		_mainManager.TimeLimitText.text     = _turnTimeLimit.ToString();
        _mainManager.TimeLimitText.fontSize = 56;
		// マスタークライアント
		if(_player.IsMasterClient){
			Debug.Log( "Master" );
			_playerType     = Common.Const.PLAYER_TYPE.MASTER;
			panel_object_list = new List<int>{ (int)Common.Const.PLAYER_TYPE.MASTER, (int)Common.Const.PLAYER_TYPE.GUEST };
			for(var i = 0; i < 2; ++i){
				territoryList[i].Init(i+1, (int)_playerType);
				territoryList[i].SetSize(_territoryLineNum);
			}
            _playerParticle = _mainManager.ParticlePurple;
            _enemyParticle  = _mainManager.ParticleYellow; 
		}
		// ゲスト
		else{
			Debug.Log( "Not Master" );
			_playerType     = Common.Const.PLAYER_TYPE.GUEST;
			panel_object_list = new List<int>{ (int)Common.Const.PLAYER_TYPE.GUEST, (int)Common.Const.PLAYER_TYPE.MASTER };
			for(var i = 1; i >= 0; --i){
				territoryList[i].Init(i+1, (int)_playerType);
				territoryList[i].SetSize(_territoryLineNum);
			}
            _playerParticle = _mainManager.ParticleYellow;
            _enemyParticle  = _mainManager.ParticlePurple;

		}
        _mainManager.TurnLimitText.text = Common.Const.GAME_END_TURN.ToString();
		_mainManager.TerritoryLine.Init();

		_parentTransform = _mainManager.PanelParentTransform;
		_scaleRate       = _mainManager.WorldTransform.localScale.x;
        _worldPosition   = _mainManager.WorldTransform.position;
        // エリア頂点リスト
        _areaVertexList   = new List<List<AreaVertex>>();
        var vertextHeight = Common.Const.NUM_HEIGHT+1;
        var vertexWidth   = Common.Const.NUM_WIDTH+1;
        for(var i = 0; i < vertextHeight; ++i){

            _areaVertexList.Add(new List<AreaVertex>());
            for(var j = 0; j < vertexWidth; ++j){

                var areaVertex  = Instantiate(_mainManager.AreaVertexPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X - Common.Const.BLOCK_SIZE_HALF, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y - Common.Const.BLOCK_SIZE_HALF, 0.0f) * _scaleRate + _worldPosition, Quaternion.identity, _parentTransform).GetComponent<AreaVertex>();
                areaVertex.Init(this);
                _areaVertexList[i].Add(areaVertex);
            }
        }
        _areaVertexLightList = new List<AreaVertexLight>();
        // 状態リスト
		List<List<int>> state_list = new List<List<int>>();		
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i ) {

			// 上下でエリアを分ける
            var line_list = Common.Const.NUM_HEIGHT / 2 > i ? panel_object_list[0] : panel_object_list[1];
            state_list.Add(Enumerable.Repeat(line_list, Common.Const.NUM_WIDTH).ToList());
			// if( Common.Const.NUM_HEIGHT / 2 > i ) {
			// 	state_list.Add(Enumerable.Repeat(panel_object_list[0], Common.Const.NUM_WIDTH).ToList());
			// }
			// else{
			// 	state_list.Add(Enumerable.Repeat(panel_object_list[1], Common.Const.NUM_WIDTH).ToList());
			// }
			//_blockList.Add(Enumerable.Repeat(0, Common.Const.NUM_WIDTH ).ToList());
		}
		// ステージ作成
		_areaList           = new List<List<Area>>();
		for(var i = 0; i < state_list.Count; ++i){

			_areaList.Add(new List<Area>());
			for(var j = 0; j < state_list[i].Count; ++j){

				var area  = Instantiate(_mainManager.AreaPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * _scaleRate + _worldPosition, Quaternion.identity, _parentTransform).GetComponent<Area>();
				var panel = Instantiate(_mainManager.PanelPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * _scaleRate + _worldPosition, Quaternion.identity, area.transform).GetComponent<Panel>();
				panel.StateChange(state_list[i][j]);
				area.Init(panel, state_list[i][j], 0);
				_areaList[i].Add(area);
			}
		}
		// 置ける場所設定
        var nowTurnFlg = _turnFlg == (int)_playerType;
		for(var i = 0; i < Common.Const.NUM_WIDTH; ++i){

			_areaList[0][i].SetPlacementFlg(true);
            _areaList[0][i].Panel.SetTurn(nowTurnFlg);
		}
		// 掴むブロック作成
		_holdBlockList = new List<HoldBlock>();
		for(var i = 0; i < 3; ++i){

			var holdBlock = Instantiate(_mainManager.HoldBlockPrefab, new Vector3(1.6f * i - 1.6f, -3.2f, 0.0f) + _worldPosition, Quaternion.identity, _mainManager.HoldParentTransform).GetComponent<HoldBlock>();
			holdBlock.Init(_mainManager);
            holdBlock.SetTurnColor();
			_holdBlockList.Add(holdBlock);
		}
        StartCoroutine(StartAnimationEndCheck());        
        // プレイヤーネームとレートを送信
        PhotonNetwork.RaiseEvent( (byte)EEventType.PlayerName, PlayerPrefs.GetString(Common.Const.PLAYER_NAME_KEY, "player")+":"+PlayerPrefs.GetString(Common.Const.PLAYER_RATE_KEY, "1500")+":"+_mainManager.PanelID.ToString(), true, RaiseEventOptions.Default );
	}

	// Update is called once per frame
	void Update ()
	{
        if(_initFlg != true) return;
        // 初期一　x,y 移動方向 x 発生間隔
        if(_lightCreateInterval >= 180){
            var areaVertexLight  = Instantiate(_mainManager.AreaVertextLightPrefab, new Vector3(Random.Range(0, 2) * 10.0f - 5.0f, Random.Range(-3.5f, 3.5f), 0.0f) * _scaleRate + _worldPosition, Quaternion.identity, _parentTransform).GetComponent<AreaVertexLight>();
            areaVertexLight.Init(this);
            _areaVertexLightList.Add(areaVertexLight);
            _lightCreateInterval = Random.Range(0, 240);
        }
        ++_lightCreateInterval;

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

        var blockSprite   = _playerType == playerType ? _mainManager.PanelResourceManager.GetPlayerSprite() : _mainManager.PanelResourceManager.GetSprite(_enemyPanelID);
        var worldPosition = _mainManager.WorldTransform.position;
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				if(list[i][j] > 0 && _areaList[i][j].Block == null /*&& _areaList[i][j].Panel.State == list[i][j]*/){

					var block = Instantiate(_mainManager.BlockPrefab, new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, i * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * _mainManager.WorldTransform.localScale.x + worldPosition, Quaternion.identity, _mainManager.PanelParentTransform).GetComponent<Block>();
					block.Init(list[i][j], this, j, i, playerType != _playerType, blockSprite);
					_areaList[i][j].Block = block;
                    _spawnCheckBlock      = block;
				}
			}
		}

		// 最後にターン終了扱いにしてターンを更新
		//m_turn_cnt = ++m_turn_cnt % 2;
		// 敵と味方でY軸が逆になるのがネック
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
        _deleteNowFlg   = true;
        // if(_spawnCheckBlock != null && _spawnCheckBlock.SpawnAnimationFlg){

        //     // FIXME: 生成待ち処理　すごいバグになったので様子見
        //     // StartCoroutine(SpawnWait(()=>{
        //     //     DeleteBlock(list, panelList, playerType, lineCnt);
        //     // }));
        // }
		// 受信側プレイヤーは反転表示
		if(_playerType != playerType){
			for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){
				panelList[i].Reverse();
				list[i].Reverse();
			}
			panelList.Reverse();
			list.Reverse();
			// ブロックを移動させる関係で受信側は逆で判定
			_territoryLineNum -= lineCnt;
		}
		else{
			_territoryLineNum += lineCnt;
		}
		// 列が揃ったブロック削除
        
		var destroyStart    = 0;
        var worldPosition   = _mainManager.WorldTransform.position;
        var lastDestroyTime = 0.0f;
        var rate            = 5.0f;
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){

			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){

				if(list[i][j] > 0 && _areaList[i][j].Block != null){
					if(destroyStart == -1){
						destroyStart = i + j;
					}
					var effect      = Instantiate(_mainManager.DestroyEffectPrefab, _areaList[i][j].Block.transform.position, Quaternion.identity, _mainManager.PanelParentTransform).GetComponent<DestroyEffect>();
                    var blockSprite = _playerType == (Common.Const.PLAYER_TYPE)_areaList[i][j].Block.State ? _mainManager.PanelResourceManager.GetPlayerSprite() : _mainManager.PanelResourceManager.GetSprite(_enemyPanelID);
					effect.Init(_areaList[i][j].Block.State, _mainManager.SoundManager, (i+j-destroyStart)*0.1f, _mainManager.ParticleManager, blockSprite);
//					effect.Init(_areaList[i][j].Block.State, _mainManager.SoundManager, (+Mathf.Abs(i - Common.Const.NUM_HEIGHT / 2) + Mathf.Abs(j - Common.Const.NUM_HEIGHT / 2) + destroyStart)*0.2f);
					Destroy(_areaList[i][j].Block.gameObject);
					_areaList[i][j].Block = null;
                    lastDestroyTime       = (i+j-destroyStart);
				}
			}
		}
        // ブロック移動
        StartCoroutine(MoveBlock(panelList, playerType, lineCnt, lastDestroyTime*0.1f+2.5f));
        // パーティクル演出
        var emission          = _playerType != playerType ? _enemyParticle.emission : _playerParticle.emission;
        emission.rateOverTime = 100.0f;
        if(_playerType != playerType){
            var particleMain = _enemyParticle.main;
            particleMain.startSpeed = new ParticleSystem.MinMaxCurve(25.0f, 1.0f);
            particleMain.startSize  = new ParticleSystem.MinMaxCurve(5.0f);
        }
        else{
            var particleMain = _playerParticle.main;
            particleMain.startSpeed = new ParticleSystem.MinMaxCurve(25.0f, 1.0f);           
            particleMain.startSize  = new ParticleSystem.MinMaxCurve(5.0f);
        }

        Invoke("ResetParticle", 2.0f);
        // LINE!　演出
        if(lineCnt < 2){
            _mainManager.SoundManager.PlayOnShot(4);
            // 削除演出
            _mainManager.LineDestoryAnimator.Play("LineMatchEffectParent_MatchLine", 0, 0.0f);
            _mainManager.DestroyLineNumText.text = lineCnt.ToString();
        }
        else{
            StartCoroutine(LineDestoryAnimationMultiple(lineCnt));
        }
	}

    private void ResetParticle()
    {
        var emission            = _enemyParticle.emission;
        emission.rateOverTime   = 2.0f;
        var particleMain        = _enemyParticle.main;
        particleMain.startSpeed = new ParticleSystem.MinMaxCurve(0.8f);
        particleMain.startSize  = new ParticleSystem.MinMaxCurve(1.0f);
        emission                = _playerParticle.emission;
        emission.rateOverTime   = 2.0f;
        particleMain            = _playerParticle.main;
        particleMain.startSpeed = new ParticleSystem.MinMaxCurve(0.8f);
        particleMain.startSize  = new ParticleSystem.MinMaxCurve(1.0f);

    }

    private IEnumerator LineDestoryAnimationMultiple(int lineCnt)
    {
        for(var i = 1; i < lineCnt; ++i){

            _mainManager.LineDestoryAnimator.Play("LineMatchEffectParent_MatchLineNext", 0, 0.0f);
            _mainManager.DestroyLineNumText.text = i.ToString();
            _mainManager.SoundManager.PlayOnShot(4);
            yield return null;
            var nowState = _mainManager.LineDestoryAnimator.GetCurrentAnimatorStateInfo(0);
            while(nowState.normalizedTime < 1.0f){
                yield return null;
                nowState = _mainManager.LineDestoryAnimator.GetCurrentAnimatorStateInfo(0);
            }
        }
        _mainManager.LineDestoryAnimator.Play("LineMatchEffectParent_MatchLineMultiple", 0, 0.0f);
        _mainManager.DestroyLineNumText.text = lineCnt.ToString();
    }

    /// <summary>
    /// 削除して ブロック移動
    /// </summary>
    /// <param name="panelList"></param>
    /// <param name="playerType"></param>
    /// <param name="lineCnt"></param>
    /// <param name="waitTime"></param>
    /// <returns></returns>
    private IEnumerator MoveBlock(List<List<int>> panelList, Common.Const.PLAYER_TYPE playerType, int lineCnt, float waitTime)
    {
        yield return new WaitForSeconds(waitTime);
        // ブロック移動判定
		if(_playerType == playerType){
			_areaList.Reverse();
		}
        Block holdMoveBlock = null;
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
                        holdMoveBlock = _areaList[i-lineCnt][j].Block;
					}
					else{
                        // ブロック押し出し
//                        _areaList[i-lineCnt][j].Block.Move(_areaList[i-lineCnt][j].Panel.transform.position);
//						Destroy(_areaList[i][j].Block.gameObject);
                        //_areaList[i][j].Block.Move(new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, (i-lineCnt) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * _mainManager.WorldTransform.localScale.x, true);
                        //_areaList[i][j].Block.Move(_areaList[i][j].Panel.transform.position - new Vector3(0.0f, lineCnt * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y * _mainManager.WorldTransform.localScale.x, 0.0f), true);
                        //Debug.Log(new Vector3(j * Common.Const.BLOCK_SIZE + Common.Const.START_POS_X, (i-lineCnt) * Common.Const.BLOCK_SIZE + Common.Const.START_POS_Y, 0.0f) * _mainManager.WorldTransform.localScale.x);
                        var effect = Instantiate(_mainManager.PushedEffectPrefab, _areaList[i][j].Block.transform.position, Quaternion.identity, _mainManager.PanelParentTransform).GetComponent<PushedEffect>();
                        effect.Init(_areaList[i][j].Block.State,_playerType == playerType, 0.0f);
                        Destroy(_areaList[i][j].Block.gameObject);
					}
					_areaList[i][j].Block = null;
				}
			}
		}
        yield return null;
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
		// 陣地更新
		UpdateTerritory();
        // 待ち時間
        Debug.Log("holdMoveBlock:"+holdMoveBlock);
        while(_mainManager.TerritoryList[0].MoveFlg || (holdMoveBlock != null && holdMoveBlock.MoveFlg)){
            yield return null;
        }
        //yield return null;
        yield return new WaitForSeconds (1.0f);
        // yie
		//UpdatePlacementArea();

        _deleteNowFlg   = false;


		// 勝敗判定
		if(_territoryLineNum >= Common.Const.NUM_HEIGHT){
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
        // 遅延発生ため
        //if(playerType != _playerType){
        //}
    }


	[PunRPC]
	/// <summary>
	/// ターン変更RPC
	/// </summary>
	/// <param name="list"></param>
	/// <param name="playerType"></param>
	public void TurnChange(Common.Const.PLAYER_TYPE playerType)
	{
        // 遅延対策
        if(_deleteNowFlg){

            StartCoroutine(DeleteWait(()=>{
                Debug.Log("Start Turn Change");
                UpdatePlacementArea();
                TurnChange(playerType);
            }));
            return;
        }



		if(_mainManager._debugFlg){
			//UpdatePlacementArea();
			return;
		}
        _turnFlg = Common.Const.PLAYER_TYPE.MASTER == playerType ? (int)Common.Const.PLAYER_TYPE.GUEST : (int)Common.Const.PLAYER_TYPE.MASTER;
		// 終了ターン数経過
		if(_playerType == Common.Const.PLAYER_TYPE.MASTER && _turnCnt > Common.Const.GAME_END_TURN){
            GameEndTurnCheck();
            return;
		}
        // 掴んでいるブロックの位置初期化
        for(var i = 0; i < _holdBlockList.Count; ++i){

            _holdBlockList[i].ScaleCheck();
            // 掴めない色にする
            _holdBlockList[i].SetTurnColor();
        }

        // 置けるアニメーション更新
        var nowTurnFlg = _turnFlg == (int)_playerType;
        for(var i = 0; i < _areaList.Count; ++i){

            for(var j = 0; j < _areaList[i].Count; ++j){
                Debug.Log(i+"_"+j);
                _areaList[i][j].Panel.SetTurn(nowTurnFlg);
            }
        }
        // チュートリアル処理
        if(_tutorialObject != null){
            Destroy(_tutorialObject);
            _tutorialObject = null;
            PlayerPrefs.SetInt("tutorial_1", 1);
        }
        if(nowTurnFlg){
            SetTutorial();
        }

        _mainManager.TurnChangeLimitText.enabled = false;
		// ターンカウント
		if(playerType == _playerType){
			++_turnCnt;
            var showTurn = (Common.Const.GAME_END_TURN - _turnCnt + 1);
            _mainManager.TurnLimitText.text    = showTurn.ToString();
            _mainManager.TurnLimitText.enabled = false;

            // 開始時のプレイヤーだけ走る
            if(showTurn == Common.Const.GAME_END_TURN){
                _mainManager.TurnChangeLimitText.text    = "0";
            }
            // ターン減少演出用処理
            _mainManager.TurnChangeLimitText.enabled = true;
            _mainManager.PlayerTurnImageManager.SetIntervalCallback(()=>{
                _mainManager.TurnChangeLimitText.text    = showTurn.ToString();
            });
		}
		// タイムリミット表示
		_turnTimeLimit                  = Common.Const.TURN_TIME;
		_mainManager.TimeLimitText.text = _turnTimeLimit.ToString();
        StopTimeLimitCoroutine();

		// ターン表示
        _mainManager.PlayerTurnImageManager.SetTurnImage(_turnFlg == (int)_playerType);
        _mainManager.PlayerTurnImageManager.SetCallback(()=>{
            StopTimeLimitCoroutine();
            _turnTimeLimit          = Common.Const.TURN_TIME;
            _turnTimeLimitCoroutine = StartCoroutine(TimeLimitCount());
            // 自分のターン「だった」場合のみ
            if(playerType == _playerType){
                //GameObject.Find( "TurnText" ).GetComponent<TMPro.TextMeshProUGUI>().enabled = false;
                _mainManager.TurnLimitText.enabled       = true;
                _mainManager.TurnChangeLimitText.enabled = false;
            }
        });
        

		// 置ける範囲更新 受信側がまだ移動中の可能性があるため
        // 移動していない
        Debug.Log("territory move flg:"+_mainManager.TerritoryList[0].MoveFlg);
        Debug.Log("delete now flg:"+_deleteNowFlg);
        // if(!_mainManager.TerritoryList[0].MoveFlg){
//        if(!_deleteNowFlg){
    		UpdatePlacementArea();
        // }
        // else{
        //     StartCoroutine(CheckBlockMoveNow(nowTurnFlg));
        // }
        _blockSetFlg = false;
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
            var rate = int.Parse(PlayerPrefs.GetString(Common.Const.PLAYER_RATE_KEY, "1500"));
			// 勝ち
			if(_playerType == playerType){

                // TODO: とりあえずSE
                _mainManager.SoundManager.PlayOnShot(2);

                victoryString = "Win";
                rate         += 15;
                // ガチャ
                var skinGachaPoint  = PlayerPrefs.GetInt(Common.Const.PANEL_GACHA_POINT, 0);
                PlayerPrefs.SetInt(Common.Const.PANEL_GACHA_POINT, skinGachaPoint+1);

			}
			// 負け
			else{

                // TODO: なんかSE欲しい
                _mainManager.SoundManager.PlayOnShot(3);

                victoryString = "Lose";
                rate         -= 15;
			}
            PlayerPrefs.SetString(Common.Const.PLAYER_RATE_KEY, rate.ToString());
		}
		// 引き分け
		else{
            victoryString = "Draw";
		}
		// 終了表示
        _mainManager.VictoryView.SetContent(victoryString);
        _mainManager.GameEndAnimator.Play("VictoryText_GameEnd", 0, 0.0f);
		Invoke("EndGame", 2.0f);
        // タイムリミット表示
        StopTimeLimitCoroutine();
        PhotonNetwork.RaiseEvent( (byte)EEventType.EndGame, "", true, RaiseEventOptions.Default );

	}

    [PunRPC]
	public void GameStart()
	{		
        _mainManager.PlayerTurnImageManager.SetCallback(()=>{
            _turnTimeLimitCoroutine = StartCoroutine(TimeLimitCount());
        });
        switch(_playerType){
        case Common.Const.PLAYER_TYPE.MASTER:
            _mainManager.PlayerTurnImageManager.SetTurnImage(true);
            SetTutorial();
            break;
        case Common.Const.PLAYER_TYPE.GUEST:
            _mainManager.PlayerTurnImageManager.SetTurnImage(false);
            
            break;
        }
	}

    /// <summary>
    /// タップされた時の音
    /// </summary>
    /// <param name="playerType"></param>
    /// <param name="xPos"></param>
    /// <param name="yPos"></param>
    [PunRPC]
	public void PlayBlockTapSound(Common.Const.PLAYER_TYPE playerType, int xPos, int yPos)
	{
        if(_playerType != playerType){
            _mainManager.SoundManager.PlayOnShot(6+xPos);
            // ブロックがあればブロック移動
            if(_areaList[Common.Const.NUM_HEIGHT-yPos-1][Common.Const.NUM_WIDTH-xPos-1].Block != null){
                _areaList[Common.Const.NUM_HEIGHT-yPos-1][Common.Const.NUM_WIDTH-xPos-1].Block.StartTapAnimation();
            }
        }
	}

	/// <summary>
	/// ブロック更新処理
	/// </summary>
	/// <param name="range_list"></param>
	public void UpdateBlockList( List<List<int>> range_list )
	{
        _blockSetFlg = true;
		var obj = new object[]{range_list, _playerType};
		_photonView.RPC("UpdateBlock", PhotonTargets.All, obj);
	}

    /// <summary>
    /// ターンチェックコルーチン終了
    /// </summary>
    public void StopTimeLimitCoroutine()
    {


        if(_turnTimeLimitCoroutine != null){
        
            // FIXME: ゲーム終了時にエラーになった
            StopCoroutine(_turnTimeLimitCoroutine);
            _mainManager.TimeLimitText.rectTransform.anchorMax        = new Vector2(0.5f, 1.0f);
            _mainManager.TimeLimitText.rectTransform.anchorMin        = new Vector2(0.5f, 1.0f);
            _mainManager.TimeLimitText.rectTransform.anchoredPosition = new Vector3(5.0f, -60.0f, 0.0f);
            _turnTimeLimitCoroutine = null;
        }
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
    /// ブロックがタップされた際に呼び出す
    /// </summary>
    /// <param name="xPos"></param>
    /// <param name="yPos"></param>
    public void SendBlockTap(int xPos, int yPos)
    {
        var obj = new object[]{_playerType, xPos, yPos};
        _mainManager.SoundManager.PlayOnShot(6+xPos);
        _photonView.RPC("PlayBlockTapSound", PhotonTargets.All, obj);
    }

	/// <summary>
	/// 配置できる場所を更新
	/// </summary>
	private void UpdatePlacementArea()
	{
        Debug.Log("update placement area");
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
        
        // デバッグ用
        var areaText = "";
		for(var i = 0; i < Common.Const.NUM_HEIGHT; ++i){
			
			for(var j = 0; j < Common.Const.NUM_WIDTH; ++j){
                if( _areaList[i][j].Block != null){
                    areaText += _areaList[i][j].Block.State+",";
                }
                else{
                    areaText += 0+",";
                }
            }
                areaText += "\n";
        }
        Debug.Log(areaText);

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



        // TODO:ここでパーティクル弄れたらいいな

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
                    var blockSprite = _playerType == (Common.Const.PLAYER_TYPE)_areaList[i][j].Block.State ? _mainManager.PanelResourceManager.GetPlayerSprite() : _mainManager.PanelResourceManager.GetSprite(_enemyPanelID);
					effect.Init(_areaList[i][j].Block.State, _mainManager.SoundManager, (i+j-destroyStart)*0.1f, _mainManager.ParticleManager, blockSprite);
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
        var startTime = Time.time;
        var limitFlg  = false;
		// ターン計測
		while(true){
			_turnTimeLimit -= Time.deltaTime;
            
            var nowTime = 30.0f + startTime - Time.time;
            nowTime = nowTime < 0.0f ? 0.0f : nowTime;
            _mainManager.TimeLimitClock.SetClock(Common.Const.TURN_TIME, nowTime);
            //Debug.Log(nowTime);



			if(nowTime <= 0.0f){
				_turnTimeLimit = 0.0f;
				break;
			}
			_mainManager.TimeLimitText.text = ((int)_turnTimeLimit).ToString();
            if(nowTime < 10.0f){
                _mainManager.TimeLimitText.fontSize = 65 + (1.0f - (nowTime - (float)(int)nowTime))*20.0f;
                // 初回のみ更新
                if(!limitFlg){
                    _mainManager.TimeLimitText.alpha = 0.7f;
                    _mainManager.TimeLimitText.rectTransform.anchorMax        = Vector2.one * 0.5f;
                    _mainManager.TimeLimitText.rectTransform.anchorMin        = Vector2.one * 0.5f;
                    _mainManager.TimeLimitText.rectTransform.anchoredPosition = new Vector3(0.0f, -30.0f, 0.0f);
                    limitFlg = true;
                }
            }
			yield return null;
		}
        _mainManager.TimeLimitText.alpha    = 1.0f;
		_mainManager.TimeLimitText.text     = ((int)_turnTimeLimit).ToString();
        _mainManager.TimeLimitText.fontSize = 56;
        _mainManager.TimeLimitText.rectTransform.anchorMax = new Vector2(0.5f, 1.0f);
        _mainManager.TimeLimitText.rectTransform.anchorMin = new Vector2(0.5f, 1.0f);
        _mainManager.TimeLimitText.rectTransform.anchoredPosition = new Vector3(5.0f, -60.0f, 0.0f);
        // パスと同じ処理
        PassTurn();
        _turnTimeLimitCoroutine = null;
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

    /// <summary>
    /// データ受け取り
    /// </summary>
    /// <param name="eventcode"></param>
    /// <param name="content"></param>
    /// <param name="senderid"></param>
    private void OnRaiseEvent( byte eventcode, object content, int senderid )
    {
        Debug.Log(eventcode);
        Debug.Log(content);
        var eventType = (EEventType)eventcode;
        switch( eventType ){
        // 開始アニメーション開始
        case EEventType.PlayerName:
            // 二重送信チェック
            if(_enemyPlayerName != null) return;
            var contentList  = content.ToString().Split(':');
            _enemyPlayerName = contentList[0];
            var enemyRate    = contentList[1];
            _enemyPanelID    = int.Parse(contentList[2]);
            _mainManager.StartViewManager.Init(PlayerPrefs.GetString(Common.Const.PLAYER_NAME_KEY, "player"), _enemyPlayerName, PlayerPrefs.GetString(Common.Const.PLAYER_RATE_KEY, "1500"), enemyRate);
            System.Action callback = () => {
                _initFlg = true;
                PhotonNetwork.RaiseEvent( (byte)EEventType.StartAnimationEnd, true, true, RaiseEventOptions.Default );
            };
            _mainManager.StartViewManager.PlayAnimator(callback);

            // adsカウントアップ
            var ads_count = PlayerPrefs.GetInt("ads_count", 1);
            ++ads_count;
            PlayerPrefs.SetInt("ads_count", ads_count);
            break;
        // 開始アニメーション終了
        case EEventType.StartAnimationEnd:
            _enemyInitFlg = true;
            break;
        // ゲーム終了
        case EEventType.EndGame:
            if(_gameEndFlg){
                StopTimeLimitCoroutine();
                // 切断制御
                // 退出
                if(PhotonNetwork.inRoom) PhotonNetwork.LeaveRoom();
                // 切断
                PhotonNetwork.Disconnect();
            }
            break;
        default:
            break;
        }
    }

    /// <summary>
    /// マッチアニメーション終了チェック　相手プレイヤーと同期する
    /// </summary>
    /// <returns></returns>
    private IEnumerator StartAnimationEndCheck()
    {
        yield return null;
        while(_initFlg != true || _enemyInitFlg != true){
            //Debug.Log(_initFlg+"___"+_enemyInitFlg);
            // 片方だけ送られない場合があったため再送チェック処理
            if(_initFlg){
                _initCheckCount += Time.deltaTime;
                if(_initCheckCount > 0.5f){
                    PhotonNetwork.RaiseEvent( (byte)EEventType.PlayerName, PlayerPrefs.GetString(Common.Const.PLAYER_NAME_KEY, "player")+":"+PlayerPrefs.GetString(Common.Const.PLAYER_RATE_KEY, "1500")+":"+_mainManager.PanelID.ToString(), true, RaiseEventOptions.Default );
                    _initCheckCount = 0.0f;
                }
            }

            yield return null;
        }
        if(_playerType == Common.Const.PLAYER_TYPE.MASTER){
            // 開始rpc
            _photonView.RPC("GameStart", PhotonTargets.All);
        }
    }

    /// <summary>
    /// 移動中か判定
    /// </summary>
    /// <returns></returns>
    private IEnumerator CheckBlockMoveNow(bool nowTurnFlg)
    {

        // 待ち時間
        while(_deleteNowFlg){
            Debug.Log("移動中");
            for(var i = 0; i < _areaList.Count; ++i){

                for(var j = 0; j < _areaList[i].Count; ++j){
                    _areaList[i][j].Panel.StopAnimator();
                }
            }

            yield return null;
        }
        for(var i = 0; i < _areaList.Count; ++i){

            for(var j = 0; j < _areaList[i].Count; ++j){
                _areaList[i][j].Panel.StopAnimator();
            }
        }


        while(_mainManager.TerritoryList[0].MoveFlg){
            Debug.Log("移動中 check territory");
            yield return null;
        }
        Debug.Log("ゆっくりまつ");
        yield return new WaitForSeconds (10.0f);


        Debug.Log("移動終了");
        Debug.Log("now turn flg:"+nowTurnFlg);
//        yield return null;
        for(var i = 0; i < _areaList.Count; ++i){

            for(var j = 0; j < _areaList[i].Count; ++j){
                _areaList[i][j].Panel.StopAnimator();
            }
        }
        UpdatePlacementArea();
        yield return null;
        for(var i = 0; i < _areaList.Count; ++i){

            for(var j = 0; j < _areaList[i].Count; ++j){
                _areaList[i][j].Panel.SetTurn(nowTurnFlg);
            }
        }
    }


    private IEnumerator DeleteWait(System.Action callback)
    {
        while(_deleteNowFlg){
            Debug.Log("delete wait");
            yield return null;
        }
        callback();
    }

    private IEnumerator SpawnWait(System.Action callback)
    {
        while(_spawnCheckBlock != null && _spawnCheckBlock.SpawnAnimationFlg){
            yield return null;
        }
        callback();
    }

    private void SetTutorial()
    {
        if(PlayerPrefs.GetInt("tutorial_1", 0) == 0){
            // 生成
            _tutorialObject = Instantiate(_mainManager.TutorialObject, Vector3.zero, Quaternion.identity, _mainManager.CanvasParent.transform);
            _tutorialObject.GetComponent<RectTransform>().anchoredPosition = new Vector2(0.0f, -170.0f);
        }
    }

    public void TestWin()
    {
        // 勝利ユーザー送信
        _gameEndFlg = true;
        var obj     = new object[]{_playerType, false};
        _photonView.RPC("GameEnd", PhotonTargets.All, obj);
    }
}


