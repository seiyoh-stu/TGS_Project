#pragma once

#include"../../GameMain/SceneBase.h"

class End :public SceneBase
{
private:

public:
	End();
	virtual~End();

	//����������
	virtual void Initialize() override;

	//�X�V����
	//�����F1�t���[��������̎���
	//�߂�l�F���̃V�[���^�C�v
	virtual eSceneType Update() override;

	//�`�揈��
	virtual void Draw() const override;

	//�I��������
	virtual void Finalize() override;

	//���݂̃V�[���^�C�v�i�I�[�o�[���C�h�K�{�j
	virtual eSceneType GetNowSceneType() const override;

};

