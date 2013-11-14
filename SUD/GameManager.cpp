#include "stdafx.h"
#include "GameManager.h"
#include <windows.h>

#define POWER_OFFSET 3


CGameManager::CGameManager(void)
	:m_GameState(NORMAL)
{
	m_PC = new CPC();	
}


CGameManager::~CGameManager(void)
{

	delete m_PC;
}

void CGameManager::Init()
{
	printf("[Game Start!!]\n");

	srand( (unsigned)time( NULL ) );
	CreateMobs();		
		
	// 위치 세팅
	m_PC->SetPosition(5, 5);
	m_PC->PrintPosition();
		
}

void CGameManager::Run()
{
	while(InputProc())
	{
		CheckMap();		
	}
}

void CGameManager::Release()
{
	printf("[Game Over!!]\n");
}

bool CGameManager::InputProc()
{

	// 스트링으로 제대로 입력 받기
	std::string strInput;
	getline(std::cin, strInput);

	printf("Input : %s\n", strInput.c_str());	

	// 캐릭터 이동 처리 구현
	if(strInput == "W" || strInput == "w")
	{
		m_PC->Move(DIR_UP);
	}
	else if(strInput == "A" || strInput == "a")
	{
		m_PC->Move(DIR_LEFT);
	}
	else if(strInput == "S" || strInput == "s")
	{
		m_PC->Move(DIR_DOWN);
	}
	else if(strInput == "D" || strInput == "d")
	{
		m_PC->Move(DIR_RIGHT);
	}

	m_PC->PrintPosition();

	// 종료 조건 처리
	if(strInput == "Q" || strInput == "q")
		return false;

	return true;
}

void CGameManager::CreateMobs()
{
	// 문제) 랜덤으로 맵 사이즈의 1/4 만큼의 수의 몹을 배치하라.

	char buf[32] = {0,};

	int mobCount = (MAP_SIZE * MAP_SIZE) / 4;
	while (mobCount > 0)
	{
		// 랜덤으로 배치할 위치를 결정
		int x = rand() % MAP_SIZE;
		int y = rand() % MAP_SIZE;

		MapInfo* pMapInfo = m_Map.GetMapInfo(x, y);
		
		// 몹이 없는 자리에만 배치한다 
		if(pMapInfo->pMob == nullptr)
		{
			pMapInfo->pMob = new CMob();			

			// 이름 세팅			
			sprintf_s(buf, "Mob %d", mobCount);
			pMapInfo->pMob->SetName(buf);

			--mobCount;
		}
	}

	printf_s("<< Mob Create Complete! >>\n");
}

void CGameManager::CheckMap()
{
	Position pos = m_PC->GetPosition();
	MapInfo* pMapInfo = m_Map.GetMapInfo(pos.x, pos.y);
	if(!pMapInfo)
		return;

	if(pMapInfo->pMob)
	{
		// 몹이 존재한다. 전투를 시작한다.
		m_GameState = BATTLE;
		StartBattle(pMapInfo->pMob);
	}
}

void CGameManager::StartBattle( CMob* pMob )
{
	printf_s("<<<< 몹을 만났습니다. 전투를 시작합니다! >>>\n");

	while (m_PC->IsAlive() && pMob->IsAlive())
	{
		// 플레이어 턴
		printf_s("< 플레이어가 공격 했습니다. >\n");		
		AttackResult result = (AttackResult)(rand() % ATTACK_COUNT);
		int damage = m_PC->Power() + (m_PC->Power() % POWER_OFFSET * 2) - POWER_OFFSET;
		pMob->HitCheck(result, damage);

		if(!m_PC->IsAlive())
		{
			printf_s("?????? 플레이어가 사망하였습니다... ????\n");
			break;
		}

		// 몬스터 턴
		printf_s("< 몬스터(%s)가 공격 했습니다. >\n", pMob->GetName().c_str());
		result = (AttackResult)(rand() % ATTACK_COUNT);
		damage = pMob->Power() + (m_PC->Power() % POWER_OFFSET * 2) - POWER_OFFSET;
		m_PC->HitCheck(result, damage);		

		if(!pMob->IsAlive())
		{
			printf_s("??? 몬스터(%s)를 쓰러트렸다!!\n", pMob->GetName().c_str());
			break;
		}

		Sleep(1000);
	}

	printf_s("<<<<< 전투가 종료 되었습니다 >>>\n");
	m_GameState = NORMAL;
}
