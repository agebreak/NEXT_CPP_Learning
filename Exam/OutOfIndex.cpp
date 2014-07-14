
#include "stdafx.h"
#include <time.h>
#include <array>

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[10];
	// C++ 11
	std::array<int, 10> arrAdv;

	arrAdv[10];
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = i;
	}
	srand((unsigned int)time(NULL));
	printf_s("RAND : %d", arr[rand() % arrAdv.size()]);

	int arrTest1[10];
	sizeof(arrTest1);

	
	sizeof(pArr);

	int* pArr = new int[10];

	getchar();
}