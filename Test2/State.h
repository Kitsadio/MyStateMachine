#pragma once

template <typename T>
class StateMachine;

//Base class for states
template <typename T>
class State
{
public:

	State() {
		
	}

	virtual void operator()(StateMachine<T> *s) {};

	virtual void Init() {};


	virtual void Deinit() {};


	virtual void Process() {};

protected:

	friend class StateMachine<T>; 
};

