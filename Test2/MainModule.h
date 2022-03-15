#pragma once
#include "StateMachine.h"

template <typename T>
class StateMachine;

class Time;
class GameModule;

class MainModule
{
public:
	void Init();
	void GameControl();
	void Deinit();


	GameModule &GetGameModule() { return *m_GameModule; }
	StateMachine<MainModule> &GetStateMachine() { return m_MyMachine; }

	void SetError(bool _error) { m_error =_error;};
	bool GetError() { return m_error; };

	MainModule();
	~MainModule();
private:
	GameModule *m_GameModule;
	StateMachine<MainModule> m_MyMachine;
	Time *m_Time;
	bool m_error;
	bool m_pause; 
};
