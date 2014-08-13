#pragma once
#include "Player.h"

class GameManager
{
public:
	GameManager();
	~GameManager();

	void Init();
	void Start();

protected:
	// 우선 1단계. 
	// 어택커와 디펜더를 구별하고, 한쪽은 공격만, 한쪽은 히트체크만 한다.
	Player m_Attacker;
	Player m_Defender;
};

