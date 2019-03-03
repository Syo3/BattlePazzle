using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Block : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("スプライト")]
	private SpriteRenderer _sprite;
	#endregion

	#region private field
	private int _state;
    private Vector3 _targetPosition;
	#endregion

	#region access
	public int State{
		get{return _state;}
	}
	#endregion

	#region private function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="set_state">Set state.</param>
	public void Init(int set_state)
	{
		_state = set_state;
		switch(_state){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_2");
			_sprite.color  = Common.Const.MASTER_COLOR;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_1");
			_sprite.color  = Common.Const.GUEST_COLOR;
			break;
		}
	}

    public void Move(Vector3 targetPosition)
    {
        _targetPosition = targetPosition;
        StartCoroutine(MoveTarget());
    }

    private IEnumerator MoveTarget()
    {
        var moveVec = (_targetPosition - transform.position) / 20.0f;
        while(_targetPosition.y - transform.position.y > 0.1f || _targetPosition.y - transform.position.y < -0.1f){
            yield return null;
            transform.position += moveVec;            
        }
        transform.position = _targetPosition;
    }
	#endregion
}
