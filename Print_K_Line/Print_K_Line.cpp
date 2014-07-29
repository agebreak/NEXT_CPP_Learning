// Print_K_Line.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string>
#include <iosfwd>
#include <stdlib.h>
#include <iostream>

// ���� : �Է� ������ ������ K ���� ����ϴ� �Լ��� �ۼ��Ͽ���

void print_K_Line(const char* fileName, const int k)
{
	FILE* pFile = nullptr;
	fopen_s(&pFile, fileName, "r");
	std::string* pStringBuf = new std::string[k];

	//ȯ�� �迭�� ������ ���پ� �о� ���δ�.
	int size = 0;
	char buf[1024] = {0,};
	while (fgets(buf, 1024, pFile))
	{
		pStringBuf[size % k] = buf;
		++size;
	}

	// ȯ�� �迭�� �������� ũ�� ���
	int start = size > k ? (size % k) : 0;
	int count = __min(size, k);

	// ���� ������� ���ҵ��� �� ���
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


