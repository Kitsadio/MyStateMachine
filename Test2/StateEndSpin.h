#pragma once
#include "State.h"
#include "StateMachine.h"

ADD_STATE(StateEndSpin, GameModule)

//class GameModule;
//
//class StateEndSpin : public State<GameModule>
//{
//public:
//	StateEndSpin(){};
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

