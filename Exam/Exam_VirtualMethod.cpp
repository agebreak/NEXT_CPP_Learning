#include "stdafx.h"
#include "Exam_VirtualMethod.h"
#include "Character.h"
#include "Mob.h"
#include "NPC.h"


Exam_VirtualMethod::Exam_VirtualMethod(void)
{
}


Exam_VirtualMethod::~Exam_VirtualMethod(void)
{
}

void Exam_VirtualMethod::Run()
{
	// ĳ���� �迭�� �����
	CCharacter* party[3];		

	// ĳ���͵��� �����
	CCharacter* pSoeun = new CCharacter();
	CMob* pJinWoo = new CMob();
	CNPC* pYoonSung = new CNPC();

	printf_s("\n");

	// �迭�� �ִ´�. 
	party[0] = pSoeun;
	party[1] = pJinWoo;
	party[2] = pYoonSung;		

	// �ڱ� Ÿ���� ���, �׸��� �ٷ� ���...-_-a;
	for(auto pChar : party)
	{
		pChar->PrintType();
		delete pChar;

		printf_s("\n");
	}
}
