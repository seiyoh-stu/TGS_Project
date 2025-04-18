#include"../../Utility/Vector2D.h"
#ifndef PLAYER_H_
#define PLAYER_H_


class Player
{
public:
	Player();
	~Player();

	void Initialize();
	void Update();
	void Draw();
	void Finalize();
	int GetImage() const; // �摜�n���h�����擾����֐�
	void Movement();
	void AnimeControl();
	Vector2D& GetLocation(); // ���W�̎擾

private:
	
	bool scroll_end;
	int pos_x_;
	int pos_y_;
	int size_x_;
	int size_y_;
	int player_image_;// �v���C���[�摜�n���h��
	unsigned int color_;

public:
	void SetScroll();
	Vector2D location;
	///<summary>
	///���W�̎擾
	///</summary>
	

};

#endif // PLAYER_H_