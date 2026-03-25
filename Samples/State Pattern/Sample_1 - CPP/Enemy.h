#pragma once
#include <iostream>
#include <string>

#include "State.h"

using namespace std;

class State;
class Enemy
{
private:
	string m_name;
	State* m_currentState = nullptr;

public:
	Enemy(string name) { m_name = name; }
	Enemy(string name, State* state) : m_name(name) { SetState(state); }

	~Enemy() { delete m_currentState; }

	string GetName() { return m_name; }

	void Update();
	void SetState(State*);
};

