using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class BlockSerializer{

	public const int width  = 8;
	public const int height = 8;

	public static readonly byte[] mem_block_list = new byte[sizeof(int)*width*height];

	public static void Register() {

		// TODO 登録処理
		ExitGames.Client.Photon.PhotonPeer.RegisterType( typeof( List<List<int>> ), (byte)'C', SerializeBlockList, DeserializeBlockList );
	}

	private static byte[] SerializeBlockList( object list_object ) {

		List<List<int>> set_list = (List<List<int>>)list_object;
		var bytes = new byte[sizeof( int )*width*height];
		int index = 0;

		for(int i = 0; i < height; ++i) {

			for(int j = 0; j < width; ++j) {

				// ループで追加していくように
				ExitGames.Client.Photon.Protocol.Serialize( set_list[i][j], bytes, ref index );
			}
		}

		return bytes;
	}

	private static object DeserializeBlockList( byte[] bytes ) {

		//List<List<int>> get_list = new List<List<int>>();
		var get_list = new List<List<int>>();
		var set_box = 0;
		int index   = 0;

		for( int i = 0; i < height; ++i ) {

			get_list.Add( new List<int>() );
			for( int j = 0; j < width; ++j ) {

				// set_boxに値が来る　-> get_listにadd
				ExitGames.Client.Photon.Protocol.Deserialize( out set_box, bytes, ref index );
				get_list[i].Add( set_box );
			}
		}


		return get_list;
	}

}