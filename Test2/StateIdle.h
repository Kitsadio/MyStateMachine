#pragma once
#include "State.h"
#include "StateMachine.h"

ADD_STATE(StateIdle, GameModule)

//class GameModule;
//
//class StateIdle: public State<GameModule>
//{
//public:
//	StateIdle() {}
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
