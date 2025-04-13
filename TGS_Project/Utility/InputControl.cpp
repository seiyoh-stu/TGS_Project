#include"InputControl.h"
#include"DxLib.h"

//�ÓI�����o�ϐ���`
InputControl* InputControl::instance = nullptr; //�N���X�̃C���X�^���X�̃|�C���^

//���͐���N���X�̃C���X�^���X�擾���鏈��
InputControl* InputControl::GetInstance()
{
	//�C���X�^���X���Ȃ���΁A��������
	if (instance == nullptr)
	{
		instance = new InputControl();
	}
	//�������g�̃|�C���^��ԋp����
	return instance;
}


//���͐���N���X�̃C���X�^���X�폜����
void InputControl::DeleteInstance()
{
	//�C���X�^���X�����݂��Ă����
	if (instance != nullptr)
	{
		delete instance;
		instance = nullptr;
	}
}

void InputControl::Update()
{
	//�O����͒l�̍X�V
	memcpy(old_key, now_key, (sizeof(char) * D_KEYCODE_MAX));
	//���ݓ��͒l�̍X�V
	GetHitKeyStateAll(now_key);
}


//�L�[��������Ă��邩�m�F���鏈��
bool InputControl::GetKey(int key_code)const
{
	return(CheckKeyCodeRange(key_code) && (now_key[key_code] == TRUE &&
		old_key[key_code] == TRUE));
}

//�L�[�������ꂽ�u�Ԃ��m�F���鏈��
bool InputControl::GetKeyDown(int key_code)const
{
	return(CheckKeyCodeRange(key_code) && (now_key[key_code] == TRUE &&
		old_key[key_code] == FALSE));
}

//�L�[�𗣂����u��
bool InputControl::GetKeyUp(int key_code)const
{
	return(CheckKeyCodeRange(key_code) && ((now_key[key_code] == FALSE) &&
		old_key[key_code] == TRUE));
}


//�L�[�R�[�h�͈͓̔����m�F���鏈��
bool InputControl::CheckKeyCodeRange(int key_code)const
{
	return (0 <= key_code && key_code < D_KEYCODE_MAX);
}
