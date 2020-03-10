using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NetworkManager : MonoBehaviour {

    #region const
    private readonly float kRoomCheckTime = 20.0f;
    #endregion

	#region private field
	private int _state;
	private MainManager _mainManager;
    private string _roomPassword;
    private float _roomCheckTimer;
    private bool _errorFlg;
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

    public void Init(string password)
    {
        _errorFlg     = false;
		_state        = 0;
        _roomPassword = password;
        Debug.Log("password:"+_roomPassword);
		// ネットワーク準備
		PhotonNetwork.ConnectUsingSettings( "v1.0.0" );
        _roomCheckTimer = 0.0f;
    }

    void Update()
    {
        
        if(_state != 0 || _roomPassword != "" || _errorFlg) return;
        _roomCheckTimer += Time.deltaTime;
        if(_roomCheckTimer < kRoomCheckTime) return;
        // 退出してルーム検索
        if(PhotonNetwork.inRoom){
            PhotonNetwork.room.IsOpen    = false;
            PhotonNetwork.room.IsVisible = false;
            PhotonNetwork.LeaveRoom();
        }
        var roomList = PhotonNetwork.GetRoomList();
        Debug.Log(roomList);
        Debug.Log(roomList.Length);
        for(var i = 0; i < roomList.Length; ++i){

            Debug.Log(roomList[i].Name);
            Debug.Log(roomList[i].IsOpen);
            PhotonNetwork.JoinRoom(roomList[i].Name);
            return;
        }
        _roomCheckTimer = 0.0f;
    }

	#region photon function
    /// <summary>
    /// ネットワーク接続失敗
    /// </summary>
    /// <param name="cause"></param>
    void OnFailedToConnectToPhoton(DisconnectCause cause)
    {
        _errorFlg = true;
        _mainManager.PopupView.SetNetworkErrorView();
        _mainManager.PopupView.Open();
    }

	/// <summary>
	/// ロビーに入ると呼ばれる
	/// </summary>
	void OnJoinedLobby()
	{
		Debug.Log("ロビーに入りました。");
        // パスワードない場合
        if(_roomPassword == ""){
            Debug.Log("パスワードなしでルームを作成");
            if(PhotonNetwork.inRoom) return;
            PhotonNetwork.JoinRandomRoom();
        }
        // パスワードあり
        else{
            Debug.Log("パスワードありでルームを作成");
    		var roomOptions          = new RoomOptions();
            roomOptions.IsVisible    = false;
            roomOptions.IsOpen       = true;
            roomOptions.MaxPlayers   = 2;
            roomOptions.EmptyRoomTtl = 100000;
            roomOptions.CustomRoomProperties = new ExitGames.Client.Photon.Hashtable() {
                { "password",   _roomPassword },
            };
            var roomName = _roomPassword;
            PhotonNetwork.JoinOrCreateRoom(_roomPassword, roomOptions, null);
        }

	}

	/// <summary>
	/// ルームに入室すると呼ばれる
	/// </summary>
	void OnJoinedRoom()
	{
		Debug.Log("ルームへ入室しました。");
        GameObject.Find("DebugConsoleText").GetComponent<TMPro.TextMeshProUGUI>().text = PhotonNetwork.room.Name;
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
            _mainManager.ClientManager.StopTimeLimitCoroutine();
			//GameObject.Find("GameObject/UserTurnText").GetComponent<TMPro.TextMeshProUGUI>().text = "あいてがルームから退出しました";
		}
	}

	/// <summary>
	/// ルームの入室に失敗すると呼ばれる
	/// </summary>
	public void OnPhotonRandomJoinFailed()
	{
		Debug.Log("ルームの入室に失敗しました。");
		CreateRoom();
	}

	/// <summary>
	/// ルーム作成失敗
	/// </summary>
	/// <param name="codeAndMsg">Code and message.</param>
	public void OnPhotonCreateRoomFailed(object[] codeAndMsg)
	{
		Debug.Log("ルームの作成に失敗しました。");
		CreateRoom();
	}

    public void OnPhotonCreateRoomFailed()
    {
        Debug.Log("OnPhotonCreateRoomFailed got called. This can happen if the room exists (even if not visible). Try another room name.");
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
		var roomOptions          = new RoomOptions();
		roomOptions.MaxPlayers   = 2;
		roomOptions.EmptyRoomTtl = 100000;
        roomOptions.isVisible    = true;
        roomOptions.isOpen       = true;
		// ルーム名が被ると作成できないため
        var rand                 = Random.Range( 0, 100000000 );
        var roomName             = "random_room"+rand;
//		PhotonNetwork.CreateRoom( roomName, roomOptions, null );
        PhotonNetwork.JoinOrCreateRoom(roomName, roomOptions, null);
        Debug.Log("ルームを作成しました:"+roomName);
	}
	#endregion
}
