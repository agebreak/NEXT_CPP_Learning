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

	delete pSoeun; // �Ǽ�!!

	// ��� �ɱ�??

}

void Exam2()
{
	CMob* pSoeun = new CMob();

	delete pSoeun;
	pSoeun = nullptr; // ���� �Ŀ� NULL�� üũ�Ѵ�.

	delete pSoeun; // ��� �ɱ�?

	// �������� ��ũ�� (SafeDelete)
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

	// �޸� ����
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

	// ��� �ɱ�?
}

void Exam5()
{
	CMob* pHeeJae = new CMob();
	CMob* pWonHyo = new CMob();

	pHeeJae = pWonHyo;

	delete pWonHyo;

	// �޸� ������ �־, ����� ���ῡ��
	// ������ �߻����� �ʴ´�.

}

void Exam6()
{
	// �������� �̿��� �Ҵ�
	CCharacter* pGunHee = new CMob();

	// ���ǰ��� �̰Ͱ� ����.
	// CMob* pTemp = new CMob();
	// CCharacter* pGunHee = pTemp;

	delete pGunHee;

	// �迭 ����
	CCharacter* cppMembers[10];
	CMob* pJinWoo = new CMob();
	CMob* pJinSang = new CMob();
	CCharacter* pJongChan = new CCharacter();

	// �Ʒ� �ڵ尡 �����Ѱ�?
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
