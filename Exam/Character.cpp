#include "stdafx.h"
#include "Character.h"


CCharacter::CCharacter(void)
{
	printf_s("Character is Create!! \n");
}

CCharacter::CCharacter( const CCharacter& src )
{
	m_HP = src.m_HP;
	printf_s("Character is Copy!! \n");
}


CCharacter::~CCharacter(void)
{
	printf_s("Character is Dead!\n");
}

void CCharacter::PrintHP()
{
	printf_s("Character HP : %d\n", m_HP);
}
