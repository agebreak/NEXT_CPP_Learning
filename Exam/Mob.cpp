#include "stdafx.h"
#include "Mob.h"
#include "Minion.h"


CMob::CMob(void)
{
	// �����ϸ鼭 �̴Ͼ� ����
	m_pMinion = new CMinion();
}


CMob::~CMob(void)
{
	// �����ϸ鼭 �̴Ͼ� ����
	delete m_pMinion;
}
