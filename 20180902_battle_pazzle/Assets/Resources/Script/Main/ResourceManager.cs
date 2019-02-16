using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ResourceManager{

	private static Dictionary<string, Sprite> _loadSpriteList = new Dictionary<string, Sprite>();

	/// <summary>
	/// 画像読み込み
	/// </summary>
	/// <param name="path"></param>
	/// <returns></returns>
	public static Sprite LoadSprite(string path)
	{
		if(_loadSpriteList.ContainsKey(path)){
			return _loadSpriteList[path];
		}
		_loadSpriteList.Add(path, Resources.Load<Sprite>(path));
		return _loadSpriteList[path];
	}
}
