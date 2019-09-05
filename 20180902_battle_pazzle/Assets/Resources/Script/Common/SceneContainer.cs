using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneContainer : MonoBehaviour {

	#region public field
	private bool _debugFlg;
    private string _password;
	#endregion

	#region access
	public bool DebugFlg{
		get{return _debugFlg;}
		set{_debugFlg = value;}
	}
    public string Password{
        get{return _password;}
        set{_password = value;}
    }
	#endregion

    void Awake()
    {
        _password = "";
    }
}
