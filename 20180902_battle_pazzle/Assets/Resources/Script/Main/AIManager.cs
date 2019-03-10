using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AIManager : MonoBehaviour {

    // 主な流れ
    // 置ける場所を調べる
    // ↓
    // 置けるブロックを調べる　いろんな位置
    // ↓
    // 評価　置いたら消せるとか　間に隙間が生まれないとか　消されにくいとか
    // 評価が同じやつがいたらランダム

    #region private field
    private SinglePlayManager _singlePlayManager;
    #endregion

    #region public function
    /// <summary>
    /// 初期設定
    /// </summary>
    /// <param name="singlePlayManager"></param>
    public void Init(SinglePlayManager singlePlayManager)
    {
        _singlePlayManager = singlePlayManager;
    }

    /// <summary>
    /// AI処理実行
    /// </summary>
    public void Play()
    {
        
    }
    #endregion
}
