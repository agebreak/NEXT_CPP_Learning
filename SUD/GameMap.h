#pragma once
#include "Mob.h"

// Ÿ�� ũ��
#define MAP_SIZE 10

enum MapType
{

};

// �� Ÿ�� ������ ���� ����ü
struct MapInfo
{
	CMob* pMob;
};

// ������ ���� �����Ѵ�.
class CGameMap
{
public:
	CGameMap(void);
	~CGameMap(void);

	MapInfo* GetMapInfo(int x, int y);

protected:
	MapInfo m_MapInfo[MAP_SIZE][MAP_SIZE];
};

