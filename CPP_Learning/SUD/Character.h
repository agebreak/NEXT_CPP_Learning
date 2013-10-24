#pragma once

// 캐릭터 위치 구조체
struct Position
{
	int x;
	int y;
};

// 방향 열거형
enum DIRECTION
{
	DIR_UP,
	DIR_DOWN,
	DIR_LEFT,
	DIR_RIGHT,
};

class CCharacter
{
public:
	CCharacter(void);
	virtual ~CCharacter(void);

	void	 SetPosition(Position pos) {m_position = pos;}
	void	 SetPosition(int x, int y);
	Position GetPosition() {return m_position;}
	void	 PrintPosition();

	Position Move(DIRECTION dir);

protected:
	Position m_position;	
};

