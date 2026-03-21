#include "UI.h"

void UI::Update(int hp)
{
	cout << "-------------------------------" << endl;
	cout << "Log: UI called Update!" << endl;

	if (hp < 20)
		cout << "UI Message: Attention! Replenish your health immediately." << endl;
	cout << "-------------------------------" << endl;
}
