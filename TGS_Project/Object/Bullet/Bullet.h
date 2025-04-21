#pragma once

class Bullet 
{
public:
	Bullet();
	~Bullet();
	void Initialize();
	void Update();
	void Draw();
	void Finalize();
private:
	/*void Angle();
	float BulletSpeed(float bulletspeed);
	void SetArrowPosition(float x, float y);*/
	void GetBullet();

	int pos_x_;
	int pos_y_;
	int size_x_;
	int size_y_;
	unsigned int color_;
};
