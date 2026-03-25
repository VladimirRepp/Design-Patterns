#include "IdleState.h"

void IdleState::Enter()
{
	cout << "IdleState called Enter!" << endl;
}

void IdleState::Execute()
{
	cout << "IdleState called Execute!" << endl;
}

void IdleState::Exit()
{
	cout << "IdleState called Exit!" << endl;
}