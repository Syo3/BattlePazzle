using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Panel : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("スプライト")]
	private SpriteRenderer _sprite;
	[SerializeField, Tooltip("配置可能表示")]
	private SpriteRenderer _placementMask;
    [SerializeField, Tooltip("アニメーター")]
    private Animator _animator;
	#endregion

	#region private field
	private int _state;
	#endregion

	#region access
	public int State{
		get{return _state;}
	}
	public SpriteRenderer PlacementMask{
		get{return _placementMask;}
	}
	#endregion

	/// <summary>
	/// Sets the state.
	/// </summary>
	/// <param name="state">Set state.</param>
	public void SetState(int state)
	{
		// if( state == m_state ) {
		// 	return;
		// }
		// m_state = state;
		switch(state){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
//			_sprite.color = Color.white;
            _sprite.color = Common.Const.MASTER_COLOR * 0.1f;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
//			_sprite.color = Color.white;
            _sprite.color = Common.Const.GUEST_COLOR * 0.1f;
			break;
		}
		_state = state;

	}

	public IEnumerator Flash()
	{
		while(_placementMask.enabled){
			
			yield return null;
		}
	}

    public void StateChange(int state)
    {
        _state = state;
        StartCoroutine(StateChangeAnimation());
    }

    private IEnumerator StateChangeAnimation()
    {
        while(transform.eulerAngles.x < 90.0f){
            yield return null;
            transform.Rotate(new Vector3(5.0f, 0.0f, 0.0f));
        }
        transform.eulerAngles = new Vector3(-90.0f, 0.0f, 0.0f);
		switch(_state){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
            _sprite.color = Common.Const.MASTER_COLOR * 0.1f;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
            _sprite.color = Common.Const.GUEST_COLOR * 0.1f;
			break;
		}
        while(transform.eulerAngles.x < 0.0f){
            yield return null;
            transform.Rotate(new Vector3(5.0f, 0.0f, 0.0f));
        }
        transform.eulerAngles = new Vector3(0.0f, 0.0f, 0.0f);
    }

    public void SetTurn(bool flg)
    {
        if(_placementMask.enabled == false) return;
        _animator.Play("New State", 0);
        var animationName = flg ? "PlayerTurnFlash" : "EnemyTurnFlash";
        _animator.Play(animationName, 0);
        // if(flg){
        //     _animator.Play("PlayerTurnFlash", 0);
        // }
        // else{
        //     _animator.Play("EnemyTurnFlash", 0);
        // }
    }

    public void StopAnimator()
    {
        _animator.Play("New State", 0);
    }

}
