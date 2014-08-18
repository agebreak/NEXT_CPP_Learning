#include "stdafx.h"
#include "Exam_Float.h"
#include "Elf.h"
#include "Character.h"


Exam_Float::Exam_Float()
{
}


Exam_Float::~Exam_Float()
{
}

void Exam_Float::Run()
{
	float fTest1 = 6.82f;
	float fTest2 = 6.20f + 0.62f;
	

#define EPSILON 0.00001  //Á¤È®µµ.
	if (abs(fTest1 - fTest2) < EPSILON)
	{
		printf_s("Float is Equal!!\n");
	}
	else
	{
		printf_s("Float is Not Equal!! %f, %f\n", fTest1, fTest2);
	}
}

void Exam_Float::Run2()
{
	float fTest = 0.0f;
	for (int i = 0; i < 100; ++i)
	{
		fTest += 0.01f;
	}

	if (fTest == 1.0f)
	{
		printf_s("Float is Equal!!");
	}
	else
	{
		printf_s("Float is Not Equal!! %f != 1", fTest);
	}

}

void Exam_Float::TestVoid()
{
	std::vector<void*> voidList;

	Elf* pElf = new Elf();
	CCharacter* pDongYu = new CCharacter();
	int* num = new int();

	voidList.push_back(pElf);
	voidList.push_back(pDongYu);
	voidList.push_back(num);
}


