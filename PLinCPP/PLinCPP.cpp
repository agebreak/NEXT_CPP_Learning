// PLinCPP.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

