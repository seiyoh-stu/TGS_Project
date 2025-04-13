#pragma once

#include"SceneBase.h"

class InGame : public SceneBase
{
private:

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

};