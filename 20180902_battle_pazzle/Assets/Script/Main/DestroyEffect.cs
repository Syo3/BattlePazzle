using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyEffect : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("ブロック画像")]
	private SpriteRenderer _sprite;
	[SerializeField, Tooltip("アニメーション")]
	private Animator _animator;
	#endregion

	#region private field
    private SoundManager _soundManager;
	private AnimatorStateInfo _stateInfo;
	private float _animationStartTime;
    private int _animationType;
	#endregion

    public int AnimationType{
        set{_animationType = value;}
    }

	#region public function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="playerType"></param>
	/// <param name="animationStart"></param>
	public void Init(int playerType,SoundManager soundManager, float animationStart=0.0f)
	{
        _animationType      = 0;
        _soundManager       = soundManager;
		_animationStartTime = animationStart;
		switch(playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_2");
			_sprite.color  = Common.Const.MASTER_COLOR;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_1");
			_sprite.color  = Common.Const.GUEST_COLOR;
			break;
		}
		StartCoroutine(Animation());
	}
	#endregion

	/// <summary>
	/// アニメーション再生
	/// </summary>
	/// <returns></returns>
	private IEnumerator Animation(){

		yield return new WaitForSeconds(_animationStartTime);
        if(_animationType == 0){
    		_animator.Play("DestroyEffect");
        }
        else{
            _animator.Play("DestroyCollapse");
        }
		yield return null;
		_stateInfo = _animator.GetCurrentAnimatorStateInfo(0);
		while(_stateInfo.normalizedTime < 1.0f){
			_stateInfo = _animator.GetCurrentAnimatorStateInfo(0);
			yield return null;
		}
        _soundManager.PlayOnShot(5);
		Destroy(gameObject);
	}
}
