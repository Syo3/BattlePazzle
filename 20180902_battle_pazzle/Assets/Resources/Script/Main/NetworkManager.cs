using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NetworkManager : MonoBehaviour {

	#region private field
	private int _state;
	private MainManager _mainManager;
    private string _roomPassword;
	#endregion

	#region access
	public int State{
		get{ return _state; }
		set{ _state = value; }
	}
	public MainManager MainManager{
		set{_mainManager = value;}
	}
    public string RoomPassword{
        set{_roomPassword = value;}
    }
	#endregion

	// Use this for initialization
	void Start()
	{
	}

    public void Init(string password)
    {
		_state = 0;
        _roomPassword = password;
        Debug.Log("password:"+_roomPassword);
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


        // TODO: パスワードない場合
        if(_roomPassword == ""){
            // ルームに入室する
            PhotonNetwork.JoinRandomRoom();
        }
        else{
            // パスワードある場合
            ExitGames.Client.Photon.Hashtable expectedCustomProperties = new ExitGames.Client.Photon.Hashtable() {
            { "password",   "test" },
            };
            PhotonNetwork.JoinRandomRoom(expectedCustomProperties, 0);
        }

	}

	/// <summary>
	/// ルームに入室すると呼ばれる
	/// </summary>
	void OnJoinedRoom()
	{
		GameObject.Find("RoomNameText").GetComponent<TMPro.TextMeshProUGUI>().text = PhotonNetwork.room.Name;
		Debug.Log("ルームへ入室しました。");
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
            _mainManager.PopupView.SetExitView();
            _mainManager.PopupView.Open();
			//GameObject.Find("GameObject/UserTurnText").GetComponent<TMPro.TextMeshProUGUI>().text = "あいてがルームから退出しました";
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
			// ルームの募集をオフにして途中入室不可に
			PhotonNetwork.room.IsOpen    = false;
			PhotonNetwork.room.IsVisible = false;
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
        // パスワード設定
        if(_roomPassword != ""){
            roomOptions.CustomRoomProperties = new ExitGames.Client.Photon.Hashtable() {
                { "password",   _roomPassword },
            };
        }



		// ルーム名が被ると作成できないため
		int rand = Random.Range( 0, 100000000 );
		PhotonNetwork.CreateRoom ( "random_room"+rand, roomOptions, null );
		var hashTable = new Hashtable();
	}
	#endregion
}
