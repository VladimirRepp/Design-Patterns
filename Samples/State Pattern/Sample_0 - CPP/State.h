#pragma once

#include <iostream>
using namespace std;

class State
{
protected:
	string m_name;

public:
	virtual string GetName() { return m_name; }

	virtual void Enter() = 0;
	virtual void Execute() = 0;
	virtual void Exit() = 0;

	virtual ~State() = default;
};

