// RandomSelect.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
// 				return "����!";
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
// 			// �� ����
// 			saveFile(playerName);
// 		}
// 	}
// 	sizeof(Rule);
// 
// 	// hp�� �ִ�. Map�� ������. 
// 
// 	// Map
// 	// string ownerName; (o)
// 	// Player ownder; x
// 	// Map has Player.name;

	system("cls");

	// �ܼ�â�� �÷��� �ֱ����� �ڵ��� �����´�.
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
	
	// ���� ����Ʈ�� ����
	checkMembers.push_back(members[randPickIdx]);

	// ������ �����͸� �� ������� ���� (�ߺ����� ����)
	members.erase(members.begin() + randPickIdx);

}

int _tmain(int argc, _TCHAR* argv[])
{
	members.push_back("������");
	members.push_back("�幮��");
	members.push_back("������");
	members.push_back("�����");
	members.push_back("�輺��");
	members.push_back("�����");
	members.push_back("�迬��");
	members.push_back("�迵��");
	members.push_back("������");
	members.push_back("�ڼ���");
	members.push_back("������");
	members.push_back("�ո���");
	members.push_back("��  ��");
	members.push_back("������");
	members.push_back("�����");
	members.push_back("�ӿ���");
	members.push_back("������");

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

