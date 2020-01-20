using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementBlock : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("スプライト")]
	private SpriteRenderer _sprite;
	#endregion

	#region private field
	private int _positionX;
	private int _positionY;
	private int _playerType;
    private Transform _transform;
    private Coroutine _coroutine;
	#endregion

	#region access
	public SpriteRenderer Sprite{
		get{return _sprite;}
	}
	public int PositionX{
		get{return _positionX;}
	}
	public int PositionY{
		get{return _positionY;}
	}
	#endregion

	#region public funtion
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="x"></param>
	/// <param name="y"></param>
	/// <param name="playerType"></param>
	public void Init(int x, int y, int playerType)
	{
		_positionX  = x;
		_positionY  = y;
		_playerType = playerType;
        _transform  = transform;
        _coroutine  = null;
		SetPlacementColor();
	}

	/// <summary>
	/// ドラッグ中色設定
	/// </summary>
	public void SetDragColor()
	{
		switch(_playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_sprite.color  = new Color(Common.Const.MASTER_COLOR.r * 0.005f, Common.Const.MASTER_COLOR.g * 0.005f, Common.Const.MASTER_COLOR.b * 0.005f, 1);
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.color  = new Color(Common.Const.GUEST_COLOR.r * 0.005f, Common.Const.GUEST_COLOR.g * 0.005f, Common.Const.GUEST_COLOR.b * 0.005f, 1);
			break;
		}	
	}

	/// <summary>
	/// 通常色設定
	/// </summary>
	public void SetPlacementColor()
	{

		switch(_playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_sprite.color  = Common.Const.MASTER_COLOR;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.color  = Common.Const.GUEST_COLOR;
			break;
		}

	}

    /// <summary>
    /// 相手ターン中の色変更
    /// </summary>
    /// <param name="flg"></param>
    public void SetTurnColor(bool flg)
    {
        if(!flg){
            _sprite.color  = Common.Const.OTHER_COLOR;
            return;
        }
        SetPlacementColor();
    }

    /// <summary>
    /// ホールド開始
    /// </summary>
    public void StartHold()
    {
        if(_coroutine != null){
            StopCoroutine(_coroutine);
            _coroutine = null;
        }
        _coroutine = StartCoroutine(StartHoldCoroutine());
    }

    /// <summary>
    /// ホールド終了
    /// </summary>
    public void EndHold()
    {
        if(_coroutine != null){
            StopCoroutine(_coroutine);
            _coroutine = null;
        }
        _coroutine = StartCoroutine(EndHoldCoroutine());
    }
	#endregion

    #region private function
    private IEnumerator StartHoldCoroutine()
    {
        _transform.eulerAngles = Vector3.zero;
        var angle  = _transform.eulerAngles;
        angle.z    = 0.0f;
        var time   = 0.0f;
        var target = (Random.Range(0, 2) * 2 - 1 ) * 90.0f;
        while(Mathf.Abs(angle.z - target) > 5.0f){
            yield return null;
            time  += Time.deltaTime * 2.0f;
            angle.z                = Mathf.Lerp(angle.z, target + target * 0.1f, time);
            _transform.eulerAngles = angle;
        }
        angle.z   = 90.0f;
        _transform.eulerAngles = angle;
        _coroutine = null;
    }

    private IEnumerator EndHoldCoroutine()
    {
        _transform.eulerAngles = new Vector3(0.0f, 0.0f, 90.0f);
        var angle = _transform.eulerAngles;
        var time  = 0.0f;
        while(angle.z > 0.0f){
            yield return null;
//            angle.z               += -720.0f * Time.deltaTime;
            time += Time.deltaTime * 2.0f;
            angle.z                = Mathf.Lerp(angle.z, 0.0f, time);
            _transform.eulerAngles = angle;
        }
        angle.z                = 0.0f;
        _transform.eulerAngles = angle;
        _coroutine             = null;
    }

    #endregion
}
