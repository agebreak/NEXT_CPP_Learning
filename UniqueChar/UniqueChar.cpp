// UniqueChar.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <wtypes.h>

// 문제 : 문자열에 포함된 문자들이 전부 유일한지를 검사하는 알고리즘을 구현하라. 

// 해답1. bool 버퍼를 이용하는 해결 방법
bool IsUniqueChar(std::string str)
{
	if(str.length() > 256) 
		return false;

	bool char_set[256] = {0,};

	for(UINT i = 0; i < str.length(); ++i)
	{
		int index = (int)str.at(i);
		if(char_set[index])
			return false;

		char_set[index] = true;
	}

	return true;
}

// 해답2. 문자열이 a-z까지라고 가정하고,  비트 계산을 이용해서, int 형 하나로 계산하기
bool IsUniqueChar2(std::string str)
{
	if(str.length() > 256)
		return false;

	int charSet = 0;

	for(UINT i = 0; i < str.length(); ++i)
	{
		int index = str.at(i) - 'a';
		if(charSet & (1 << index))
			return false;

		charSet = charSet | (1 << index);
	}

	return true;
}


int _tmain(int argc, _TCHAR* argv[])
{
	std::string str1 = "abcdefghijk";
	std::string str2 = "abcddfkjfesladfjl";

	if(IsUniqueChar(str1))
	{
		printf_s("%s is Unique!\n", str1.c_str());
	}
	else
	{
		printf_s("%s is Not Unique!\n", str1.c_str());
	}

	if(IsUniqueChar(str2))
	{
		printf_s("%s is Unique!\n", str2.c_str());
	}
	else
	{
		printf_s("%s is Not Unique!\n", str2.c_str());
	}

	if(IsUniqueChar2(str1))
	{
		printf_s("%s is Unique!\n", str1.c_str());
	}
	else
	{
		printf_s("%s is Not Unique!\n", str1.c_str());
	}

	if(IsUniqueChar2(str2))
	{
		printf_s("%s is Unique!\n", str2.c_str());
	}
	else
	{
		printf_s("%s is Not Unique!\n", str2.c_str());
	}

	getchar();

	return 0;
}

