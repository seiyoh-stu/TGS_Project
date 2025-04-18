#include "Player.h"
#include<cmath>
#include"DxLib.h"
#include"../../Utility/ResourceManager.h"
#include"../../Utility/InputControl.h"
#include"DxLib.h"

Player::Player() :
	pos_x_(100), // 初期位置X座標
	pos_y_(350), // 初期位置Y座標
	size_x_(64),  // 四角の幅
	size_y_(64),  // 四角の高さ
	color_(GetColor(0, 255, 0)) // 四角の色 (緑)
{

}
Player::~Player()
{

}
void Player::Initialize()
{
	ResourceManager* rm = ResourceManager::GetInstance();


}

void Player::Update()
{
	Movement();
	AnimeControl();
}

void Player::Draw()
{
	DrawBox(pos_x_, pos_y_, pos_x_ + size_x_, pos_y_ + size_y_, color_, TRUE);
}
void Player::Finalize()
{

}
//移動処理
void Player::Movement()
{
	//移動速度
	const int speed = 2;
	//移動量
	int move_x = 0;

	//キー入力の取得
	if (InputControl::GetInstance()->GetKey(KEY_INPUT_LEFT))
	{
		move_x -= speed;
	}
	if (InputControl::GetInstance()->GetKey(KEY_INPUT_RIGHT))
	{
		move_x += speed;
	}

	pos_x_ += move_x;
}

void Player::AnimeControl()
{
	
}

Vector2D& Player::GetLocation()
{
	return location;
}

int Player::GetImage() const
{
	return player_image_;
}