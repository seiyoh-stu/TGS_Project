#include"InGame.h"
#include"../../Utility/InputControl.h"
#include"DxLib.h"

InGame::InGame()
{

}

InGame::~InGame()
{

}

void InGame::Initialize()
{

}

eSceneType InGame::Update()
{
	// 入力制御インスタンスの取得
	InputControl* input = InputControl::GetInstance();

	// SPACEキーが押されたらリザルトシーンへ遷移
	if (input->GetKeyDown(KEY_INPUT_SPACE))
	{
		return eSceneType::eResult;
	}

	return GetNowSceneType();
}
void InGame::Draw() const
{
	DrawFormatString(10, 10, GetColor(255, 255, 255), "ゲーム中です");
}

void InGame::Finalize()
{

}

eSceneType InGame::GetNowSceneType() const
{
	return eSceneType::eInGame;
}