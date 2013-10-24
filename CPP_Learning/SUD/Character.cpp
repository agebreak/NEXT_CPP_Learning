#include "stdafx.h"
#include "Character.h"
#include "GameMap.h"


CCharacter::CCharacter(void)
{
	m_position.x = m_position.y = 0;
}


CCharacter::~CCharacter(void)
{
}

Position CCharacter::Move( DIRECTION dir )
{
	switch (dir)
	{
	case DIR_UP:
		m_position.y = __max(m_position.y - 1, 0);
		break;
	case DIR_DOWN:
		m_position.y = __min(m_position.y + 1, MAP_SIZE);
		break;
	case DIR_LEFT:
		m_position.x = __max(m_position.x - 1, 0);
		break;
	case DIR_RIGHT:
		m_position.x = __min(m_position.x + 1, MAP_SIZE);
		break;
	default:
		break;
	}

	return m_position;
}

// 오버로딩
void CCharacter::SetPosition( int x, int y )
{
	Position pos;
	pos.x = x;
	pos.y = y;
	SetPosition(pos);
}

void CCharacter::PrintPosition()
{
	printf_s("[CHAR POS: %d, %d]\n", m_position.x, m_position.y);
}
