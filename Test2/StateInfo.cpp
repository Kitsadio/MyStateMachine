#include "StateInfo.h"


void StateInfo::Init()
{
	
}

void StateInfo::Process()
{
	if(m_MyMachine)
	{
		std::cout << "INFOSCREEN:  Return to Idle = Enter Key";

		if(KEY_DOWN(VK_RETURN))
		{
			m_MyMachine->SetState("IDLE");
		}
	}
}


void StateInfo::Deinit()
{
}
