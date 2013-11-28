#include "stdafx.h"
#include "GameMap.h"


CGameMap::CGameMap(void)
{
		
}


CGameMap::~CGameMap(void)
{
	for(int i = 0; i < MAP_SIZE; ++i)
	{
		for(int j = 0; j < MAP_SIZE; ++j)
		{
			delete m_MapInfo[i][j].pMob;
			m_MapInfo[i][j].pMob = nullptr;
		}
	}
}

MapInfo* CGameMap::GetMapInfo( int x, int y )
{
	if(x < 0 || x >= MAP_SIZE || y < 0 || y >= MAP_SIZE)
		return nullptr;

	return &m_MapInfo[x][y];
}
