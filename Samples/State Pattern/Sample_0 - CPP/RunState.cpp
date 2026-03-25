#include "RunState.h"

void RunState::Enter()
{
	cout << "RunState called Enter!" << endl;
}

void RunState::Execute()
{
	cout << "RunState called Execute!" << endl;
}

void RunState::Exit()
{
	cout << "RunState called Exit!" << endl;
}
