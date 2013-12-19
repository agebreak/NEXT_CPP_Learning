#include "stdafx.h"
#include "Exam_MemoryLeak.h"
#include "Mob.h"


Exam_MemoryLeak::Exam_MemoryLeak(void)
{
}


Exam_MemoryLeak::~Exam_MemoryLeak(void)
{
}

void Exam1()
{
	CMob* pSoeun = new CMob();

	delete pSoeun;

	/*
	....
	...
	....
	...
	*/

	delete pSoeun; // 실수!!

	// 어떻게 될까??

}

void Exam2()
{
	CMob* pSoeun = new CMob();

	delete pSoeun;
	pSoeun = nullptr; // 해제 후에 NULL로 체크한다.

	delete pSoeun; // 어떻게 될까?

	// 안정적인 테크닉 (SafeDelete)
	if(pSoeun)
	{
		delete pSoeun;
		pSoeun = nullptr;
	}
}

void Exam3()
{
	CMob* pSoeun = new CMob();
	CMob* pYoonSung = new CMob();

	pSoeun = pYoonSung;

	/*
	..
	...
	....
	....
	*/

	// 메모리 해제
	delete pSoeun;
	delete pYoonSung;
}

void Exam4()
{
	CMob* pHeeJae = new CMob();
	CMob* pWonHyo = new CMob();

	pHeeJae = pWonHyo;

	delete pWonHyo;

	pHeeJae->SetHP(99);

	// 어떻게 될까?
}

void Exam5()
{
	CMob* pHeeJae = new CMob();
	CMob* pWonHyo = new CMob();

	pHeeJae = pWonHyo;

	delete pWonHyo;

	// 메모리 누수가 있어도, 실행과 종료에서
	// 에러가 발생하지 않는다.

}

void Exam6()
{
	// 다형성을 이용한 할당
	CCharacter* pGunHee = new CMob();

	// 위의것은 이것과 같다.
	// CMob* pTemp = new CMob();
	// CCharacter* pGunHee = pTemp;

	delete pGunHee;

	// 배열 예제
	CCharacter* cppMembers[10];
	CMob* pJinWoo = new CMob();
	CMob* pJinSang = new CMob();
	CCharacter* pJongChan = new CCharacter();

	// 아래 코드가 가능한가?
	cppMembers[0] = pJinWoo;
	cppMembers[1] = pJinSang;
	cppMembers[2] = pJongChan;

	delete cppMembers[0];
	delete cppMembers[1];
	delete cppMembers[2];
}

void Exam_MemoryLeak::Run()
{
	//Exam1();
	//Exam2();
	//Exam3();
	//Exam4();
	//Exam5();
	//Exam5();
	Exam6();
}
