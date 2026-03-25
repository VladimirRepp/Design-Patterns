#pragma once
#include "State.h"

// Применяем паттерн состояние
class Player
{
private:
	State* m_currentState;
	
public:
	~Player();

	void Update();
	void SetState(State*);

	void StateDisplay();
};

