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


	Player		yeRim;
	NPC			hyungJin;
	Mob			yeonWoo;	
	
	Character party[3];
	party[0] = yeRim;
	party[1] = hyungJin;
	party[2] = yeonWoo;
	// 자식 클래스이기 때문에 가능.

	for (Character charac : party)
	{
		charac.Dead();
	}	

}
