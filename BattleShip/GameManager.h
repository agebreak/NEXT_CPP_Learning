#pragma once
#include "Player.h"

class GameManager
{
public:
	GameManager();
	~GameManager();

	void Init();
	void Start();

protected:
	// �켱 1�ܰ�. 
	// ����Ŀ�� ������� �����ϰ�, ������ ���ݸ�, ������ ��Ʈüũ�� �Ѵ�.
	Player m_Attacker;
	Player m_Defender;
};

