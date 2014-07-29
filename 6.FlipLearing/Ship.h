#pragma once

class Ship
{
public:
	Ship();
	~Ship();
	
	int  GetHP() { return m_HP; }
	void Test();

protected:
	void SetHP(int hp) { m_HP = hp; }

protected:
	int m_HP;
};

