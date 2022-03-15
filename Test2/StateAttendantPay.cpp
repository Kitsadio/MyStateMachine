#include "StateAttendantPay.h"
#include "MainModule.h"
#include "GameModule.h"

void StateAttendantPay::Init()
{

}

void StateAttendantPay::Process()
{
	if(m_MyMachine)
	{
		std::cout << "Money Added! \n";
		m_MyMachine->SetState("RUN");
	}
}

void StateAttendantPay::Deinit()
{
}
