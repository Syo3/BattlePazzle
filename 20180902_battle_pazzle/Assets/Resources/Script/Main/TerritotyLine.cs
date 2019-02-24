using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TerritotyLine : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("線画像")]
	private SpriteRenderer _lineSprite;
	#endregion

	/// <summary>
	/// 位置設定
	/// </summary>
	/// <param name="line"></param>
	public void SetPos(int lineNum)
	{
		transform.localPosition = new Vector3(0.0f, -Common.Const.NUM_HEIGHT / 2 * Common.Const.BLOCK_SIZE + lineNum * Common.Const.BLOCK_SIZE, 0.0f);
	}
}
