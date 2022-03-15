#include "StateJackpot.h"


void StateJackpot::Init()
{
	
}

void StateJackpot::Process()
{
	if(m_MyMachine)
	{
		std::cout << "Jackpot!\n";

		m_MyMachine->SetState("ENDGAME");
	}
}

void StateJackpot::Deinit()
{
}