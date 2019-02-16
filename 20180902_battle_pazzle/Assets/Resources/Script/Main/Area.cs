using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Area : MonoBehaviour {

	#region private field
	private Panel _panel;
	private Block _block;
	private int _panelState;
	private int _blockState;
	private bool _placementFlg;		// 配置できるかフラグ　ブロックと隣接しているか
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
	#endregion

	#region public function
	public void Init(Panel panel, int panelState, int blockState)
	{
		_block        = null;
		_panel        = panel;
		_panelState   = panelState;
		_blockState   = blockState;
		_placementFlg = false;
	}
	#endregion
}
