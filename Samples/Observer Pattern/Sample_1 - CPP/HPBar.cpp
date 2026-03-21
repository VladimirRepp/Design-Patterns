#include "HPBar.h"

void HPBar::Update(int hp)
{
	cout << "-------------------------------" << endl;
	cout << "Log: HPBar called Update!" << endl;

	if (hp >= 0 && hp <= 100)
		cout << "HPBar changed!" << endl;
	cout << "-------------------------------" << endl;
}
