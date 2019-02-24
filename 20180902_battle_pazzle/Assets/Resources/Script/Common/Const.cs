﻿namespace Common {

	public static class Const {

		public const int NUM_WIDTH  = 8;
		public const int NUM_HEIGHT = 8;

		public const float BLOCK_SIZE = 0.64f;
		public const float BLOCK_SIZE_HALF = BLOCK_SIZE / 2.0f;


		// ブロック数 * ブロックの大きさ / 中央に寄せるため半分に割る + ブロックの半分だけずらす
		public const float START_POS_X = NUM_WIDTH  * BLOCK_SIZE / -2.0f + BLOCK_SIZE_HALF;
		public const float START_POS_Y = NUM_HEIGHT * BLOCK_SIZE / -2.0f + BLOCK_SIZE_HALF;

		public const float TURN_TIME = 30.0f;


		public enum PLAYER_TYPE{
			MASTER = 1,
			GUEST
		}

	}
}