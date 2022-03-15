#include "StateEndSpin.h"

void StateEndSpin::Init()
{

}

void StateEndSpin::Process()
{
	if(m_MyMachine)
	{	

		std::cout << "End Spin: SPACE = Gamble, E = End Game\n";

		if(KEY_DOWN(VK_SPACE))
		{
			m_MyMachine->SetState("PREGAMBLE");
		}
		else if(KEY_DOWN(0x47))
		{
			m_MyMachine->SetState("ENDGAME");
		}
	}
}

void StateEndSpin::Deinit()
{
}
