#include "stdafx.h"
#include "PrintConsole.h"


CPrintConsole::CPrintConsole(void)
{
	AllocConsole();
	FILE* pFile;
	freopen_s(&pFile, "CONOUT$", "wt", stdout);
}


CPrintConsole::~CPrintConsole(void)
{
	FreeConsole();
}
