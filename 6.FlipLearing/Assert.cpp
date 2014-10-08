#include "stdafx.h"
#include "Assert.h"
#include "Character.h"


CAssert::CAssert()
{
}


CAssert::~CAssert()
{
}


void CAssert::Test()
{
	Character* pCharacter = new Character();

	pCharacter->SetLevel(-99);	

	printf_s("Character Level : %d", pCharacter->GetLevel());

}