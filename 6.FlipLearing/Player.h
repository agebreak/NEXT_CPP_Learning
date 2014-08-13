#pragma once
#include "Character.h"
class Player : public Character
{
public:
	Player();
	~Player();

	// 오버라이딩
	void Dead();
};

