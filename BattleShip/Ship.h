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
	Ship();
	~Ship();

public:
	void AddPosition(Position pos);
	bool HitCheck(Position pos);
	int GetHP() { return m_Hp; }
	bool IsDead();

	void Print() {};

protected:
	int m_Hp; // length
	Position m_Pos[5];
	std::string m_Name;
	ShipType m_Type;
};

