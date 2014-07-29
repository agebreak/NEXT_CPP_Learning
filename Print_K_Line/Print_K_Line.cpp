// Print_K_Line.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <iosfwd>
#include <stdlib.h>
#include <iostream>

// 문제 : 입력 파일의 마지막 K 줄을 출력하는 함수를 작성하여라

void print_K_Line(const char* fileName, const int k)
{
	FILE* pFile = nullptr;
	fopen_s(&pFile, fileName, "r");
	std::string* pStringBuf = new std::string[k];

	//환형 배열에 파일을 한줄씩 읽어 들인다.
	int size = 0;
	char buf[1024] = {0,};
	while (fgets(buf, 1024, pFile))
	{
		pStringBuf[size % k] = buf;
		++size;
	}

	// 환형 배열의 시작점과 크기 계산
	int start = size > k ? (size % k) : 0;
	int count = __min(size, k);

	// 읽은 순서대로 원소들의 값 출력
	for(int i = 0; i < count; ++i)
	{
		std::cout<< pStringBuf[(start + i) % k];
	}

	delete[] pStringBuf;
}


int _tmain(int argc, _TCHAR* argv[])
{
	print_K_Line("kLine.txt", 10);

	getchar();

	return 0;
}


