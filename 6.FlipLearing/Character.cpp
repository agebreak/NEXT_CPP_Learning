#include "stdafx.h"
#include "Character.h"
#include <crtdbg.h>


Character::Character()
{
	//printf_s("Character is Created!\n");
}


Character::~Character()
{
	//printf_s("Character is Destroyed!\n");
}

// void Character::Dead()
// {
// 	printf_s("Character is Dead!! \n");
// }

void Character::SetLevel(int level)
{
	// ������ 99�� ������ �ȵȴ�.
	_ASSERT(level <= 99 && level > 0);
	if (!(level <= 99 && level > 0))
		return;


	m_Level = level;
}


