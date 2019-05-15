using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaVertex : MonoBehaviour {

    #region private field
    private Color _color;
    private Transform _transformCache;
    private ClientManager _clientManager;
    #endregion

    #region access
    public Color Color{
        get{return _color;}
    }
    #endregion

    void Update()
    {
        CheckDistanceColor();
    }

    #region public function
    public void Init(ClientManager clientManager)
    {
        // オブジェクトを移動させて距離でカラーを持たせる
        // 近ければ　値が大きくなり　遠ければ値が小さくなる
        // それを左から右に移動させることで発行を変更させる        
        _clientManager  = clientManager;
        _transformCache = transform;
        _color          = Color.clear;
    }
    #endregion



    private void CheckDistanceColor()
    {
        _color = Color.clear;
        // ライトリストをループさせて近いものだけ計測
        var vertexLight = _clientManager.AreaVertexLightList;
        for(var i = 0; i < vertexLight.Count; ++i){

            var dist = Vector3.Distance( vertexLight[i].transform.position, _transformCache.position);
            var add  = (1.0f - dist * 0.6f);
            _color.a += Mathf.Clamp(add, 0.0f, 0.6f);
            _color.a = Mathf.Clamp(_color.a, 0.0f, 0.6f);
        }
    }
}
