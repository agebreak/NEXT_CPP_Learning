#include "stdafx.h"
#include "GameManager.h"


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
		
	// ��ġ ����
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

	// ��Ʈ������ ����� �Է� �ޱ�
	std::string strInput;
	getline(std::cin, strInput);

	printf("Input : %s\n", strInput.c_str());	

	// ĳ���� �̵� ó�� ����
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

	// ���� ���� ó��
	if(strInput == "Q" || strInput == "q")
		return false;

	return true;
}

void CGameManager::CreateMobs()
{
	// ����) �������� �� �������� 1/4 ��ŭ�� ���� ���� ��ġ�϶�.

	char buf[32] = {0,};

	int mobCount = (MAP_SIZE * MAP_SIZE) / 4;
	while (mobCount > 0)
	{
		// �������� ��ġ�� ��ġ�� ����
		int x = rand() % MAP_SIZE;
		int y = rand() % MAP_SIZE;

		MapInfo* pMapInfo = m_Map.GetMapInfo(x, y);
		
		// ���� ���� �ڸ����� ��ġ�Ѵ� 
		if(pMapInfo->pMob == nullptr)
		{
			pMapInfo->pMob = new CMob();			

			// �̸� ����			
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
		// ���� �����Ѵ�. ������ �����Ѵ�.
		m_GameState = BATTLE;
		BattleResult result = StartBattle(pMapInfo->pMob);
		if(result == BATTLE_WIN)
		{
			delete pMapInfo->pMob;
			pMapInfo->pMob = nullptr;
		}
	}
}

BattleResult CGameManager::StartBattle(CMob* pMob)
{
	if(!pMob)
		return BATTLE_NONE;

	printf_s("<<<< ���� �������ϴ�. ������ �����մϴ�! >>>\n");

	BattleResult battleResult;

	while (m_PC->IsAlive() && pMob->IsAlive())
	{
		// �÷��̾� ��
		printf_s("< �÷��̾ ���� �߽��ϴ�. >\n");		
		AttackResult result = (AttackResult)(rand() % ATTACK_COUNT);
		int damage = m_PC->Power() + (m_PC->Power() % POWER_OFFSET * 2) - POWER_OFFSET;
		pMob->HitCheck(result, damage);

		if(!pMob->IsAlive())
		{
			printf_s("??? ����(%s)�� ����Ʈ�ȴ�!!\n", pMob->GetName().c_str());
			battleResult = BATTLE_WIN;			
			break;
		}

		// ���� ��
		printf_s("< ����(%s)�� ���� �߽��ϴ�. >\n", pMob->GetName().c_str());
		result = (AttackResult)(rand() % ATTACK_COUNT);
		damage = pMob->Power() + (pMob->Power() % POWER_OFFSET * 2) - POWER_OFFSET;
		m_PC->HitCheck(result, damage);		

		if(!m_PC->IsAlive())
		{
			printf_s("?????? �÷��̾ ����Ͽ����ϴ�... ????\n");
			battleResult = BATTLE_LOSE;
			break;
		}

		Sleep(1000);
	}

	printf_s("<<<<< ������ ���� �Ǿ����ϴ� >>>\n");
	m_GameState = NORMAL;

	return battleResult;
}
