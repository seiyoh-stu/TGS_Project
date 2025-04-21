#include "Bullet.h"

#include "../../Utility/ResourceManager.h"
#include "../../Utility/Vector2D.h"
#include"../../Utility/InputControl.h"
#include"DxLib.h"

Bullet::Bullet() :
	pos_x_(130), // 初期位置X座標
	pos_y_(370), // 初期位置Y座標
	size_x_(10),  // 弾の幅
	size_y_(10),  // 弾の高さ
	color_(GetColor(255, 0, 0)) // 弾の色 (赤)
{

}

Bullet::~Bullet()
{

}

void Bullet::Initialize()
{

}
void Bullet::Update()
{
	/*Angle();*/
	// 一度Eキーを押したかどうかを保持するフラグ
	bool isMoving = false;

	// 毎フレーム呼ばれる処理の中でこれを書く：

	// 1回だけEキーを押したときにフラグを立てる
	if (InputControl::GetInstance()->GetKey(KEY_INPUT_E))
	{
		isMoving = true;
	}

	// フラグが立ってたら毎フレーム +1 し続ける
	if (isMoving = true && pos_x_ < 640)
	{
		pos_x_ += 1;
		isMoving = false; // フラグをリセット
	}


}
void Bullet::Draw()
{
	DrawBox(pos_x_, pos_y_, pos_x_ + size_x_, pos_y_ + size_y_, color_, TRUE);
}
void Bullet::Finalize()
{
}

void Bullet::GetBullet()
{

}

//void Bullet::Angle()
//{
//	// 角度を取得
//	float angle = 0.0f;
//	// 角度をラジアンに変換
//	float radian = angle * (3.14f / 180.0f);
//	// 角度をラジアンに変換
//	float x = cosf(radian);
//	float y = sinf(radian);
//}

//float Bullet::BulletSpeed(float bulletspeed)
//{
//	// 弾の速度を設定
//	float speed = bulletspeed;
//}
//
//void Bullet::SetArrowPosition(float x, float y)
//{
//	// 弾の位置を設定
//	Vector2D position(x, y);
//}