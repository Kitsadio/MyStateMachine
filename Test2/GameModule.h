#pragma once
#include "StateMachine.h"

class MainModule;

class GameModule
{
public:

	void Init();
	void Deinit();

	void CheckCredit();

	StateMachine<GameModule> &GetStateMachine() { return m_MyMachine; }

	GameModule(void);
	~GameModule(void);
private:
	StateMachine<GameModule> m_MyMachine; 
};
