#include "Logger.h"
#include<iostream>
#include <fstream>
#include <iomanip>

void Logger::Init()
{

	std::ofstream _sfile("StateTransitionLogs.txt");
	std::ofstream _efile("ERRORLOGS.txt");
	if(_sfile.good())
		_sfile.clear();
	if(_efile.good())
		_efile.clear();
		
}

void Logger::LogStates(const std::string &_lastState, const std::string &_currState, double time)
{
	std::ofstream TransitionLogs;
	TransitionLogs.open("StateTransitionLogs.txt", std::ios_base::app);

	if(TransitionLogs.is_open())
	{
	
		TransitionLogs << _lastState << " -> " << _currState << 
			" --------- Time in last state: " << std::fixed << std::setprecision(2) << time/1000 << "s \n";
		

		TransitionLogs.close();
	}
	else 
		std::cout << "\nUnable to open file";

}

void Logger::LogError(int _error, const std::string &_lastState)
{
	std::ofstream ERRORLOGS;
	ERRORLOGS.open("ERRORLOGS.txt", std::ios_base::app);

	if(ERRORLOGS.is_open())
	{
		if(_error == 0)
		{
			ERRORLOGS << "ATTEMPT TO GO TO WRONG TRANSITION AT STATE: " << _lastState;
		}
	}
}

Logger::Logger(void)
{
	Init();
}

Logger::~Logger(void)
{
}
