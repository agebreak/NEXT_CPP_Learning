

#include "stdafx.h"
#include <string>
#include <iostream>

namespace Next
{
	std::string hyunWook = "�Ǳ��� ����";
	
	void Hello()
	{
		std::cout << hyunWook << std::endl;
	}
}

namespace DongNe
{
	std::string hyunWook = "������ ����";

	void Hello()
	{
		std::cout << hyunWook << std::endl;
	}	
}



int abs(int x)
{
	return x;
}

// int _tmain(int argc, _TCHAR* argv[])
// {
// 	
// 	//Hello(); // �̰� �ȵ�. 
// 
// 	
// 
// 	Next::Hello();
// 	DongNe::Hello();
// 
// 	std::abs(3); // std ���� �����°�
// 	abs(5); // �̰� �츮�߿� ���� ����Ŵ�!!! 
// 
// 	getchar();
// 	return 0;
// }

