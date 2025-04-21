#include "Bullet.h"

#include "../../Utility/ResourceManager.h"
#include "../../Utility/Vector2D.h"
#include"../../Utility/InputControl.h"
#include"DxLib.h"

Bullet::Bullet() :
	pos_x_(130), // �����ʒuX���W
	pos_y_(370), // �����ʒuY���W
	size_x_(10),  // �e�̕�
	size_y_(10),  // �e�̍���
	color_(GetColor(255, 0, 0)) // �e�̐F (��)
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
	// ��xE�L�[�����������ǂ�����ێ�����t���O
	bool isMoving = false;

	// ���t���[���Ă΂�鏈���̒��ł���������F

	// 1�񂾂�E�L�[���������Ƃ��Ƀt���O�𗧂Ă�
	if (InputControl::GetInstance()->GetKey(KEY_INPUT_E))
	{
		isMoving = true;
	}

	// �t���O�������Ă��疈�t���[�� +1 ��������
	if (isMoving = true && pos_x_ < 640)
	{
		pos_x_ += 1;
		isMoving = false; // �t���O�����Z�b�g
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
//	// �p�x���擾
//	float angle = 0.0f;
//	// �p�x�����W�A���ɕϊ�
//	float radian = angle * (3.14f / 180.0f);
//	// �p�x�����W�A���ɕϊ�
//	float x = cosf(radian);
//	float y = sinf(radian);
//}

//float Bullet::BulletSpeed(float bulletspeed)
//{
//	// �e�̑��x��ݒ�
//	float speed = bulletspeed;
//}
//
//void Bullet::SetArrowPosition(float x, float y)
//{
//	// �e�̈ʒu��ݒ�
//	Vector2D position(x, y);
//}