#pragma once
class CCharacter
{
public:
	CCharacter(void); // �⺻ ������
	CCharacter(const CCharacter& src); // ���� ������
	~CCharacter(void);

	void SetHP(int hp) {m_HP = hp;}
	int	 GetHP() {return m_HP;}
	void PrintHP();

protected:
	int m_HP;
};
