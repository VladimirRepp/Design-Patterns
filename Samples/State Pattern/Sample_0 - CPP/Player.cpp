#include "Player.h"

Player::~Player()
{
	delete m_currentState;
}

void Player::Update() {
	m_currentState->Execute();
}

void Player::SetState(State* new_state)
{
	if(m_currentState)
		m_currentState->Exit();

	delete m_currentState;

	m_currentState = new_state;
	m_currentState->Enter();
}

void Player::StateDisplay()
{
	cout << "[Player State]: " << m_currentState->GetName() << endl;
}
