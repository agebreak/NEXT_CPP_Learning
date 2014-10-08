#include "stdafx.h"
#include "Overriding.h"
#include "Character.h"
#include "Player.h"
#include "NPC.h"
#include "Mob.h"


Overriding::Overriding()
{
}


Overriding::~Overriding()
{
}

void Overriding::Run()
{

// 	Character	dongYu;
// 	Player		yeRim;
// 	NPC			hyungJin;
// 	Mob			yeonWoo;
// 
// 	// 캐릭터들이 사망
// 	dongYu.Dead();
// 	yeRim.Dead();
// 	hyungJin.Dead();
// 	yeonWoo.Dead();


// 	Player*		yeRim = new Player();
// 	NPC*		hyungJin = new NPC();
// 	Mob*		yeonWoo = new Mob();	
// 
// 	yeRim->Dead();
// 	hyungJin->Dead();
// 	yeonWoo->Dead();	
// 
// 	std::vector<Character*> party;
// 
// 	party.push_back(yeRim);
// 	party.push_back(hyungJin);
// 	party.push_back(yeonWoo);
// 
// 
// 	for (auto character : party)
// 	{
// 		character->Dead();
// 	}

// 	std::vector<Character*> charList;
// 
// 	charList.push_back(new NPC);
// 	charList.push_back(new Mob);
// 	charList.push_back(new Player);
// 
// 	for (auto pChar : charList)
// 	{
// 		pChar->Dead();
// 	}

	Character* pMob = new Mob();
	pMob->Dead();
	

}

