using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NetworkManager : MonoBehaviour {

	#region private field
	private int _state;
	private MainManager _mainManager;
	#endregion

	#region access
	public int State{
		get{ return _state; }
		set{ _state = value; }
	}
	public MainManager MainManager{
		set{_mainManager = value;}
	}
	#endregion

	// Use this for initialization
	void Start()
	{
		_state = 0;
		// ネットワーク準備
		PhotonNetwork.ConnectUsingSettings( "v1.0.0" );
	}

	#region photon function
	/// <summary>
	/// ロビーに入ると呼ばれる
	/// </summary>
	void OnJoinedLobby()
	{
		Debug.Log("ロビーに入りました。");
		// ルームに入室する
		PhotonNetwork.JoinRandomRoom();
	}

	/// <summary>
	/// ルームに入室すると呼ばれる
	/// </summary>
	void OnJoinedRoom()
	{
		Debug.Log("ルームへ入室しました。");
		GameObject.Find( "Text" ).GetComponent<Text>().text = ""+PhotonNetwork.player.ID;
		Debug.Log( PhotonNetwork.countOfPlayersInRooms );
		if(PhotonNetwork.playerList.Length == 2){
			_state = 1;
		}
	}

	/// <summary>
	/// 誰かがルームを退出したら呼ばれる
	/// </summary>
	/// <param name="otherPlayer"></param>
	void OnPhotonPlayerDisconnected(PhotonPlayer otherPlayer)
	{
		// 退出
		PhotonNetwork.LeaveRoom();
		// 切断
		PhotonNetwork.Disconnect();
		if(!_mainManager.ClientManager.GameEndFlg){
			// 表示
			GameObject.Find( "GameObject/Text" ).GetComponent<Text>().text = "あいてがルームから退出しました";
		}
	}

	/// <summary>
	/// ルームの入室に失敗すると呼ばれる
	/// </summary>
	void OnPhotonRandomJoinFailed()
	{
		Debug.Log("ルームの入室に失敗しました。");
		CreateRoom();
	}

	/// <summary>
	/// ルーム作成失敗
	/// </summary>
	/// <param name="codeAndMsg">Code and message.</param>
	void OnPhotonCreateRoomFailed(object[] codeAndMsg)
	{
		CreateRoom();
	}

	/// <summary>
	/// ルームに誰かが入ると呼ばれる
	/// </summary>
	/// <param name="player">入ったプレイヤー</param>
	void OnPhotonPlayerConnected( PhotonPlayer new_player )
	{

		Debug.Log( "プレイヤーが入室しました。");
		Debug.Log( PhotonNetwork.playerList.Length );
		// マスタクライアントから開始命令を実行
		if(PhotonNetwork.playerList.Length == 2){
			_state = 1;
		}
	}
	#endregion

	#region private function
	/// <summary>
	/// ルーム作成　こっちで作った関数 Photonが呼ぶことはない
	/// </summary>
	private void CreateRoom()
	{
		// ルームがないと入室に失敗するため、その時は自分で作る
		// 引数でルーム名を指定できる
		var roomOptions          = new RoomOptions();
		roomOptions.IsVisible    = true;
		roomOptions.IsOpen       = true;
		roomOptions.MaxPlayers   = 2;
		roomOptions.EmptyRoomTtl = 1000;
		// ルーム名が被ると作成できないため
		int rand = Random.Range( 0, 100000000 );
		PhotonNetwork.CreateRoom ( "random_room"+rand, roomOptions, null );
		var hashTable = new Hashtable();
	}
	#endregion
}
