using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainManager : MonoBehaviour {

	#region SerializeFiled
	[SerializeField, Tooltip("ネットワークマネージャ")]
	private NetworkManager _network_mgr;
	[SerializeField, Tooltip("パネルプレハブ")]
	private GameObject _panelPrefab;
	[SerializeField, Tooltip("ブロックプレハブ")]
	private GameObject _blockPrefab;
	[SerializeField, Tooltip("掴むブロックプレハブ")]
	private GameObject _holdBlockPrefab;
	[SerializeField, Tooltip("掴みブロック子要素プレハブ")]
	private GameObject _placementBlockPrefab;
	[SerializeField, Tooltip("パネル親行列")]
	private Transform _panelParent;
	[SerializeField, Tooltip("掴みブロック親")]
	private Transform _holdParent;
	[SerializeField, Tooltip("client manager")]
	private ClientManager _clientManager;
	#endregion

	#region private field
	private List<List<List<int>>> _holdBlockData;
	private int tmp = 0;
	#endregion

	#region access
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
	#endregion

	void Awake()
	{
		LoadBlockListFile();
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
		if( tmp == 120 ) {
			CreateGame();
		}
		++tmp;

	}

	/// <summary>
	/// ゲーム開始
	/// </summary>
	private void CreateGame()
	{
		//var clientManager    = PhotonNetwork.Instantiate("Prefab/ClientManager", Vector3.zero, Quaternion.identity, 0).GetComponent<ClientManager>();
		_clientManager.Init(this);
	}

	/// <summary>
	/// 
	/// </summary>
	private void LoadBlockListFile()
	{
		var textAsset = Resources.Load("Data/BlockList") as TextAsset;
		var fileLine  = textAsset.text.Split('\n');
		_holdBlockData    = new List<List<List<int>>>();
		for(var i = 0; i < fileLine.Length; ++i){

			if(fileLine[i] == ""){
				break;
			}
			_holdBlockData.Add(new List<List<int>>());
			var blockLineList = fileLine[i].Split(',');
			for(var j = 0; j < blockLineList.Length; ++j){

				_holdBlockData[i].Add(new List<int>());
				var blockLine = blockLineList[j].Split(':');
				for(var n = 0; n < blockLine.Length; ++n){
					Debug.Log(blockLine[n]);
					_holdBlockData[i][j].Add(int.Parse(blockLine[n]));
				}
			}
		}
	}
}
