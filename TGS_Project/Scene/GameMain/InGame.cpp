#include"InGame.h"
#include"../../Utility/InputControl.h"
#include"../../Utility/Vector2D.h"
#include"../../Utility/ResourceManager.h"
#include"../../Object/Player/Player.h"
#include"DxLib.h"
#include <memory> // std::make_unique を使用するため

InGame::InGame() :
     player_(std::make_unique<Player>())
     player(std::make_unique<Player>())
{

}

InGame::~InGame()
{
    // std::unique_ptr は自動的に管理してくれるため、delete は不要
}

//初期化処理
void InGame::Initialize()
{
    player_->Initialize();
    player->Initialize();

	//// 背景画像の読み込み   
    ResourceManager* rm = ResourceManager::GetInstance();
	stage_image = rm->GetImages("Resource/Images/Stage.png")[0];
    // スクロール位置を指定の値
    scroll = 2000;
}

eSceneType InGame::Update()
{
    InputControl* input = InputControl::GetInstance();

    if (input->GetKeyDown(KEY_INPUT_SPACE))
    {
        return eSceneType::eResult;
    }

    player_->Update();

    // プレイヤーの位置取得
    Vector2D player_pos = player_->GetLocation();
    Vector2D player_pos = player->GetLocation();

    // プレイヤーが画面中央より右に行ったらスクロール
    if (player_pos.x > scroll + screen_width / 2)
    {
        scroll = player_pos.x - screen_width / 2;
    }

    // スクロールがステージの範囲を超えないように制限
    if (scroll < 0) scroll = 0;
    if (scroll > stage_width - screen_width) scroll = static_cast<float>(stage_width - screen_width);

    return GetNowSceneType();
}

void InGame::Draw() const
{
    // 背景画像の描画（スクロール対応）
    DrawGraph(-static_cast<int>(scroll), 0, stage_image, TRUE);

    // プレイヤー描画（スクロール分オフセット）
    Vector2D draw_pos = player_->GetLocation();
    DrawGraph(static_cast<int>(draw_pos.x - scroll), static_cast<int>(draw_pos.y), player_->GetImage(), TRUE);
    Vector2D draw_pos = player->GetLocation();
    DrawGraph(static_cast<int>(draw_pos.x - scroll), static_cast<int>(draw_pos.y), player->GetImage(), TRUE);

    DrawFormatString(10, 10, GetColor(255, 255, 255), "ゲーム中", scroll);
}


void InGame::Finalize()
{
    player_->Finalize();

}

eSceneType InGame::GetNowSceneType() const
{
    return eSceneType::eInGame;
}