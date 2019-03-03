using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class AdsManager : MonoBehaviour {

    private void Start()
    {
#if UNITY_ANDROID
        Advertisement.Initialize("3065696");
#elif UNITY_IOS
        Advertisement.Initialize("3065697");
#endif
    }

    //広告呼び出し
    public void ShowRewardedAd()
    {
        if (Advertisement.IsReady("rewardedVideo"))
        {
            var options = new ShowOptions { resultCallback = HandleShowResult };
            Advertisement.Show("rewardedVideo", options);
        }
    }

    //広告結果イベント
    private void HandleShowResult(ShowResult result)
    {
        switch (result){
        //最後まで終了
        case ShowResult.Finished:
            Debug.Log("The ad was successfully shown.");
            //Finished();
            break;
        //途中スキップ
        case ShowResult.Skipped:
            //Skipped();
            Debug.Log("The ad was skipped before reaching the end.");
            break;
        //表示失敗
        case ShowResult.Failed:
            //Failed();
            Debug.LogError("The ad failed to be shown.");
            break;
        }
    }
}
