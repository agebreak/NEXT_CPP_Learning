#include "stdafx.h"
#include "Character.h"


CCharacter::CCharacter(void)
{
	m_Name = "Character";	

	printf_s("Character is Created!!\n");
}

CCharacter::CCharacter( const CCharacter& src )
{
	m_Name = src.m_Name;
	printf_s("%s is Copy!! \n", m_Name.c_str());
}


CCharacter::~CCharacter(void)
{
	//printf_s("Character is Dead!\n");
}

void CCharacter::PrintHP()
{
	printf_s("Character HP : %d\n", m_HP);
}

void CCharacter::PrintType()
{
	printf_s("My Type is CCharacter...\n");
}

void CCharacter::Attack(CCharacter* pTarget)
{

}

void CCharacter::SayMyName()
{
	printf_s("My Name is %s\n", m_Name.c_str());
}

