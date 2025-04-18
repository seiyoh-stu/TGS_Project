#include"InGame.h"
#include"../../Utility/InputControl.h"
#include"../../Object/Player/Player.h"
#include "../../Object/Bullet/Bullet.h"
#include"DxLib.h"
#include <memory> // std::make_unique を使用するため

InGame::InGame() :
    player(std::make_unique<Player>()) // コンストラクタで Player のインスタンスを生成
	, bullet(std::make_unique<Bullet>()) // コンストラクタで Bullet のインスタンスを生成
{

}

InGame::~InGame()
{
    // std::unique_ptr は自動的に管理してくれるため、delete は不要
}

void InGame::Initialize()
{
    player->Initialize();
    
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

    player->Update();
	bullet->Update();

    return GetNowSceneType();
}
void InGame::Draw() const
{
    DrawFormatString(10, 10, GetColor(255, 255, 255), "ゲーム中です");
    player->Draw();
    bullet->Draw();

}

void InGame::Finalize()
{
    player->Finalize();
}

eSceneType InGame::GetNowSceneType() const
{
    return eSceneType::eInGame;
}