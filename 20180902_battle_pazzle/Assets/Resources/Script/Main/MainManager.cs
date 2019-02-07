using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainManager : MonoBehaviour {

	[SerializeField]
	private NetworkManager m_network_mgr;
	[SerializeField]
	private Range m_range;

	private int tmp = 0;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		int network_state = m_network_mgr.State;
		switch( network_state ) {
		case 1:
			CreateGame();
			m_network_mgr.State = 2;
			break;

		}

		// DEBUG
		if( tmp == 120 ) {
			CreateGame();
		}
		++tmp;

	}

	/// <summary>
	/// マッチ完了してゲーム作成
	/// </summary>
	void CreateGame() {

		var game_obj = PhotonNetwork.Instantiate( "Prefab/ClientManager", Vector3.zero, Quaternion.identity, 0 );
		m_range.ClientManager = game_obj.GetComponent<ClientManager> ();
		game_obj.GetComponent<ClientManager>().Range = m_range;
	}
}
