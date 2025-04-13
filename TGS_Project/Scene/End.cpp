#include"End.h"
#include"../Utility/InputControl.h"
#include"DxLib.h"

End::End()
{

}

End::~End()
{

}

void End::Initialize()
{

}

eSceneType End::Update()
{
	//���͋@�\�̎擾
	InputControl* input = InputControl::GetInstance();

	//SPACE�L�[�ŉ@�Q�[����ʂɈړ�����
	if (input->GetKeyDown(KEY_INPUT_SPACE))
	{
		return eSceneType::eEnd;
	}

	return GetNowSceneType();
}
void End::Draw() const
{
	DrawFormatString(10, 10, GetColor(255, 255, 255), "�G���h��ʂł�");
}

void End::Finalize()
{

}

eSceneType End::GetNowSceneType() const
{
	return eSceneType::eInGame;
}
