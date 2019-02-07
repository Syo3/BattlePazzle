using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NetworkManager : MonoBehaviour {

	private int m_state;

	// Use this for initialization
	void Start () {
		m_state = 0;

		// ネットワーク準備
		PhotonNetwork.ConnectUsingSettings( "v1.0.0" );
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	/// <summary>
	/// ロビーに入ると呼ばれる
	/// </summary>
	void OnJoinedLobby() {
		Debug.Log("ロビーに入りました。");

		// ルームに入室する
		PhotonNetwork.JoinRandomRoom();
	}

	/// <summary>
	/// ルームに入室すると呼ばれる
	/// </summary>
	void OnJoinedRoom() {
		Debug.Log("ルームへ入室しました。");
		//		GameObject tmp = PhotonNetwork.Instantiate( "Player", new Vector3( 0.0f, 0.0f, 0.0f ), Quaternion.identity, 0 );
		GameObject.Find( "Text" ).GetComponent<Text>().text = ""+PhotonNetwork.player.ID;
		Debug.Log( PhotonNetwork.countOfPlayersInRooms );
	}


	/// <summary>
	/// ルーム作成　こっちで作った関数 Photonが呼ぶことはない
	/// </summary>
	void CreateRoom() {

		// ルームがないと入室に失敗するため、その時は自分で作る
		// 引数でルーム名を指定できる
		RoomOptions roomOptions = new RoomOptions ();
		roomOptions.isVisible   = true;
		roomOptions.isOpen      = true;
		roomOptions.maxPlayers  = 2;

		// ルーム名が被ると作成できないため
		int rand = Random.Range( 0, 100000000 );
		PhotonNetwork.CreateRoom ( "random_room"+rand, roomOptions, null );
	}

	/// <summary>
	/// ルームの入室に失敗すると呼ばれる
	/// </summary>
	void OnPhotonRandomJoinFailed() {
		Debug.Log("ルームの入室に失敗しました。");

		CreateRoom();
	}

	/// <summary>
	/// ルーム作成失敗
	/// </summary>
	/// <param name="codeAndMsg">Code and message.</param>
	void OnPhotonCreateRoomFailed( object[] codeAndMsg ) {

		CreateRoom();
	}

	/// <summary>
	/// ルームに誰かが入ると呼ばれる
	/// </summary>
	/// <param name="player">入ったプレイヤー</param>
	void OnPhotonPlayerConnected( PhotonPlayer new_player ) {

		Debug.Log( "プレイヤーが入室しました。");

		Debug.Log( PhotonNetwork.playerList.Length );
		// マスタクライアントから開始命令を実行
		if( PhotonNetwork.playerList.Length == 2 ) {
			m_state = 1;

		}
	}

	//[PunRPC]
	//private void UpdateState( int set_state ) {

	//	Debug.Log( "update state:"+set_state );
	//	m_state = set_state;
	//}

	public int State{
		get{ return m_state; }
		set{ m_state = value; }
	}
}
