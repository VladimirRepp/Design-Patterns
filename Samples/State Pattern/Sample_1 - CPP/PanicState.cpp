#include "PanicState.h"

void PanicState::Enter()
{
	cout << "[" << m_enemy->GetName() << ".PanicState] called Enter!" << endl;
}

void PanicState::Update()
{
	cout << "[" << m_enemy->GetName() << ".PanicState] called Update!" << endl;
}

void PanicState::Exit()
{
	cout << "[" << m_enemy->GetName() << ".PanicState] called Exit!" << endl;
}
