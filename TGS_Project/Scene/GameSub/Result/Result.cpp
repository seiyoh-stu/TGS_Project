#include"Result.h"
#include"../../../Utility/InputControl.h"
#include"DxLib.h"

Result::Result()
{

}

Result::~Result()
{

}

void Result::Initialize()
{

}

eSceneType Result::Update()
{
	//���͋@�\�̎擾
	InputControl* input = InputControl::GetInstance();

	//SPACE�L�[�ŉ@�Q�[����ʂɈړ�����
	if (input->GetKeyDown(KEY_INPUT_SPACE))
	{
		return eSceneType::eHelp;
	}

	return GetNowSceneType();
}
void Result::Draw() const
{
	DrawFormatString(10, 10, GetColor(255, 255, 255), "���U���g��ʂł�");
}

void Result::Finalize()
{

}

eSceneType Result::GetNowSceneType() const
{
	return eSceneType::eResult;
}
