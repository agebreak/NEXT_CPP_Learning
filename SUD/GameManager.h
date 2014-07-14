#pragma once
#include "PC.h"
#include "GameMap.h"

// ������ ����
enum GameState
{
	NORMAL,
	BATTLE,
};

enum BattleResult
{
	BATTLE_WIN,
	BATTLE_LOSE,
	BATTLE_NONE,
};


// ������ ��� ����Ѵ�
class CGameManager
{
public:
	CGameManager(void);
	~CGameManager(void);

	void Init();		// �ʱ�ȭ
	void Run();			// ����
	void Release();		// ����ó��

protected:
	bool InputProc();	// Ű���� �Է� ó��
	void CreateMobs();	// ���� ��ġ�Ѵ�
	void CheckMap();	
	BattleResult StartBattle(CMob* pMob);

protected:
	CGameMap	m_Map;
	CPC*		m_PC;		// �÷��̾� ĳ����
	GameState	m_GameState;
};

