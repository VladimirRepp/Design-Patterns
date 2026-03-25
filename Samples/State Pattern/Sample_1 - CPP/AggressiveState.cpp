#include "AggressiveState.h"

void AggressiveState::Enter()
{
	cout << "[" << m_enemy->GetName() << ".AggressiveState] called Enter!" << endl;
}

void AggressiveState::Update()
{
	cout << "[" << m_enemy->GetName() << ".AggressiveState] called Update!" << endl;
}

void AggressiveState::Exit()
{
	cout << "[" << m_enemy->GetName() << ".AggressiveState] called Exit!" << endl;
}
