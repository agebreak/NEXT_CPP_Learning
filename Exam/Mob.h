#pragma once
#include "character.h"

class CMinion;

class CMob :
	public CCharacter
{
public:
	CMob(void);
	~CMob(void);

protected:
	CMinion* m_pMinion;
};

