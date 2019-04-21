using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaVertex : MonoBehaviour {

    #region private field
    private Color _color;
    private Transform _transformCache;
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
    public void Init()
    {
        // オブジェクトを移動させて距離でカラーを持たせる
        // 近ければ　値が大きくなり　遠ければ値が小さくなる
        // それを左から右に移動させることで発行を変更させる        
        _transformCache = transform;
        _color          = Color.clear;
    }
    #endregion



    private void CheckDistanceColor()
    {
        // ライトリストをループさせて近いものだけ計測
    }
}
