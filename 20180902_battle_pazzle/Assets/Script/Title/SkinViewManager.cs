using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SkinViewManager : MonoBehaviour {

    #region SerializeField
    [SerializeField, Tooltip("Canvas Group")]
    private CanvasGroup _canvasGroup;
    [SerializeField, Tooltip("ガチャボタン")]
    private Button _gachaButton;
    [SerializeField, Tooltip("閉じるボタン")]
    private Button _closeButton;
    [SerializeField, Tooltip("スクロール親要素")]
    private RectTransform _scrollParent;
    [SerializeField, Tooltip("スキンプレハブ")]
    private GameObject _skinContentPrefab;
    [SerializeField, Tooltip("パネルスプライト")]
    private List<Sprite> _panelSpriteList;

    [SerializeField, Tooltip("ガチャアニメーター")]
    private Animator _gachaAnimator;
    [SerializeField, Tooltip("ガチャキャンバスグループ")]
    private CanvasGroup _gachaCanvasGroup;
    [SerializeField, Tooltip("ガチャパネル")]
    private Image _gachaPanel;
    [SerializeField, Tooltip("ガチャ画面閉じるぼたん")]
    private Button _gachaCloseButton;
    [SerializeField, Tooltip("ガチャパーティクル")]
    private List<ParticleSystem> _gachaParticleList;
    [SerializeField, Tooltip("ガチャ回せないよポップアップ")]
    private GachaPopup _gachaPopup;
    #endregion

    #region private field
    private int _equipID;
    private List<PanelSkinContent> _skinContentList;
    private string _getSkinString;
    private List<int> _getSkinList;
    private List<int> _gachaSkinList;
    private bool _gachaFlg;
    private int _skinGachaPoint;
    private int _gachaIndex;
    private Title.TitleSceneManager _sceneManager;
    #endregion

    #region Access
    #endregion

    /// <summary>
    /// 初期設定
    /// </summary>
    public void Init(Title.TitleSceneManager sceneManager)
    {
        _sceneManager    = sceneManager;
        _gachaFlg        = false;
        // スキンデータ作成
        _equipID         = PlayerPrefs.GetInt(Common.Const.NOW_PANEL_ID, 0);
        _getSkinString   = PlayerPrefs.GetString(Common.Const.PANEL_GET_LIST, "1");
        _skinGachaPoint  = PlayerPrefs.GetInt(Common.Const.PANEL_GACHA_POINT, 0);
        var getSkinArray = _getSkinString.Split(',');
        _getSkinList     = new List<int>();
        _gachaSkinList   = new List<int>();
        for(var i = 0; i < getSkinArray.Length; ++i){
            _getSkinList.Add( int.Parse(getSkinArray[i]) );
        }
        if(_getSkinList.Count < Common.Const.PANEL_SKIN_MAX){
            for(var i = _getSkinList.Count-1; i < Common.Const.PANEL_SKIN_MAX; ++i){
                _getSkinList.Add(0);
            }
            _getSkinString = string.Join(",", _getSkinList.ConvertAll(x => x.ToString()).ToArray());
            PlayerPrefs.SetString(Common.Const.PANEL_GET_LIST, _getSkinString);
        }

        // スキン一覧
        _skinContentList = new List<PanelSkinContent>();
        for(var i = 0; i < Common.Const.PANEL_SKIN_MAX; ++i){

            var skinContent = Instantiate(_skinContentPrefab, Vector3.zero, Quaternion.identity, _scrollParent.transform).GetComponent<PanelSkinContent>();
            skinContent.Init(this, i, _getSkinList[i] == 1, _equipID == i);
            _skinContentList.Add(skinContent);
            // 未取得からガチャ作成
            if(_getSkinList[i] == 0){
                _gachaSkinList.Add(i);
            }
        }

        _gachaButton.onClick.AddListener(()=>{
            // TODO: ガチャ
            GachaPlay();
        });
        GachaPlayCheck();

        _gachaCloseButton.onClick.AddListener(()=>{
            StartCoroutine(GachaClose());
        });
        _closeButton.onClick.AddListener(()=>{
            Show(false);
        });
    }

    /// <summary>
    /// 表示
    /// </summary>
    /// <param name="flg"></param>
    public void Show(bool flg)
    {
        _canvasGroup.interactable   = flg;
        _canvasGroup.blocksRaycasts = flg;
        StartCoroutine(ShowCoroutine( flg ? 0.0f : 1.0f, flg ? 1.0f : 0.0f ));
    }

    /// <summary>
    /// スキン設定
    /// </summary>
    /// <param name="equipID"></param>
    public void SetEquip(int equipID)
    {
        _skinContentList[_equipID].Remove();
        _equipID = equipID;
        PlayerPrefs.SetInt(Common.Const.NOW_PANEL_ID, _equipID);
    }

    /// <summary>
    /// パネルスプライト取得
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    public Sprite GetPanelSprite(int index)
    {
        return _panelSpriteList[index];
    }

    /// <summary>
    /// 表示コルーチン
    /// </summary>
    /// <param name="startValue"></param>
    /// <param name="endValue"></param>
    /// <returns></returns>
    private IEnumerator ShowCoroutine(float startValue, float endValue)
    {
        _canvasGroup.alpha = startValue;
        var timer          = 0.0f;
        while(timer < 0.5f){
            yield return null;
            timer              += Time.deltaTime;
            _canvasGroup.alpha += Time.deltaTime * (endValue - startValue) * 2.0f;
        }
        _canvasGroup.alpha = endValue;
    }

    public void GachaPlay()
    {
        if(_gachaFlg || _gachaSkinList.Count < 1) return;
        if(_skinGachaPoint == 0){
            // ポイント貯めたらガチャできるよポップアップ
            _gachaPopup.Show(true);
            return;
        }


        _gachaFlg = true;
        // 抽選
        var index   = Random.Range(0, _gachaSkinList.Count-1);
        _gachaIndex = _gachaSkinList[index];
        // リストを詰める
        _gachaSkinList.RemoveAt(index);
        // ガチャ結果保存
        _getSkinList[_gachaIndex] = 1;
        _getSkinString = string.Join(",", _getSkinList.ConvertAll(x => x.ToString()).ToArray());
        PlayerPrefs.SetString(Common.Const.PANEL_GET_LIST, _getSkinString);
        // ガチャポイントを減らす
        _skinGachaPoint -= 1;
        PlayerPrefs.SetInt(Common.Const.PANEL_GACHA_POINT, _skinGachaPoint);

        // ガチャパネルを演出用に初期化
        _gachaPanel.sprite = _panelSpriteList[0];
        // ガチャ演出開始
        StartCoroutine(GachaAnimator());
    }
    
    private IEnumerator GachaAnimator()
    {
        // ポップアップ
        _gachaCloseButton.gameObject.SetActive(false);

        _gachaCanvasGroup.interactable   = true;
        _gachaCanvasGroup.blocksRaycasts = true;
        _gachaCanvasGroup.alpha          = 0.0f;
        while(_gachaCanvasGroup.alpha < 1.0f){
            yield return null;
            _gachaCanvasGroup.alpha += Time.deltaTime * 2.0f;
        }
        _gachaCanvasGroup.alpha = 1.0f;
        _gachaAnimator.enabled  = true;
        _gachaAnimator.Play("GachaPanelFall", 0, 0.0f);
        yield return null;
        yield return null;
        var seFlg    = false;
        var nowState = _gachaAnimator.GetCurrentAnimatorStateInfo(0);
        while(nowState.normalizedTime < 1.0f){
            yield return null;
            nowState = _gachaAnimator.GetCurrentAnimatorStateInfo(0);
            if(!seFlg && nowState.normalizedTime > 0.8f){
                _sceneManager.ButtonSoundManager.PlaySE(2);
                seFlg = true;
            }
        }
        // パネル変更処理
        _gachaPanel.sprite = _panelSpriteList[_gachaIndex];

        _gachaAnimator.Play("GachaPanelSpawn", 0, 0.0f);
        yield return null;
        yield return null;
        seFlg = false;
        nowState = _gachaAnimator.GetCurrentAnimatorStateInfo(0);
        while(nowState.normalizedTime < 1.0f){
            yield return null;
            nowState = _gachaAnimator.GetCurrentAnimatorStateInfo(0);
            if(!seFlg && nowState.normalizedTime > 0.7f){
                _sceneManager.ButtonSoundManager.PlaySE(3);
                seFlg = true;
            }
        }
        _gachaCloseButton.gameObject.SetActive(true);

    }

    private IEnumerator GachaClose()
    {
        // ガチャ一覧から選択可能に
        _skinContentList[_gachaIndex].Unlock();


        // ポップアップ閉じる
        _gachaAnimator.enabled           = false;
        for(var i = 0; i < _gachaParticleList.Count; ++i){
            _gachaParticleList[i].gameObject.SetActive(false);
        }
        _gachaCanvasGroup.alpha = 1.0f;
        while(_gachaCanvasGroup.alpha > 0.0f){
            yield return null;
            _gachaCanvasGroup.alpha -= Time.deltaTime * 2.0f;
        }
        _gachaCanvasGroup.interactable   = false;
        _gachaCanvasGroup.blocksRaycasts = false;
        _gachaCloseButton.gameObject.SetActive(false);
        _gachaFlg = false;
        GachaPlayCheck();
    }

    private void GachaPlayCheck()
    {
        var flg = _gachaSkinList.Count < 1 || _skinGachaPoint == 0;
        _gachaButton.image.color = flg ? Color.gray * 0.75f : Color.white;
        _gachaButton.transform.Find("Text").GetComponent<TMPro.TextMeshProUGUI>().color = flg ? Color.white * 0.5f : Color.white;
    }
}
