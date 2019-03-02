using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
public class MainManager : MonoBehaviour {

	#region SerializeFiled
	[SerializeField, Tooltip("ネットワークマネージャ")]
	private NetworkManager _network_mgr;
	[SerializeField, Tooltip("エリアプレハブ")]
	private GameObject _areaPrefab;
	[SerializeField, Tooltip("パネルプレハブ")]
	private GameObject _panelPrefab;
	[SerializeField, Tooltip("ブロックプレハブ")]
	private GameObject _blockPrefab;
	[SerializeField, Tooltip("掴むブロックプレハブ")]
	private GameObject _holdBlockPrefab;
	[SerializeField, Tooltip("掴みブロック子要素プレハブ")]
	private GameObject _placementBlockPrefab;
	[SerializeField, Tooltip("削除エフェクト")]
	private GameObject _destroyEffectPrefab;
	[SerializeField, Tooltip("パネル親行列")]
	private Transform _panelParent;
	[SerializeField, Tooltip("掴みブロック親")]
	private Transform _holdParent;
	[SerializeField, Tooltip("client manager")]
	private ClientManager _clientManager;
	[SerializeField, Tooltip("WorldTransform")]
	private Transform _worldTransform;
	[SerializeField, Tooltip("ポップアップメニュー画面")]
	private PopupView _popupView;
	[SerializeField, Tooltip("メニューボタン")]
	private Button _menuButton;
	[SerializeField, Tooltip("陣地")]
	private List<Territory> _territoryList;
	[SerializeField, Tooltip("陣地線")]
	private TerritotyLine _territoryLine;
	[SerializeField, Tooltip("勝敗ビュー")]
	private CanvasGroup _victoryView;
	[SerializeField, Tooltip("パスボタン")]
	private Button _passButton;
	[SerializeField, Tooltip("通話プレハブ")]
	private GameObject _voiceManagerPrefab;
    [SerializeField, Tooltip("フェード管理")]
    private FadeManager _fadeManager;
    [SerializeField, Tooltip("サウンド管理")]
    private SoundManager _soundManager;

	// デバッグ用
	[SerializeField]
	public bool _debugFlg;
	#endregion

	#region private field
	private List<List<List<int>>> _holdBlockData;
	private List<int> _holdBlockGroupList;
	private List<int> _blockSelectedList;
	private int _blockListKey;
	private int debugCounter = 0;
	private Coroutine _matchAnimationCoroutine;
	#endregion

	#region access
	public GameObject AreaPrefab{
		get{return _areaPrefab;}
	}
	public GameObject PanelPrefab{
		get{return _panelPrefab;}
	}
	public GameObject BlockPrefab{
		get{return _blockPrefab;}
	}
	public GameObject HoldBlockPrefab{
		get{return _holdBlockPrefab;}
	}
	public GameObject PlacementBlockPrefab{
		get{return _placementBlockPrefab;}
	}
	public GameObject DestroyEffectPrefab{
		get{return _destroyEffectPrefab;}
	}
	public Transform PanelParentTransform{
		get{return _panelParent;}
	}
	public Transform HoldParentTransform{
		get{return _holdParent;}
	}
	public List<List<List<int>>> HoldBlockData{
		get{return _holdBlockData;}
	}
	public ClientManager ClientManager{
		get{return _clientManager;}
	}
	public Transform WorldTransform{
		get{return _worldTransform;}
	}
	public List<Territory> TerritoryList{
		get{return _territoryList;}
	}
	public TerritotyLine TerritoryLine{
		get{return _territoryLine;}
	}
	public CanvasGroup VictoryView{
		get{return _victoryView;}
	}
    public FadeManager FadeManager{
        get{return _fadeManager;}
    }
    public SoundManager SoundManager{
        get{return _soundManager;}
    }
	#endregion

	void Awake()
	{
		LoadBlockListFile();
		_network_mgr.MainManager = this;
        StartCoroutine(_fadeManager.FadeIn());
	}

	void Start()
	{
		_blockListKey = 0;

		// デバッグフラグチェック
		var sceneContainer = FindObjectOfType<SceneContainer>();
		if(sceneContainer != null){
			_debugFlg = sceneContainer.DebugFlg;
		}
		_popupView.Init(this);
		// メニューボタン
		_menuButton.onClick.AddListener(()=>{
			_popupView.Open();
		});
		// パスボタン
		_passButton.onClick.AddListener(()=>{
			_clientManager.PassTurn();
		});
		_matchAnimationCoroutine = StartCoroutine(MatchingAnimation());
		_blockListKey = 0;
	}

