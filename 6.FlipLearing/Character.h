#pragma once

class Character
{
public:
	Character();
	~Character();	


	std::string Name() const { return m_Name; }
	void Name(std::string val) { m_Name = val; }

	void SetLevel(int level);
	int  GetLevel() { return m_Level; }

	// ĳ���Ͱ� ���.
	virtual void Dead() = 0;

protected:
	std::string m_Name;	
	int m_Level = 0;
	
};

