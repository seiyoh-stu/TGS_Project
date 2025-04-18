#include "Player.h"
#include<cmath>
#include"DxLib.h"
#include"../../Utility/ResourceManager.h"
#include"../../Utility/InputControl.h"
#include"DxLib.h"

Player::Player() :
	pos_x_(100), // �����ʒuX���W
	pos_y_(350), // �����ʒuY���W
	size_x_(64),  // �l�p�̕�
	size_y_(64),  // �l�p�̍���
	color_(GetColor(0, 255, 0)) // �l�p�̐F (��)
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
//�ړ�����
void Player::Movement()
{
	//�ړ����x
	const int speed = 2;
	//�ړ���
	int move_x = 0;

	//�L�[���͂̎擾
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