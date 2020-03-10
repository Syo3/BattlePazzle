using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System.Linq;

public class Block : MonoBehaviour, IPointerClickHandler {

    #region define
    public const float kMoveFrame = 20.0f;
    #endregion

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
    private bool _moveFlg;
    private bool _spawnAnimationFlg;
    private Coroutine _tapAnimationCoroutine;
    private Vector3 _tapAnimationPositionCache;
	#endregion

	#region access
	public int State{
		get{return _state;}
	}
    public bool MoveFlg{
        get{return _moveFlg;}
    }
    public bool SpawnAnimationFlg{
        get{return _spawnAnimationFlg;}
    }
	#endregion

	#region public function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="set_state">Set state.</param>
	public void Init(int set_state, ClientManager clientManager, int listX, int listY, bool spawnAnimationFlg=false, Sprite sprite=null)
	{
        _moveFlg       = false;
        _clientManager = clientManager;
        _listX         = listX;
        Debug.Log("ListY:"+_listY);
        _listY         = listY;
		_state         = set_state;
        _sprite.sprite = sprite;
        Color setColor = Color.clear;
		switch(_state){
		case (int)Common.Const.PLAYER_TYPE.MASTER:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_2");
            setColor          = Common.Const.MASTER_COLOR;
			break;
		case (int)Common.Const.PLAYER_TYPE.GUEST:
			//_sprite.sprite = ResourceManager.LoadSprite("Image/panel_1");
            setColor          = Common.Const.GUEST_COLOR;
			//_sprite.color      = Common.Const.GUEST_COLOR;
			break;
		}
        setColor.a        = 1.0f;
        setColor.r *= 0.007f;
        setColor.b *= 0.007f;
        _sprite.color      = setColor;

        // _gradients._Color1 = _sprite.color;
        // _gradients._Color2 = _sprite.color;
        // _gradients._Color3 = _sprite.color;
        // _gradients._Color4 = _sprite.color;

        _gradients._Color1   = Color.white * 1.0f;
        _gradients._Color1.a = 0.0f;
        _gradients._Color2 = _gradients._Color1;
        _gradients._Color3 = _gradients._Color1;
        _gradients._Color4 = _gradients._Color1;


        _spawnAnimationFlg = spawnAnimationFlg;
        if(spawnAnimationFlg){
            StartCoroutine(SpawnAnimation());
        }
	}

    void Update()
    {
        if(_spawnAnimationFlg)return;
        CheckVertexColor();
    }

    /// <summary>
    /// 消した時の移動
    /// </summary>
    /// <param name="targetPosition"></param>
    /// <param name="listX"></param>
    /// <param name="listY"></param>
    /// <param name="destroyFlg"></param>
    public void Move(Vector3 targetPosition,int listX, int listY, bool destroyFlg=false)
    {
        _moveFlg        = true;
        _listX          = listX;
        Debug.Log("Move ListY:"+_listY);
        _listY          = listY;
        _targetPosition = targetPosition;
        StartCoroutine(MoveTarget(destroyFlg));
    }

    /// <summary>
    /// クリック
    /// </summary>
    /// <param name="eventData"></param>
    public void OnPointerClick ( PointerEventData eventData )
    {
        Debug.Log("AAA");
        StartTapAnimation();
        _clientManager.SendBlockTap(_listX, _listY);
    }

    public void StartTapAnimation()
    {
        if(_tapAnimationCoroutine != null){
            StopCoroutine(_tapAnimationCoroutine);
            transform.position = _tapAnimationPositionCache;
        }
        _tapAnimationCoroutine = StartCoroutine(TapAnimation());

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
        var color2 = _clientManager.AreaVertexList[_listY+1][_listX+1];
        var color3 = _clientManager.AreaVertexList[_listY][_listX];
        var color4 = _clientManager.AreaVertexList[_listY][_listX+1];

        _gradients._Color1.a = color1.Color.a;
        _gradients._Color2.a = color2.Color.a;
        _gradients._Color3.a = color3.Color.a;
        _gradients._Color4.a = color4.Color.a;
    }


    /// <summary>
    /// 移動アニメーション
    /// </summary>
    /// <param name="destroyFlg"></param>
    /// <returns></returns>
    private IEnumerator MoveTarget(bool destroyFlg)
    {
        var moveVec = (_targetPosition - transform.position) / kMoveFrame;
        while(_targetPosition.y - transform.position.y > 0.1f || _targetPosition.y - transform.position.y < -0.1f){
            yield return null;
            transform.position += moveVec;            
        }
        transform.position = _targetPosition;
        if(destroyFlg){
            Destroy(gameObject);
        }
        _moveFlg = false;
    }

    /// <summary>
    /// 生成時アニメーション 
    /// </summary>
    /// <returns></returns>
    private IEnumerator SpawnAnimation()
    {
        // 透明　→　黑　→　街灯の色（加速するとか2dfxで作る方がいい鴨？）　点滅
        // 現在の色を保存
        var saveBlockColor     = _sprite.color;
        var savegradientsColor = new Color[]{_gradients._Color1, _gradients._Color2, _gradients._Color3, _gradients._Color4};
        _sprite.color = Color.clear;
        _gradients._Color1 = Color.clear;
        _gradients._Color2 = Color.clear;
        _gradients._Color3 = Color.clear;
        _gradients._Color4 = Color.clear;

        // 黑
        var color = Color.gray;
        color.a   = 0.0f;
        while(color.a < 0.8f){

            yield return null;
            color.a      += 0.08f;
            _sprite.color = color;
        }
        color         = Color.gray;
        _sprite.color = color;
        yield return null;
        // 色つけ
        var addColor  = (saveBlockColor - color) / 20.0f;
        while(Mathf.Abs(color.r - saveBlockColor.r) > 0.01f){

            yield return null;
            color += addColor;
            _sprite.color = color;
        }
        _sprite.color      = saveBlockColor;        
        yield return null;
        yield return null;
        yield return null;
        yield return null;
        yield return null;
        yield return null;
        _sprite.color      = saveBlockColor * 0.5f;
        yield return null;
        yield return null;
        yield return null;
        _sprite.color      = saveBlockColor;        
        yield return null;
        yield return null;
        yield return null;
        _sprite.color      = saveBlockColor * 0.5f;
        yield return null;
        yield return null;
        yield return null;
        _sprite.color      = saveBlockColor;
        _gradients._Color1 = savegradientsColor[0];
        _gradients._Color2 = savegradientsColor[1];
        _gradients._Color3 = savegradientsColor[2];
        _gradients._Color4 = savegradientsColor[3];
        _spawnAnimationFlg = false;
    }

    private IEnumerator TapAnimation()
    {
        var transformCache = transform;
        var position       = transformCache.position;
        _tapAnimationPositionCache = position;
        var up             = 0.1f;
        while(up > -0.1f){
            yield return null;
            position.y             += up;
            transformCache.position = position;
            up                     -= 0.025f;
        }
        _tapAnimationCoroutine = null;
    }
	#endregion



}
