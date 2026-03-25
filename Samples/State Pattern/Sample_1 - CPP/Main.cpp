#include <iostream>

#include "Enemy.h"
#include "CalmState.h"
#include "AggressiveState.h"
#include "PanicState.h"

// Проблема:
// Поведение врага зависит от состояния (Спокойный, Агрессивный, Паника). 
// If-ы расползаются по коду.

// Идея:
// Вынести поведение в отдельные классы состояний. 
// Объект делегирует текущему состоянию.
// Т.е. состояние знает об объекте взаимодействия.

State* GetRandState() {
	int randValue = rand() % 10;

	if (randValue < 3)
		return new CalmState();

	if (randValue >= 3 && randValue <= 7)
		return new AggressiveState();

	return new PanicState();
}

int main()
{
	srand(time(0));

	Enemy* enemy_0 = new Enemy("enemy_0");
	Enemy* enemy_1 = new Enemy("enemy_1", new CalmState());

	enemy_0->SetState(GetRandState());

	cout << endl;

	// Имитация игрового цикла
	for (int i = 0; i < 5; i++) {
		cout << "Iteration #" << i + 1 << endl;

		enemy_0->Update();
		enemy_1->Update();

		enemy_0->SetState(GetRandState());
		enemy_1->SetState(GetRandState());

		cout << endl;
	}

	delete enemy_0;
	delete enemy_1;

	// Пример вывода: 
	// [enemy_1.CalmState] called Enter!
	// [enemy_0.AggressiveState] called Enter!
	//
	// Iteration #1
	// [enemy_0.AggressiveState] called Update!
	// [enemy_1.CalmState] called Update!
	// [enemy_0.AggressiveState] called Exit!
	// [enemy_0.PanicState] called Enter!
	// [enemy_1.CalmState] called Exit!
	// [enemy_1.CalmState] called Enter!
	//
	// Iteration #2
	// [enemy_0.PanicState] called Update!
	// [enemy_1.CalmState] called Update!
	// [enemy_0.PanicState] called Exit!
	// [enemy_0.PanicState] called Enter!
	// [enemy_1.CalmState] called Exit!
	// [enemy_1.AggressiveState] called Enter!
}