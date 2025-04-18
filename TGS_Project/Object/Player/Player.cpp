#include "Player.h"
#include"../../Utility/InputControl.h"
#include "../Bullet/Bullet.h"
#include"DxLib.h"

Player::Player() :
	pos_x_(100), // �����ʒuX���W
	pos_y_(350), // �����ʒuY���W
	size_x_(32),  // �l�p�̕�
	size_y_(64),  // �l�p�̍���
	color_(GetColor(0, 255, 0)) // �l�p�̐F (��)
{

}
Player::~Player()
{

}
void Player::Initialize()
{

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
	// �A�j���[�V�����Ɋւ��鏈�����L�q (����͋�)
}

//void Player::BulletControl()
//{
//	Bullet bullet;
//
//}