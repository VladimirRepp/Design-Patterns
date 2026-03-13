#include "Enemy.h"
#include <iostream>

void Enemy::SetMoveStrategy(IMove* moveStrategy)
{
	if (this->moveStrategy != nullptr)
		delete this->moveStrategy;

	this->moveStrategy = moveStrategy;
}

void Enemy::Move()
{
	if (moveStrategy == nullptr) {
		cout << "MoveStrategy is null!" << endl;
		return;
	}

	moveStrategy->Move();
}

void Enemy::Move(string type)
{
	// Проблема: много вариантов поведения
	// Решение: поведение вынести в отдельные классы
	if (type == "Walk")
		cout << "Enemy walking!" << endl;

	if (type == "Run")
		cout << "Enemy running!" << endl;

	if (type == "Fly")
		cout << "Enemy flying!" << endl;
}
