#include "CalmState.h"

void CalmState::Enter()
{
	cout << "[" << m_enemy->GetName() << ".CalmState] called Enter!" << endl;
}

void CalmState::Update()
{
	cout << "[" << m_enemy->GetName() << ".CalmState] called Update!" << endl;
}

void CalmState::Exit()
{
	cout << "[" << m_enemy->GetName() << ".CalmState] called Exit!" << endl;
}
