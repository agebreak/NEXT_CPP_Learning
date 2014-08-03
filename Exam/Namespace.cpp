

#include "stdafx.h"
#include <string>
#include <iostream>

namespace Next
{
	std::string hyunWook = "판교의 현욱";
	
	void Hello()
	{
		std::cout << hyunWook << std::endl;
	}
}

namespace DongNe
{
	std::string hyunWook = "동네의 현욱";

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
// 	//Hello(); // 이건 안됨. 
// 
// 	
// 
// 	Next::Hello();
// 	DongNe::Hello();
// 
// 	std::abs(3); // std 에서 가져온것
// 	abs(5); // 이건 우리중에 누가 만든거다!!! 
// 
// 	getchar();
// 	return 0;
// }

