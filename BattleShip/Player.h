#pragma once
#include "Aircraft.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Destroyer.h"



/// ������ �����ϴ� �÷��̾� Ŭ����
class Player
{
public:
	Player();
	~Player();

	void SetupShips();
	void PrintShips();
	

protected:
	// �� ��ü��
	Aircraft	m_Aircraft;
	Battleship	m_Battleship;
	Cruiser		m_Cruiser;
	Destroyer	m_Destroyer[2];
};
 
