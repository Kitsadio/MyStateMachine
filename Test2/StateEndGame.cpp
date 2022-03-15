#include "StateEndGame.h"

void StateEndGame::Init()
{

}

void StateEndGame::Process()
{
	if(m_MyMachine)
	{;
		std::cout << "Ending Game: Space = Collect, Return to Idle = Enter Key\n";

		if(KEY_DOWN(VK_SPACE))
		{
			m_MyMachine->SetState("COLLECT");
		}
		else if (KEY_DOWN(VK_RETURN))
		{
			m_MyMachine->SetState("IDLE");
		}
	}
}

void StateEndGame::Deinit()
{
}
