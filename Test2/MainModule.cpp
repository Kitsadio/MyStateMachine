#include "MainModule.h"
#include "GameModule.h"
#include "StateError.h"
#include "StatePause.h"
#include "StateRun.h"
#include "StateTicket.h"
#include "StateAttendantPay.h"

void MainModule::Init()
{
	//Initialize
	m_GameModule = new GameModule;
	m_GameModule->Init();

	m_error = false;
	m_pause = false;

	States states;

	states["ERROR"] = [this](){ StateError()(&m_MyMachine); };
	states["PAUSE"] = [this](){ StatePause()(&m_MyMachine); };
	states["RUN"] = [this](){ StateRun()(&m_MyMachine); };
	states["TICKET"] = [this](){ StateTicket()(&m_MyMachine); };
	states["ATTENDANT"] = [this](){ StateAttendantPay()(&m_MyMachine); };
	
	m_MyMachine.Init("RUN", states, this);

	GameControl();
}

//Controls the upper level state machine for changing between RUN/ERROR/PAUSE.

void MainModule::GameControl()
{ 
	while(!m_MyMachine.GetExit())
	{
		if(&m_MyMachine)
		{
			m_MyMachine.ProcessMainGame(); //Function to get the current state to see if it has changed.
		}
	}
}

void MainModule::Deinit()
{
	delete m_GameModule;
}

MainModule::MainModule()
{
}

MainModule::~MainModule()
{
}