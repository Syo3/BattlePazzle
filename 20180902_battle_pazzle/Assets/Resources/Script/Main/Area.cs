using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Area : MonoBehaviour {

	#region private field
	private Panel _panel;
	private Block _block;
	private int _panelState;
	private int _blockState;
	#endregion

	#region access
	public Panel Panel{
		get{return _panel;}
	}
	public Block Block{
		get{return _block;}
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
		_panel      = panel;
		_panelState = panelState;
		_blockState = blockState;
	}
	#endregion
}
