#pragma once
class InlineFunc
{
public:
	InlineFunc();
	~InlineFunc(); 
	
	void SetHP(int hp) { m_HP = hp; }
	

protected:
	int m_HP;
};

