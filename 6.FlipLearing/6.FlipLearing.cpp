// 6.FlipLearing.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "FlString.h"
#include "Ship.h"
#include "BattleShip.h"
#include "Overriding.h"
#include "Assert.h"
#include "MemoryLeak.h"
#include "Mob.h"


int _tmain(int argc, _TCHAR* argv[])
{
	// �޸� �� üũ, ���α׷� ����� �ѹ��� ����
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	

	//FLString flString; 
	//flString.Test2();

	//Ship ship;
	//ship.m_HP = 5;
	//printf_s("HP : %d", ship.m_HP);

	//ship.SetHP(5);
// 	ship.Test();
// 	printf_s("HP : %d\n", ship.GetHP());
// 
// 	BattleShip battleShip;
// 	printf_s("BattleShip HP : %d\n", battleShip.GetHP());

	Overriding overriding; 
	overriding.Run();

// 	MemoryLeak memoryLeak; 
// 	memoryLeak.Test();

// 	Mob* pMob = new Mob();
// 	delete pMob;

	getchar();
	return 0;
}

