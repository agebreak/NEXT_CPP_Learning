// BattleShip.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Aircraft.h"
#include "Player.h"

enum HitType
{
	MISS,
	HIT,
	DESTORY,
};

int _tmain(int argc, _TCHAR* argv[])
{ 
	Player player;
	player.SetupShips();
	player.PrintShips();

	getchar();



	return 0;
}

