#include "stdafx.h"
#include "FLString.h"
#include <string>
#include <iostream>


FLString::FLString()
{
}


FLString::~FLString()
{
}

void FLString::Test()
{
	char szText1[] = "I Love NHN";
	char szBuf[32] = { 0, };
	
	sprintf_s(szBuf, "%s NEXT!!", szText1);
	printf_s("%s\n", szBuf);
}

void FLString::Test2()
{
	char szText[] = "I am Otaku";
	printf_s("%s\n", szText);

	//szText = "I am Not Otaku";
	char szNewText[32] = { 0, };
	sprintf_s(szNewText, "I am Not Otaku");
	printf_s("%s\n", szNewText);

	std::string strText = "You Otaku";
	std::cout << strText << std::endl;

	strText = "You Not Otaku";
	std::cout << strText << std::endl;

	// 2. 문자열 복사
	char szText2[] = "I am Programmer";
	printf_s("%s\n", szText2);

	//szText = szText2;
	//strcpy_s(szText2, szText);
	sprintf_s(szText2, "%s", szText);
	printf_s("%s\n", szText2);


	std::string strText2 = "You Programmer";
	strText = strText2;
	printf_s("%s\n", strText.c_str());

	// 문자열 길이
	int textLen = strlen(szText);
	int strLen = strText.length();
	
}
