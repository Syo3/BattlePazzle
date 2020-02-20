using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class AdsManager : MonoBehaviour, IUnityAdsListener {

    private void Start()
    {
        // すでに設定済みか
        if(Advertisement.IsReady("video"))return;

#if UNITY_ANDROID
        Advertisement.Initialize("3065696",testMode:true);
#elif UNITY_IOS
        Advertisement.Initialize("3065697",testMode:true);
        Debug.Log("Test_ios");
#elif UNITY_EDITOR
        Advertisement.Initialize("3065697");
#endif
        Advertisement.AddListener(this);
    }

//#if UNITY_ANDROID || UNITY_IOS
    //広告呼び出し
    public void ShowRewardedAd()
    {
        //GameObject.Find("ButtonTextText").GetComponent<UnityEngine.UI.Text>().text = "広告チェック";
        // TODO: ここでiOSが止まっている？
        if (Advertisement.IsReady("video"))
        {
            //GameObject.Find("ButtonTextText").GetComponent<UnityEngine.UI.Text>().text = "広告OK";
            // var options = new ShowOptions { resultCallback = HandleShowResult };
            // var test    = new IUnityAdsListener(this);


            Advertisement.Show("video");
        }
        else{
                        //GameObject.Find("ButtonTextText").GetComponent<UnityEngine.UI.Text>().text = "広告チェック失敗";

        }
    }

    //広告結果イベント
    private void HandleShowResult(UnityEngine.Advertisements.ShowResult result)
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

    //広告の準備完了
    public void OnUnityAdsReady (string placementId) {
        Debug.Log("準備完了");
    }
 
    //広告でエラーが発生
    public void OnUnityAdsDidError (string message) {
        Debug.Log("広告でエラーが発生");
    }
 
    //広告開始
    public void OnUnityAdsDidStart (string placementId) {
        Debug.Log("広告開始");
    }
  
    //広告の表示終了
    public void OnUnityAdsDidFinish (string placementId, ShowResult showResult) {
        Debug.Log("表示終了");
        switch (showResult){
        //最後まで視聴完了(リワード広告ならここでリワード付与する感じ)
        case ShowResult.Finished:
            Debug.Log("広告の表示成功");
            break;
        //スキップされた
        case ShowResult.Skipped:
            Debug.Log("広告スキップ");
            break;
        //表示自体が失敗した
        case ShowResult.Failed:
            Debug.LogWarning("広告の表示失敗");
            break;
        }
    }



//#endif
}
