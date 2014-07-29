// BattleShip.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Aircraft.h"


int _tmain(int argc, _TCHAR* argv[])
{ 
	Aircraft aircraft; // 일반 생성

	// Destory 체크
	if (aircraft.GetHP() == 0)
	{
		// 파괴 되었음.
	}

	Position pos;
	pos.x = 'c';
	pos.y = '3';
	Ship ship;
	
	aircraft.AddPosition(pos);
	//aircraft.HitCheck(pos);

	ship.Print();
	aircraft.Print();
	//
	// "Aircraft is HP : 5"

	aircraft.GetHP();


	return 0;
}

