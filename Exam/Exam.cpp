// Exam.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "UtilProject.h"
#include "Character.h"


// 싱글톤 테스트
class Boo
{
	SINGLETON(Boo);

public: 
	void Test()
	{
		printf_s("이것은 싱글톤 테스트입니다. \n");
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
	

	// 파티를 만든다
	CCharacter partyMember[3];

	// 캐릭터들을 만들어, 파티에 넣는다. 
	CCharacter soeun;
	CCharacter wonHyo;
	CCharacter jinSang;

	partyMember[0] = soeun;
	partyMember[1] = wonHyo;
	partyMember[2] = jinSang;

	// HP를 세팅한다
	soeun.SetHP(777);

	// 그리고 출력
	soeun.PrintHP();
	partyMember[0].PrintHP();

	// 예상 결과는?

}

void Heal(CCharacter player)
{
	player.SetHP(999);	
}

void TestValue_4()
{
	// 건희를 만들어서, 죽기 직전의 상태로 세팅!
	CCharacter gunHee;
	gunHee.SetHP(1);

	// 살려야 한다!
	Heal(gunHee);

	gunHee.PrintHP();

}

void TestPointer_1()
{
	// 포인터를 사용한 동적 할당
	CCharacter* pPlayer = new CCharacter();
	pPlayer->SetHP(77);
	pPlayer->PrintHP();

	
	// 사용이 끝나면, 꼭 해제해 줘야 한다.
	delete pPlayer;
}

void TestPointer_2()
{
	// 포인터형 배열을 선언한다. 
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

	// 죽기 직전 간당간당
	pYeonKyu->SetHP(1);
	pYeonKyu->PrintHP();

	// 힐링~~
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

	// 포인터 복사
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
	
	/*TestValue_1();
	TestValue_1();
	TestValue_1();*/
	
	//TestValue_2();

	//TestValue_4();	
	//TestPointer_2();

	//TestPointer_3();
	//TestPointer_4();

	//TestReference_1();
	TestValuePointer();

	getchar();
	return 0;
}

