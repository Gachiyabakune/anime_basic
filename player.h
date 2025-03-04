#pragma once

#include "Vec2.h"

class Player
{
public:
	Player();
	virtual ~Player();

	// グラフィックデータ設定
	void setHandle(int index,int handle) { m_handle[index] = handle; }

	// プレイヤーの初期化
	void init();

	// 処理
	void update();
	// 描画
	void draw();

private:
	int m_handle[12];

	// 表示位置
	Vec2 m_pos;
	// 移動
	Vec2 m_vec;

	//キャラクターのアニメーション
	int m_animeNo;
};