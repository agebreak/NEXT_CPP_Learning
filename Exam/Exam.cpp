// Exam.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "UtilProject.h"

class Boo
{
	SINGLETON(Boo);

public: 
	void Test()
	{
		printf_s("Hello~ \n");
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	Boo::GetInstance()->Test();

	getchar();
	return 0;
}

