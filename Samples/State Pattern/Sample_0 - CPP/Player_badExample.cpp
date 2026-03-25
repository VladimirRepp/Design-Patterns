#include "Player_badExample.h"

void Player_badExample::Update()
{
	if (m_strCurrentState == "idle")
	{
		// do some
	}
	else if(m_strCurrentState == "walk") {
		// do some
	}
	else if (m_strCurrentState == "run") {
		// do some
	}

	StateDisplay();
}

void Player_badExample::SetStrCurrentState(string new_strCurrentState)
{
	m_strCurrentState = new_strCurrentState;
}

void Player_badExample::StateDisplay()
{
	cout << "[Player State]: " << m_strCurrentState << endl;
}
