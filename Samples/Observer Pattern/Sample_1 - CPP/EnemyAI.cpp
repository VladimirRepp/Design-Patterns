#include "EnemyAI.h"

void EnemyAI::Update(int hp)
{
	cout << "-------------------------------" << endl;
	cout << "Log: EnemyAI called Update!" << endl;

	if(hp < 20)
		cout << "EnemyAI State: easy" << endl;
	else if (hp >= 20 && hp < 80)
		cout << "EnemyAI State: midle" << endl;
	else
		cout << "EnemyAI State: hard" << endl;
	cout << "-------------------------------" << endl;
}
