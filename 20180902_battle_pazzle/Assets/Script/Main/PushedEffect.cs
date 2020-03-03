using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PushedEffect : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("画像")]
    private SpriteRenderer _sprite;
    #endregion

    #region private field
    private bool _nowTurnFlg;
    #endregion

    #region public function
    public void Init(int playerType, bool nowTurn, float animationStart=0.0f)
    {
        // どっちのターンかわかれば判定か
        _nowTurnFlg = nowTurn;

		//_animationStartTime = animationStart;
		switch(playerType){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			_sprite.color  = Common.Const.MASTER_COLOR;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			_sprite.color  = Common.Const.GUEST_COLOR;
			break;
		}
		StartCoroutine(Animation());
    }

    /// <summary>
    /// 縮小
    /// </summary>
    /// <returns></returns>
    private IEnumerator Animation()
    {
        var localPosition = transform.localPosition;
        var localScale    = transform.localScale;
        // 移動量計算
        var moveFrame = Block.kMoveFrame;
        var addPosition = new Vector3(0.0f, 0.32f * (_nowTurnFlg ? 1 : -1), 0.0f) / moveFrame;
        var addScale = -localScale / moveFrame;
        
        // while(localScale.y > 0.0f){
        //     yield return null;
        //     localPosition += addPosition;
        //     localScale    += addScale;
        // }
        // Destroy(gameObject);
        // yield return null;
        var frameCount = 0;
        while(frameCount < moveFrame){
            yield return null;
            ++frameCount;
        }
        
        Destroy(gameObject);
    }
    #endregion
}
