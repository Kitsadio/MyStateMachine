#pragma once
//#include<iostream>
//#include <fstream>
//#include <iomanip>
#include <string>

class Logger
{
public:
	void Init(void);
	void LogStates(const std::string&, const std::string&, double);
	void LogError(int, const std::string &);

	Logger(void);
	~Logger(void);
};
