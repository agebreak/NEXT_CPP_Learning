// Exam.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "UtilProject.h"
#include "Character.h"
#include "Exam_MemoryLeak.h"
#include "Exam_VirtualMethod.h"
#include "ExamMain.h"


// �̱��� �׽�Ʈ
class Boo
{
	SINGLETON(Boo);

public: 
	void Test()
	{
		printf_s("�̰��� �̱��� �׽�Ʈ�Դϴ�. \n");
	}
};

//////////////////////////////////////////////////////////////////////////

void TestValue_1()
{
	// Value
	CCharacter player;
	player.SetHP(99);
	player.PrintHP();

}

void TestValue_2()
{
	

	// ��Ƽ�� �����
	CCharacter partyMember[3];

	// ĳ���͵��� �����, ��Ƽ�� �ִ´�. 
	CCharacter soeun;
	CCharacter wonHyo;
	CCharacter jinSang;

	partyMember[0] = soeun;
	partyMember[1] = wonHyo;
	partyMember[2] = jinSang;

	// HP�� �����Ѵ�
	soeun.SetHP(777);

	// �׸��� ���
	soeun.PrintHP();
	partyMember[0].PrintHP();

	// ���� �����?

}

void Heal(CCharacter player)
{
	player.SetHP(999);	
}

void TestValue_4()
{
	// ���� ����, �ױ� ������ ���·� ����!
	CCharacter gunHee;
	gunHee.SetHP(1);

	// ����� �Ѵ�!
	Heal(gunHee);

	gunHee.PrintHP();

}

void TestPointer_1()
{
	// �����͸� ����� ���� �Ҵ�
	CCharacter* pPlayer = new CCharacter();
	pPlayer->SetHP(77);
	pPlayer->PrintHP();

	
	// ����� ������, �� ������ ��� �Ѵ�.
	delete pPlayer;
}

void TestPointer_2()
{
	// �������� �迭�� �����Ѵ�. 
	CCharacter* pParty[3];

	CCharacter* pJinWoo = new CCharacter();
	CCharacter* pJongChan = new CCharacter();
	CCharacter* pYoonSung = new CCharacter();

	pParty[0] = pJinWoo;
	pParty[1] = pJongChan;
	pParty[2] = pYoonSung;

	pJinWoo->PrintHP();
	pParty[0]->SetHP(888);
	pJinWoo->PrintHP();

	for(int i = 0; i < 3; ++i)
	{
		delete pParty[i];
	}
}

void Heal(CCharacter* player)
{
	player->SetHP(999);
}

void TestPointer_3()
{
	CCharacter* pYeonKyu = new CCharacter();

	// �ױ� ���� ���簣��
	pYeonKyu->SetHP(1);
	pYeonKyu->PrintHP();

	// ����~~
	Heal(pYeonKyu);

	pYeonKyu->PrintHP();

	delete pYeonKyu;
}

void CopyPointer(CCharacter* player1, CCharacter* player2)
{
	player1 = player2;
}

void TestPointer_4()
{
	CCharacter* player1 = new CCharacter();
	CCharacter* player2 = new CCharacter();

	player1->SetHP(10);
	player2->SetHP(20);

	player1->PrintHP();
	player2->PrintHP();

	// ������ ����
	//player1 = player2;
	//player1->PrintHP();
	//player2->PrintHP();

	CopyPointer(player1, player2);
	player1->PrintHP();
	player2->PrintHP();

	delete player1;
	delete player2;
}

void TestReference_1()
{
	CCharacter player;
	CCharacter& refPlayer = player;

	refPlayer.SetHP(666);
	player.PrintHP();
}

void TestValuePointer()
{
	CCharacter player; // Value
	player.SetHP(888);

	CCharacter* pPlayer = &player; // value -> Pointer
	pPlayer->PrintHP();

	CCharacter player2 = *pPlayer; // Pointer -> value
	player2.PrintHP();
}

class TestBoo
{
public:
	TestBoo();
	~TestBoo();

private:	

};

TestBoo::TestBoo()
{
}

TestBoo::~TestBoo()
{
}


//////////////////////////////////////////////////////////////////////////



int _tmain(int argc, _TCHAR* argv[])
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	
	/*TestValue_1();
	TestValue_1();
	TestValue_1();*/
	
	//TestValue_2();

	//TestValue_4();	
	//TestPointer_2();

	//TestPointer_3();
	//TestPointer_4();

	//TestReference_1();
	//TestValuePointer();

// 	Exam_MemoryLeak leak;
// 	leak.Run();

// 	Exam_VirtualMethod virtualMethod;
// 	virtualMethod.Run();


	ExamMain exam;
	exam.TestPolymorph1();

	getchar();
	return 0;
}

