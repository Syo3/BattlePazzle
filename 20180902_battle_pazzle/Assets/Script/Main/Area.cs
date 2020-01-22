using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Area : MonoBehaviour {

	#region private field
	private Panel _panel;
	private Block _block;
	private int _panelState;
	private int _blockState;
	private bool _placementFlg;
	#endregion

	#region access
	public Panel Panel{
		get{return _panel;}
	}
	public Block Block{
		get{return _block;}
		set{_block = value;}
	}
	public int PanelState{
		get{return _panelState;}
	}
	public int BlockState{
		get{return _blockState;}
	}
	public bool PlacementFlg{
		get{return _placementFlg;}
	}
	#endregion

	#region public function
	/// <summary>
	/// 初期設定
	/// </summary>
	/// <param name="panel"></param>
	/// <param name="panelState"></param>
	/// <param name="blockState"></param>
	public void Init(Panel panel, int panelState, int blockState)
	{
		_block        = null;
		_panel        = panel;
		_panelState   = panelState;
		_blockState   = blockState;
		_placementFlg = false;
	}

	/// <summary>
	/// 配置可能フラグ設定
	/// </summary>
	/// <param name="flg"></param>
	public void SetPlacementFlg(bool flg)
	{
		_placementFlg                = flg;
		_panel.PlacementMask.enabled = flg;
	}
	#endregion
}
