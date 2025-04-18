#include"../../Utility/Vector2D.h"
#ifndef PLAYER_H_
#define PLAYER_H_


class Player
{
public:
	Player();
	~Player();

	void Initialize();
	void Update();
	void Draw();
	void Finalize();
	int GetImage() const; // 画像ハンドルを取得する関数
	void Movement();
	void AnimeControl();
	Vector2D& GetLocation(); // 座標の取得

private:
	
	bool scroll_end;
	int pos_x_;
	int pos_y_;
	int size_x_;
	int size_y_;
	int player_image_;// プレイヤー画像ハンドル
	unsigned int color_;

public:
	void SetScroll();
	Vector2D location;
	///<summary>
	///座標の取得
	///</summary>
	

};

#endif // PLAYER_H_