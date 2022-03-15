#include "State.h"
#include "MainModule.h"


int main()
{
	MainModule* mainModule = new MainModule;

	mainModule->Init();
	mainModule->Deinit();

	delete mainModule;

	return 0;
}

