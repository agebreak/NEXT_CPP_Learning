#include "stdafx.h"
#include "ExamMain.h"
#include "Character.h"
#include "Mob.h"
#include "Elf.h"
#include "DarkElf.h"
#include "NPC.h"


ExamMain::ExamMain()
{
}


ExamMain::~ExamMain()
{
}


void ExamMain::TestPolymorph1()
{
// 	CCharacter character;
// 
// 	CMob* pMob = new CMob();
// 	CNPC* pNPC = new CNPC();
// 	Elf* pElf = new Elf();
// 	DarkElf* pDarkElf = new DarkElf();
// 
// 	character.Attack(pMob);
// 	character.Attack(pNPC);
// 	character.Attack(pElf);
// 	character.Attack(pDarkElf);

// 	std::vector<CCharacter> characters;
// 
// 	Elf newElf;
// 	DarkElf newDarkElf;	
// 
// 	// 객체가 복사(Copy) 된다.
// 	characters.push_back(newElf);
// 	characters.push_back(newDarkElf);
// 
// 	// C++ 11 Range based for
// 	// 객체가 복사(Copy) 된다.
// 	for (auto charac : characters)	
// 	{		
// 		charac.SayMyName();
// 	}

	std::vector<CCharacter*> characters;

	Elf* pElf = new Elf();
	DarkElf* pDarkElf = new DarkElf();
	
	characters.push_back(pElf);
	characters.push_back(pDarkElf);

	// C++ 11 Range based for
	// 객체가 복사(Copy) 된다.
	for (auto charac : characters)
	{
		charac->SayMyName();
	}

	for (auto charac : characters)
	{
		delete charac;
	}
	characters.clear();
}
