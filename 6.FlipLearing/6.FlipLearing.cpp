// 6.FlipLearing.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "FlString.h"
#include "Ship.h"
#include "BattleShip.h"


int _tmain(int argc, _TCHAR* argv[])
{
	//FLString flString; 
	//flString.Test2();

	Ship ship;
	//ship.m_HP = 5;
	//printf_s("HP : %d", ship.m_HP);

	//ship.SetHP(5);
	ship.Test();
	printf_s("HP : %d\n", ship.GetHP());

	BattleShip battleShip;
	printf_s("BattleShip HP : %d\n", battleShip.GetHP());

	getchar();
	return 0;
}

