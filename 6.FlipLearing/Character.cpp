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
	// 레벨은 99를 넘으면 안된다.
	_ASSERT(level <= 99 && level > 0);
	if (!(level <= 99 && level > 0))
		return;


	m_Level = level;
}


