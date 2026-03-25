#include "Player.h"

Player::~Player()
{
	delete m_currentState;
}

void Player::Update() {
	if (m_currentState)
		m_currentState->Execute();
	else
		cout << "[Error.Player.Update]: State not set!";
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
