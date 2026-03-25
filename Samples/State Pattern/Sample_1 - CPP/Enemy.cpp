#include "Enemy.h"

void Enemy::Update()
{
	if (m_currentState)
		m_currentState->Update();
	else
		cout << "[Error.Enemy.Update]: State not set!";
}

void Enemy::SetState(State* newState)
{
	if (m_currentState)
		m_currentState->Exit();

	delete m_currentState;

	m_currentState = newState;

	m_currentState->SetEnemy(this);
	m_currentState->Enter();
}
