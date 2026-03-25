#include <iostream>

#include "Player_badExample.h"
#include "Player.h"
#include "IdleState.h"
#include "WalkState.h"
#include "RunState.h"

// Проблема: объект имеет несколько состояний 
// Задача: состояния игрока - покой, идти, бегать 

string GetRandStrState() {
	int randValue = rand() % 3;

	if (randValue == 0)
		return "idle";

	if (randValue == 1)
		return "walk";

	return "run";
}

State* GetRandState() {
	int randValue = rand() % 3;

	if (randValue == 0)
		return new IdleState();

	if (randValue == 1)
		return new WalkState();

	return new RunState();
}

int main()
{
	srand(time(0));

	// Демонстрация плохо решения 
	Player_badExample* player0 = new Player_badExample();

	// Имитация жизненного цикла игры
	/*for (int i = 0; i < 10; i++) {
		cout << "Iteration #" << i + 1 << endl;

		player0->SetStrCurrentState(GetRandStrState());
		player0->Update();

		cout << endl;
	}*/

	// Демонстрация решения с паттерном состояние 
	Player* player1 = new Player();

	// Имитация жизненного цикла игры
	for (int i = 0; i < 10; i++) {
		cout << "Iteration #" << i + 1 << endl;

		player1->SetState(GetRandState());
		player1->Update();

		cout << endl;
	}

	// Пример вывода #1: 
	// Iteration #1
	// [Player State]: walk

	// Пример вывода #2:
	// Iteration #1
	// IdleState called Enter! - начинается со входа, так как предыдущего для выхода нет
	// IdleState called Execute!

	// Iteration #2
	// IdleState called Exit!
	// WalkState called Enter!
	// WalkState called Execute!

	delete player0;
	delete player1;
}