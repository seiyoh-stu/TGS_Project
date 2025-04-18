#pragma once

#include "SceneBase.h"
#include "../../Object/Player/Player.h"
#include "../../Object/Bullet/Bullet.h"
#include "../../Object/Enemy/Enemy.h"
#include "../../Utility/Vector2D.h"
#include <memory> // std::unique_ptr を使用するため

class InGame : public SceneBase
{
private:
<<<<<<< HEAD
    std::unique_ptr<Player> player_; // Playerクラスのインスタンスをスマートポインタで管理
    
=======
    std::unique_ptr<Player> player; // Playerクラスのインスタンスをスマートポインタで管理
	std::unique_ptr<Bullet> bullet; // Bulletクラスのインスタンスをスマートポインタで管理
    // 他のプライベートメンバ変数
>>>>>>> seiyo

public:
    InGame();
    virtual ~InGame();

    int stage_image;
    float scroll = 0.0f;             // スクロール量
    float scroll_speed = 4.0f;       // スクロール速度（必要に応じて調整）
    int screen_width = 640;          // 画面幅
    int stage_width = 2000;          // ステージ画像の横幅

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
<<<<<<< HEAD
    Player* GetPlayer() const { return player_.get(); };
    Vector2D generate_location;
=======
    Player* GetPlayer() const { return player.get(); }
    Bullet* GetBullet() const { return bullet.get(); }
>>>>>>> seiyo
};