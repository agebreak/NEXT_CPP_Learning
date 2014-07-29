// UniqueChar.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <string>
#include <wtypes.h>

// ���� : ���ڿ��� ���Ե� ���ڵ��� ���� ���������� �˻��ϴ� �˰����� �����϶�. 

// �ش�1. bool ���۸� �̿��ϴ� �ذ� ���
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

// �ش�2. ���ڿ��� a-z������� �����ϰ�,  ��Ʈ ����� �̿��ؼ�, int �� �ϳ��� ����ϱ�
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

