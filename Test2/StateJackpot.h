#pragma once
#include "State.h"
#include "StateMachine.h"

ADD_STATE(StateJackpot, GameModule)

//class GameModule;
//
//class StateJackpot : public State<GameModule>
//{
//public:
//	StateJackpot(){};
//
//	void operator()(StateMachine<GameModule> *s) {
//		m_MyMachine = s;
//		if(m_MyMachine->DoInit())
//		{
//			Init();
//		}
//		Process();
//	};
//
//	void Init();
//	void Deinit();
//	void Process();
//
//private:
//	StateMachine<GameModule> *m_MyMachine;
//};
//
