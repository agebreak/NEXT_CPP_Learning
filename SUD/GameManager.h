#pragma once
#include "PC.h"

// 게임의 제어를 담당한다
class CGameManager
{
public:
	CGameManager(void);
	~CGameManager(void);

	void Init();		// 초기화
	void Run();			// 실행
	void Release();		// 종료처리

protected:
	bool InputProc();	// 키보드 입력 처리

protected:
	CPC*	m_PC;		// 플레이어 캐릭터
};

