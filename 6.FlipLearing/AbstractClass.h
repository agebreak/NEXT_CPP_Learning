#pragma once

/// �߻� Ŭ���� 
class AbstractClass
{
public:
	virtual void Run() = 0;
	virtual bool IsExist(int id) = 0;
	
protected:
	virtual void Reset() = 0;

};

