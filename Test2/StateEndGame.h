#pragma once
#include "State.h"
#include "StateMachine.h"

ADD_STATE(StateEndGame, GameModule)

//class StateEndGame : public State
//{
//public:
//	StateEndGame(){};
//
//	void operator()(StateMachine *s) {
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
//	StateMachine *m_MyMachine;
//};
//
