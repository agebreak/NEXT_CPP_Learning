#pragma once
#include "character.h"

class CMinion;

class CMob :
	public CCharacter
{
public:
	CMob(void);
	~CMob(void);

	void PrintType();

protected:
	CMinion* m_pMinion;
};

