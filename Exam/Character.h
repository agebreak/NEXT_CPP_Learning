#pragma once
class CCharacter
{	
public:
	CCharacter(void); // �⺻ ������
	CCharacter(const CCharacter& src); // ���� ������
	virtual ~CCharacter(void);

	void SetHP(int hp) {m_HP = hp;}
	int	 GetHP() {return m_HP;}
	void PrintHP();

	virtual void PrintType();

	void Attack(CCharacter* pTarget);

	void SayMyName(); 

protected:
	int m_HP;		
	std::string m_Name; 
};

