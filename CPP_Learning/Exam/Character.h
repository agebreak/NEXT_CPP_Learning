#pragma once
class CCharacter
{
public:
	CCharacter(void);
	~CCharacter(void);

	void SetHP(int hp) {m_HP = hp;}
	int	 GetHP() {return m_HP;}

protected:
	int m_HP;
};

