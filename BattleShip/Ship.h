#pragma once

enum ShipType
{
	SHIP_NONE,
	AIRCRAFT,
	BATTLESHIP,
	CRUISER,
	DESTROYER,
};

struct Position
{
	char x;
	char y;
};

class Ship
{	
public:
	void AddPosition(Position pos);
	void AddPosition(char x, char y);

	bool HitCheck(Position pos);
	int	 GetHP() { return m_Hp; }
	bool IsDead();

	void Print();

public:
	Ship();
	~Ship();

protected:
	int			m_Hp; // length
	Position	m_Pos[5];
	std::string m_Name;
	ShipType	m_Type;
};

