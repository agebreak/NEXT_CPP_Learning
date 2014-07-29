#include "stdafx.h"
#include "Mob.h"
#include "Minion.h"


CMob::CMob(void)
{
	printf("Mob is Create!!\n");

}


CMob::~CMob(void)
{
	printf("MOB is Dead!!\n");
}

void CMob::PrintType()
{
	printf_s("My Type is CMob...\n");
}