	// Update is called once per frame
	void Update () {

		int network_state = _network_mgr.State;
		switch( network_state ) {
		case 1:
			CreateGame();
			_network_mgr.State = 2;
			break;

		}

		// DEBUG
		if(_debugFlg && debugCounter == 120 ) {
			CreateGame();
			// ルームの募集をオフにして途中入室不可に
			PhotonNetwork.room.IsOpen    = false;
			PhotonNetwork.room.IsVisible = false;
		}
		++debugCounter;

	}

	public List<List<int>> GetBlockData()
	{
		var blockData = _holdBlockData[_blockSelectedList[_blockListKey]];
		++_blockListKey;
		if(_blockListKey >= _holdBlockData.Count){
			_blockSelectedList = _blockSelectedList.OrderBy(a => Guid.NewGuid()).ToList();
			_blockListKey      = 0;
		}
		return blockData;
	}

	public int GetBlockGroupData()
	{
		return _holdBlockGroupList[_blockSelectedList[_blockListKey]];
	}

	/// <summary>
	/// ゲーム開始
	/// </summary>
	private void CreateGame()
	{
		//var clientManager    = PhotonNetwork.Instantiate("Prefab/ClientManager", Vector3.zero, Quaternion.identity, 0).GetComponent<ClientManager>();
		_clientManager.Init(this);
		// アニメーション終了
		StopCoroutine(_matchAnimationCoroutine);
		GameObject.Find("MatchText").GetComponent<TMPro.TextMeshProUGUI>().text = "";
		#if UNITY_ANDROID || UNITY_IPHONE
			Instantiate(_voiceManagerPrefab);
		#endif
	}

