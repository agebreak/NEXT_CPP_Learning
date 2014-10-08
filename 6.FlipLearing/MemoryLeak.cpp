#include "stdafx.h"
#include "MemoryLeak.h"
#include "Mob.h"


MemoryLeak::MemoryLeak()
{
}


MemoryLeak::~MemoryLeak()
{
}

void MemoryLeak::Test()
{
	Mob* pYeonWoo = new Mob();	
	Mob* pYerim = new Mob();

	
	delete pYeonWoo;
	delete pYerim;
	

	// 어떻게 될까?	

}
