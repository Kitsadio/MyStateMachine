#include "GameModule.h"
#include "MainModule.h"
#include "StateIdle.h"
#include "StateEndGame.h"
#include "StateSpinWait.h"
#include "StateSpinning.h"
#include "StateEndSpin.h"
#include "StateJackpot.h"
#include "StatePreGamble.h"
#include "StateCollect.h"
#include "StateInfo.h"

//Controls the sub state machine for changing between the states
void GameModule::Init()
{
	States states;

	states["IDLE"] = [this](){ StateIdle()(&m_MyMachine); };
	states["ENDGAME"] = [this](){ StateEndGame()(&m_MyMachine); };
	states["SPINWAIT"] = [this](){ StateSpinWait()(&m_MyMachine); };
	states["SPINNING"] = [this](){ StateSpinning()(&m_MyMachine); };
	states["ENDSPIN"] = [this](){ StateEndSpin()(&m_MyMachine); };
	states["PREGAMBLE"] = [this](){ StatePreGamble()(&m_MyMachine); };
	states["JACKPOT"] = [this](){ StateJackpot()(&m_MyMachine); };
	states["COLLECT"] = [this](){ StateCollect()(&m_MyMachine); };
	states["INFO"] = [this](){ StateInfo()(&m_MyMachine); };


	m_MyMachine.Init("IDLE", states, this);
}

void GameModule::Deinit()
{
}

GameModule::GameModule(void)
{
}

GameModule::~GameModule(void)
{
}
