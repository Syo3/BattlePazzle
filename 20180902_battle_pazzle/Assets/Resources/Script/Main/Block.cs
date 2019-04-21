using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Block : MonoBehaviour {

	#region SerializeField
	[SerializeField, Tooltip("スプライト")]
	private SpriteRenderer _sprite;
    [SerializeField, Tooltip("グラデーション")]
    private _2dxFX_4Gradients _gradients;
	#endregion

	#region private field
	private int _state;
    private Vector3 _targetPosition;
    private int _listX;
    private int _listY;
    private ClientManager _clientManager;
	#endregion

	#region access
	public int State{
		get{return _state;}
	}
	#endregion

	#region public function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="set_state">Set state.</param>
	public void Init(int set_state, ClientManager clientManager, int listX, int listY)
	{
        _clientManager = clientManager;
        _listX         = listX;
        _listY         = listY;
		_state         = set_state;
		switch(_state){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_2");
			_sprite.color      = Common.Const.MASTER_COLOR;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_1");
			_sprite.color      = Common.Const.GUEST_COLOR;
			break;
		}
        _gradients._Color1 = _sprite.color;
        _gradients._Color2 = _sprite.color;
        _gradients._Color3 = _sprite.color;
        _gradients._Color4 = _sprite.color;
	}

    public void Move(Vector3 targetPosition,int listX, int listY, bool destroyFlg=false)
    {
        _listX          = listX;
        _listY          = listY;
        _targetPosition = targetPosition;
        StartCoroutine(MoveTarget(destroyFlg));
    }
    #endregion

    #region private function
    private void CheckVertexColor()
    {
        // 地震の場所が必要
        // 配列座標
        // 左上は x , y + 1
        // 左下は x , y
        // 右上は x + 1 , y + 1
        // 右下は x + 1 , y
        var color1 = _clientManager.AreaVertexList[_listY+1][_listX];
        var color2 = _clientManager.AreaVertexList[_listY][_listX];
        var color3 = _clientManager.AreaVertexList[_listY+1][_listX+1];
        var color4 = _clientManager.AreaVertexList[_listY][_listX+1];

    }


    private IEnumerator MoveTarget(bool destroyFlg)
    {
        var moveVec = (_targetPosition - transform.position) / 20.0f;
        while(_targetPosition.y - transform.position.y > 0.1f || _targetPosition.y - transform.position.y < -0.1f){
            yield return null;
            transform.position += moveVec;            
        }
        transform.position = _targetPosition;
        if(destroyFlg){
            Destroy(gameObject);
        }
    }
	#endregion
}
