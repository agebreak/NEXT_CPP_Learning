// PLinCPP.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string>
#include <iostream>

void DependingCodeSample()
{
	std::string strResults[] = { "HIT", "MISS", "DESTROY" };
	std::cout << strResults[rand() % 5] << std::endl;

}

int _tmain(int argc, _TCHAR* argv[])
{
	DependingCodeSample();

	getchar();
	return 0;
}

