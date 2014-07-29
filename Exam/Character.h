#pragma once
class CCharacter
{
public:
	CCharacter(void); // 기본 생성자
	CCharacter(const CCharacter& src); // 복사 생성자
	virtual ~CCharacter(void);

	void SetHP(int hp) {m_HP = hp;}
	int	 GetHP() {return m_HP;}
	void PrintHP();

	virtual void PrintType();

protected:
	int m_HP;	
};

