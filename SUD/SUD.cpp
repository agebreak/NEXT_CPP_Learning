// SUD.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "GameManager.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CGameManager gameManager;

	gameManager.Init();
	gameManager.Run();
	gameManager.Release();

	getchar();
	return 0;
}

