// BattleShip.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Aircraft.h"


int _tmain(int argc, _TCHAR* argv[])
{ 
	Aircraft aircraft; // �Ϲ� ����

	// Destory üũ
	if (aircraft.GetHP() == 0)
	{
		// �ı� �Ǿ���.
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

