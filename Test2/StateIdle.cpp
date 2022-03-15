#include "StateIdle.h"
#include "MainModule.h"
#include "GameModule.h"

void StateIdle::Init()
{

}

void StateIdle::Process()
{
	if(m_MyMachine)
	{
		std::cout << "IDLE: S = SPIN, W = SPINWAIT C = COLLECT I = INFO\n";

		if(KEY_DOWN(0x53))
		{
			m_MyMachine->SetState("SPINNING");
		}
		else if(KEY_DOWN(0x57))
		{
			m_MyMachine->SetState("SPINWAIT");
		}
		else if(KEY_DOWN(0x43))
		{
			m_MyMachine->SetState("COLLECT");
		}
		else if(KEY_DOWN(0x49))
		{
			m_MyMachine->SetState("INFOSCREEN");
		}
	}
}

void StateIdle::Deinit()
{
}