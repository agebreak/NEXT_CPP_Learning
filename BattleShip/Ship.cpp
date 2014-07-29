#include "stdafx.h"
#include "Ship.h"


Ship::Ship()
{
	m_Hp = 0;
	m_Type = SHIP_NONE;
}


Ship::~Ship()
{
}

void Ship::AddPosition(Position pos)
{

}

bool Ship::IsDead()
{
	return m_Hp == 0;
}
