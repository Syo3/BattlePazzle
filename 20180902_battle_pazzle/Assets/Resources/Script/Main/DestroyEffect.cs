using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyEffect : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("ブロック画像")]
	SpriteRenderer _sprite;
	#endregion

	private int destroyCnt;

	public void Init(int playerType)
	{
		switch(playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_sprite.sprite = ResourceManager.LoadSprite("Image/panel_2");			
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.sprite = ResourceManager.LoadSprite("Image/panel_1");
			break;
		}
		destroyCnt = 0;
	}

	void Update()
	{
		++destroyCnt;
		if(destroyCnt > 300){
			Destroy(gameObject);
		}
	}
}
