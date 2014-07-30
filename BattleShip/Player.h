#pragma once
#include "Aircraft.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Destroyer.h"



/// 게임을 진행하는 플레이어 클래스
class Player
{
public:
	Player();
	~Player();

	void SetupShips();
	void PrintShips();
	

protected:
	// 배 객체들
	Aircraft	m_Aircraft;
	Battleship	m_Battleship;
	Cruiser		m_Cruiser;
	Destroyer	m_Destroyer[2];
};
 
