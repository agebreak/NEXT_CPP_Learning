#pragma once
#include "Mob.h"

// 타일 크기
#define MAP_SIZE 10

enum MapType
{

};

// 맵 타일 정보를 가진 구조체
struct MapInfo
{
	CMob* pMob;
};

// 게임의 맵을 관리한다.
class CGameMap
{
public:
	CGameMap(void);
	~CGameMap(void);

	MapInfo* GetMapInfo(int x, int y);

protected:
	MapInfo m_MapInfo[MAP_SIZE][MAP_SIZE];
};

