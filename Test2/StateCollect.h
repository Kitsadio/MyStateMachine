#pragma once
#include "State.h"
#include "StateMachine.h"

ADD_STATE(StateCollect, GameModule)

//class StateCollect : public State
//{
//public:
//	StateCollect(){};
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
//private:
//	StateMachine* m_MyMachine;
//};

