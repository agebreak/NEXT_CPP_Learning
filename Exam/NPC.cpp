#include "stdafx.h"
#include "NPC.h"


CNPC::CNPC(void)
{
	printf("NPC is Create!!\n");	
}


CNPC::~CNPC(void)
{
	printf("NPC is Dead!\n");
}

void CNPC::PrintType()
{
	printf_s("My Type is CNPC...\n");
}
