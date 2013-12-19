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
	// 캐릭터 배열을 만든다
	CCharacter* party[3];		

	// 캐릭터들을 만든다
	CCharacter* pSoeun = new CCharacter();
	CMob* pJinWoo = new CMob();
	CNPC* pYoonSung = new CNPC();

	printf_s("\n");

	// 배열에 넣는다. 
	party[0] = pSoeun;
	party[1] = pJinWoo;
	party[2] = pYoonSung;		

	// 자기 타입을 출력, 그리고 바로 사망...-_-a;
	for(auto pChar : party)
	{
		pChar->PrintType();
		delete pChar;

		printf_s("\n");
	}
}
