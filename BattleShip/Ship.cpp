#include "stdafx.h"
#include "Ship.h"
#include <windows.h>
#include <iostream>


Ship::Ship()
{
	m_Hp = 0;
	m_Type = SHIP_NONE;

	ZeroMemory(&m_Pos, sizeof(m_Pos));
}


Ship::~Ship()
{
}

void Ship::AddPosition(Position pos)
{
	for (int i = 0; i < m_Hp; ++i)
	{
		if (m_Pos[i].x == 0)
		{
			m_Pos[i] = pos;
			break;
		}
	}
}

void Ship::AddPosition(char x, char y)
{
	Position pos;
	pos.x = x;
	pos.y = y;
	AddPosition(pos);
}

bool Ship::IsDead()
{
	return m_Hp == 0;
}

void Ship::Print()
{
	std::string strPrint; 
	strPrint = m_Name;
	strPrint += " : ";

	for (int i = 0; i < m_Hp; ++i)
	{
		strPrint += m_Pos[i].x;
		strPrint += m_Pos[i].y;
		strPrint += " ";
	}

	std::cout << strPrint << std::endl;
}
