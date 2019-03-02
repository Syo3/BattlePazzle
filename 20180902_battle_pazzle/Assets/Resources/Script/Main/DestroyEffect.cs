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
	private AnimatorStateInfo _stateInfo;
	private float _animationStartTime;
	#endregion

	#region public function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="playerType"></param>
	/// <param name="animationStart"></param>
	public void Init(int playerType, float animationStart=0.0f)
	{
		_animationStartTime = animationStart;
		switch(playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_2");
			_sprite.color  = Color.green;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_1");
			_sprite.color  = Color.magenta;
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
		_animator.Play("DestroyEffect");
		yield return null;
		_stateInfo = _animator.GetCurrentAnimatorStateInfo(0);
		while(_stateInfo.normalizedTime < 1.0f){
			_stateInfo = _animator.GetCurrentAnimatorStateInfo(0);
			yield return null;
		}
		Destroy(gameObject);
	}
}
