using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Territory : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("sprite")]
	private SpriteRenderer _sprite;
	#endregion

	#region private field
	private int _playerType;
	private int _direction;
    private bool _moveFlg;
	#endregion

    #region access
    public bool MoveFlg{
        get{return _moveFlg;}
    }
    #endregion

	#region public function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="playerType"></param>
	/// <param name="parentPlayerType"></param>
	public void Init(int playerType, int parentPlayerType)
	{
        _moveFlg = false;
		switch(playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_sprite.color = Common.Const.MASTER_COLOR;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.color = Common.Const.GUEST_COLOR;
			break;
		}
        _direction            = playerType == parentPlayerType ? -1 : 1;
        transform.eulerAngles = new Vector3(0.0f, 0.0f, playerType == parentPlayerType ? 0.0f : 180.0f);
		_playerType           = playerType;
	}

	/// <summary>
	/// 大きさ設定
	/// </summary>
	/// <param name="line"></param>
	public void SetSize(int line)
	{
        Debug.Log("set size");
        var addSize             = line != 0 ? Common.Const.BLOCK_SIZE_HALF / 2.0f : 0.0f;
		_sprite.size            = new Vector2(Common.Const.BLOCK_SIZE * Common.Const.NUM_WIDTH + addSize, Common.Const.BLOCK_SIZE * line + addSize);
		transform.localPosition = new Vector3(0.0f, (Common.Const.NUM_HEIGHT - line) * Common.Const.BLOCK_SIZE_HALF * _direction, 0.0f);
	}

    public void ChangeSize(int line)
    {
        _moveFlg = true;
        Debug.Log("change size");
        StartCoroutine(SizeChangeAnimation(line));
    }

    private IEnumerator SizeChangeAnimation(int line)
    {
        var addSize        = Common.Const.BLOCK_SIZE_HALF / 2.0f;
        var targetSize     = new Vector2(Common.Const.BLOCK_SIZE * Common.Const.NUM_WIDTH + addSize, Common.Const.BLOCK_SIZE * line + addSize);
        var targetPosition = new Vector3(0.0f, (Common.Const.NUM_HEIGHT - line) * Common.Const.BLOCK_SIZE_HALF * _direction, 0.0f);
        var startSize      = _sprite.size;
        var startPosition  = transform.localPosition;
        var cnt            = 0;
        while(_sprite.size.y - targetSize.y > 0.1f || _sprite.size.y - targetSize.y < -0.1f){

            yield return null;
            _sprite.size            = Vector2.Lerp(startSize, targetSize, 1.0f / 20 * cnt);
            transform.localPosition = Vector3.Lerp(startPosition, targetPosition, 1.0f / 20 * cnt);
            ++cnt;
        }
        _sprite.size            = targetSize;
        transform.localPosition = targetPosition;
        _moveFlg                = false;
        Debug.Log("change size end");
    }
	#endregion
}
