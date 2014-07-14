// RandomSelect.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <time.h>
#include <Windows.h>

std::vector<std::string> members;
std::vector<std::string> checkMembers;

void PrintMembers()
{
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