	/// <summary>
	/// ブロックリストファイル読み込み
	/// </summary>
	private void LoadBlockListFile()
	{
		//var textAsset = Resources.Load("Data/BlockList") as TextAsset;
		var textAsset =
			"0:0:0:0:0,0:0:0:0:0,0:0:1:0:0,0:0:0:0:0,0:0:0:0:0	1\n"+
			"0:0:0:0:0,0:0:0:0:0,0:1:1:0:0,0:0:1:0:0,0:0:0:0:0	2\n"+
"0:0:0:0:0,0:0:1:0:0,0:1:1:0:0,0:0:0:0:0,0:0:0:0:0	2\n"+
"0:0:0:0:0,0:0:0:0:0,0:0:1:1:0,0:0:1:0:0,0:0:0:0:0	2\n"+
"0:0:0:0:0,0:0:1:0:0,0:0:1:1:0,0:0:0:0:0,0:0:0:0:0	2\n"+
"0:0:0:0:0,0:0:0:0:0,0:1:1:1:1,0:0:0:0:0,0:0:0:0:0	3\n"+
"0:0:0:0:0,0:0:1:0:0,0:0:1:0:0,0:0:1:0:0,0:0:1:0:0	3\n"+
"0:0:0:0:0,0:1:1:0:0,0:1:1:0:0,0:0:0:0:0,0:0:0:0:0	4\n"+
"0:0:0:0:0,0:0:1:0:0,0:1:1:1:0,0:0:0:0:0,0:0:0:0:0	5\n"+
"0:0:0:0:0,0:0:0:0:0,0:1:1:1:0,0:0:1:0:0,0:0:0:0:0	5\n"+
"0:0:0:0:0,0:0:1:0:0,0:0:1:1:0,0:0:1:0:0,0:0:0:0:0	6\n"+
"0:0:0:0:0,0:0:1:0:0,0:1:1:0:0,0:0:1:0:0,0:0:0:0:0	6\n"+
"0:0:0:0:0,0:1:0:0:0,0:1:1:1:0,0:0:0:0:0,0:0:0:0:0	7\n"+
"0:0:0:0:0,0:0:0:1:0,0:1:1:1:0,0:0:0:0:0,0:0:0:0:0	7\n"+
"0:0:0:0:0,0:0:0:0:0,0:1:1:1:0,0:1:0:0:0,0:0:0:0:0	7\n"+
"0:0:0:0:0,0:0:0:0:0,0:1:1:1:0,0:0:0:1:0,0:0:0:0:0	7\n"+
"0:0:0:0:0,0:1:1:0:0,0:0:1:1:0,0:0:0:0:0,0:0:0:0:0	8\n"+
"0:0:0:0:0,0:0:1:1:0,0:1:1:0:0,0:0:0:0:0,0:0:0:0:0	8\n"+
"0:0:0:0:0,0:1:0:0:0,0:1:1:0:0,0:0:1:0:0,0:0:0:0:0	9\n"+
"0:0:0:0:0,0:0:0:1:0,0:0:1:1:0,0:0:1:0:0,0:0:0:0:0	9\n"+
"0:0:0:0:0,0:1:0:1:0,0:1:1:1:0,0:0:0:0:0,0:0:0:0:0	10\n"+
"0:0:0:0:0,0:0:0:0:0,0:1:1:1:0,0:1:0:1:0,0:0:0:0:0	10\n"+
"0:0:0:0:0,0:1:0:0:0,0:0:1:0:0,0:0:0:0:0,0:0:0:0:0	11\n"+
"0:0:0:0:0,0:0:0:1:0,0:0:1:0:0,0:0:0:0:0,0:0:0:0:0	11\n"+
"0:0:0:0:0,0:0:0:0:0,0:1:1:1:0,0:0:0:0:0,0:0:0:0:0	12\n"+
"0:0:0:0:0,0:0:1:0:0,0:0:1:0:0,0:0:1:0:0,0:0:0:0:0	12";




		//var fileLine  = textAsset.text.Split('\n');
		var fileLine  = textAsset.Split('\n');
		_holdBlockData      = new List<List<List<int>>>();
		_holdBlockGroupList = new List<int>();
		_blockSelectedList  = new List<int>();
		for(var i = 0; i < fileLine.Length; ++i){

			if(fileLine[i] == ""){
				break;
			}
			_holdBlockData.Add(new List<List<int>>());
			var groupSplit    = fileLine[i].Split('\t');
			_holdBlockGroupList.Add(int.Parse(groupSplit[1]));
			var blockLineList = groupSplit[0].Split(',');
			for(var j = 0; j < blockLineList.Length; ++j){

				_holdBlockData[i].Add(new List<int>());
				var blockLine = blockLineList[j].Split(':');
				for(var n = 0; n < blockLine.Length; ++n){
					Debug.Log(blockLine[n]);
					_holdBlockData[i][j].Add(int.Parse(blockLine[n]));
				}
			}
			_blockSelectedList.Add(i);
		}
		_blockSelectedList = _blockSelectedList.OrderBy(a => Guid.NewGuid()).ToList();
		// 初回のリストのみ最初の方を被らないように整列させる 最初の方にくそ強いのを出さないようにするため
		var checkList = new List<int>(){0};
		var swapKey = 5;
		for(var i = 0; i < 5; ++i){

			for(var j = 0; j < checkList.Count; ++j){

				if(_holdBlockGroupList[_blockSelectedList[i]] == checkList[j] || _holdBlockGroupList[_blockSelectedList[i]] == 3 || _holdBlockGroupList[_blockSelectedList[i]] == 10){
					var swap                    = _blockSelectedList[i];
					_blockSelectedList[i]       = _blockSelectedList[swapKey];
					_blockSelectedList[swapKey] = swap;
					++swapKey;
					if(swapKey >= _blockSelectedList.Count){
						return;
					}
					j = 0;
				}
			}
			checkList.Add(_holdBlockGroupList[_blockSelectedList[i]]);
		}
	}

	/// <summary>
	/// マッチングアニメーション
	/// </summary>
	/// <returns></returns>
	private IEnumerator MatchingAnimation()
	{
		var text = GameObject.Find("MatchText").GetComponent<TMPro.TextMeshProUGUI>();
		var cnt  = 0;
		var dotNum = 0;
		while(true){

			text.text = "マッチング中"+new string('.', dotNum);
			++cnt;
			if(cnt > 19){
				++dotNum;
				if(dotNum > 3){
					dotNum = 0;
				}
				cnt = 0;
			}
			yield return null;
		}
	}
}
