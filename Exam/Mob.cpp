#include "stdafx.h"
#include "Mob.h"
#include "Minion.h"


CMob::CMob(void)
{
	// 생성하면서 미니언도 생성
	m_pMinion = new CMinion();
}


CMob::~CMob(void)
{
	// 해제하면서 미니언도 해제
	delete m_pMinion;
}
