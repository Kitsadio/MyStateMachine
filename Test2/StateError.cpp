#include "StateError.h"

void StateError::Init()
{
}

void StateError::Process()
{
	if(m_MyMachine)
	{
		std::cout << "SHUTTING DOWN";
		m_MyMachine->SetExit(true);
	}
}

void StateError::Deinit()
{
}

