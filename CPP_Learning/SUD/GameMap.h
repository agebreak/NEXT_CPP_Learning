#pragma once

// 타일 크기
#define MAP_SIZE 10

// 맵 타일 정보를 가진 구조체
struct MapInfo
{

};

// 게임의 맵을 관리한다.
class CGameMap
{
public:
	CGameMap(void);
	~CGameMap(void);

protected:
	MapInfo m_MapInfo[MAP_SIZE][MAP_SIZE];
};

