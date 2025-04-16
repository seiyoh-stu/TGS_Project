﻿#pragma once

#include "SceneBase.h"
#include "../../Object/Player/Player.h"
#include "../../Object/Enemy/Enemy.h"
#include "../../Utility/Vector2D.h"
#include <memory> // std::unique_ptr を使用するため

class InGame : public SceneBase
{
private:
    std::unique_ptr<Player> player_; // Playerクラスのインスタンスをスマートポインタで管理
    // 他のプライベートメンバ変数

public:
    InGame();
    virtual ~InGame();

    // 初期化処理
    virtual void Initialize() override;

    // 更新処理
    // 戻り値: 次のシーンタイプ
    virtual eSceneType Update() override;

    // 描画処理
    virtual void Draw() const override;

    // 終了処理
    virtual void Finalize() override;

    // 現在のシーンタイプを取得
    virtual eSceneType GetNowSceneType() const override;

    // Playerクラスのインスタンスへのアクセス (必要であれば)
    Player* GetPlayer() const { return player_.get(); }
};