#include "stdafx.h"
#include "Player.h"

enum ShipDirection
{
	UP,
	DOWN,
	LEFT,
	RIGHT,
	DIRECTION_MAX,
};


Player::Player()
{
}


Player::~Player()
{
}

void Player::SetupShips()
{
	// ������ �ִ� ����� ��ġ�Ѵ�

	// �켱�� ���� ��ġ

	m_Aircraft.AddPosition('c', '3');
	m_Aircraft.AddPosition('c', '4');
	m_Aircraft.AddPosition('c', '5');
	m_Aircraft.AddPosition('c', '6');
	m_Aircraft.AddPosition('c', '7');
	
}

void Player::PrintShips()
{
	m_Aircraft.Print();
	m_Battleship.Print();
	m_Cruiser.Print();
	m_Destroyer[0].Print();
	m_Destroyer[1].Print();
}


