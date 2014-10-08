// 6.FlipLearing.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	// 메모리 릭 체크, 프로그램 실행시 한번만 실행
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

