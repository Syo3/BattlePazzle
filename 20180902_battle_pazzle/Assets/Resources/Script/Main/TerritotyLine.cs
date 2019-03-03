using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TerritotyLine : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("線画像")]
	private SpriteRenderer _lineSprite;
	#endregion

    #region private field
    private Vector3 _targetPosition;
    #endregion

    /// <summary>
    /// 初期設定
    /// </summary>
    public void Init()
    {
        var lineNum = 4;
        transform.localPosition = new Vector3(0.0f, -Common.Const.NUM_HEIGHT / 2 * Common.Const.BLOCK_SIZE + lineNum * Common.Const.BLOCK_SIZE, 0.0f);
    }

	/// <summary>
	/// 位置設定
	/// </summary>
	/// <param name="line"></param>
	public void SetPos(int lineNum)
	{
        _targetPosition = new Vector3(0.0f, -Common.Const.NUM_HEIGHT / 2 * Common.Const.BLOCK_SIZE + lineNum * Common.Const.BLOCK_SIZE, 0.0f);
        StartCoroutine(Move());
	}

    /// <summary>
    /// 移動演出
    /// </summary>
    /// <returns></returns>
    private IEnumerator Move()
    {
        var moveVec = (_targetPosition - transform.localPosition) / 20.0f;
        while(_targetPosition.y - transform.localPosition.y > 0.1f || _targetPosition.y - transform.localPosition.y < -0.1f){
            yield return null;
            transform.localPosition += moveVec;
        }
        transform.localPosition = _targetPosition;
    }
}
