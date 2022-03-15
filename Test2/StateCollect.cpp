#include "StateCollect.h"


void StateCollect::Init()
{
	
}

void StateCollect::Process()
{
	if(m_MyMachine)
	{
		std::cout << "Paying wins!\n";

		m_MyMachine->SetState("IDLE");
	}
}

void StateCollect::Deinit()
{
}
