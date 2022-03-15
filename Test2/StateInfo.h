#pragma once
#include "StateMachine.h"
#include "State.h"

ADD_STATE(StateInfo, GameModule)

//class MainModule;
//
//class StateInfo: public State<GameModule>
//{
//public:
//	StateInfo() {};
//
//	void operator()(StateMachine<GameModule> *s) {
//		m_MyMachine = s;
//		if(m_MyMachine->DoInit())
//		{
//			Init();
//		}
//
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
