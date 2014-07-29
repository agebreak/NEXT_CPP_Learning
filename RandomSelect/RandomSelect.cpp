// RandomSelect.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <time.h>
#include <Windows.h>
#include <algorithm>
#include <random>

std::vector<std::string> members;
std::vector<std::string> checkMembers;

void PrintMembers()
{

// 
// 	// Player
// 	Player
// 	{
// 	private:
// 		string trueName;
// 		string nickName;
// 		string age;
// 		bool male;
// 	public:
// 		string GetName(bool isMale)
// 		{
// 			if (isMale)
// 			{
// 				return "꺼져!";
// 			}
// 			else
// 			{
// 				return trueName;
// 			}
// 			return trueName;
// 		}
// 	}
// 
// 	AIPlayer
// 	{
// 
// 	}
// 
// 	Rule
// 	{
// 		//AIPlayer player;
// 		string playerName;
// 
// 		void SetPlayerName(string name)
// 		{
// 			playerName = name;
// 		}
// 
// 		//player.name();
// 		player.GetName();
// 
// 		void Save()
// 		{
// // 			saveFile(player.trueName);
// // 			saveFile(player.nickName);
// // 			saveFIle(player.age);
// // 			saveFile(player.male);
// 			// 이 씨발
// 			saveFile(playerName);
// 		}
// 	}
// 	sizeof(Rule);
// 
// 	// hp가 있다. Map을 가지다. 
// 
// 	// Map
// 	// string ownerName; (o)
// 	// Player ownder; x
// 	// Map has Player.name;

	system("cls");

	// 콘솔창에 컬러를 넣기위해 핸들을 가져온다.
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	std::string member;
	size_t total = members.size() + checkMembers.size();
	for (unsigned int i = 0; i < total; ++i)
	{
		if ((i % 4) == 0)
		{
			printf_s("\n");
		}

		if (checkMembers.size() > i)
		{
			member = checkMembers[i];
			SetConsoleTextAttribute(hConsole, 10);
		}
		else
		{
			member = members[rand() % members.size()];
			SetConsoleTextAttribute(hConsole, 11);
		}

		printf_s("%s\t", member.c_str());

		
	}
}

void PickRandomMember()
{
	int randPickIdx = rand() % members.size();
	
	// 선택 리스트에 삽입
	checkMembers.push_back(members[randPickIdx]);

	// 삽인한 데이터를 총 멤버에서 제거 (중복선택 방지)
	members.erase(members.begin() + randPickIdx);

}

int _tmain(int argc, _TCHAR* argv[])
{
	members.push_back("양지웅");
	members.push_back("장문익");
	members.push_back("고형진");
	members.push_back("김덕성");
	members.push_back("김성연");
	members.push_back("김승현");
	members.push_back("김연우");
	members.push_back("김영하");
	members.push_back("남현욱");
	members.push_back("박수빈");
	members.push_back("서동유");
	members.push_back("손명준");
	members.push_back("송  경");
	members.push_back("송지훈");
	members.push_back("우재우");
	members.push_back("임예림");
	members.push_back("정세빈");

	srand((unsigned int)time(NULL));

	int checkLoop = 100;
	int currLoop = 0;

	while (!members.empty())
	{
		++currLoop;

		if (currLoop > checkLoop)
		{
			currLoop = 0;
			PickRandomMember();
		}

		PrintMembers();
	}

	getchar();
	return 0;
}

