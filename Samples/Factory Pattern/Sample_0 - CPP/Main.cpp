#include "Player.h"
#include "EnemyFactory.h"

// Задача: создать врагов относительно уровня игрока 

int main()
{
	Player* player = new Player(0);
	Enemy* enemy = nullptr;

	player->SetLevel(15);

	// Проблема: код создания объектов находится где то в коде 
	/*if (player->GetLevel() < 5) {
		enemy = new Skeleton();
	}
	else if (player->GetLevel() >= 5 && player->GetLevel() < 10) {
		enemy = new Ork();
	}
	else {
		enemy = new Dragon();
	}*/

	// Решение: вынести создание объектов в отдельную сущность 
	EnemyFactory* enemyFactory = new EnemyFactory();
	enemy = enemyFactory->CreateEnemy(player->GetLevel());

	if (enemy != nullptr)
		enemy->Attack();
	else
		cout << "Enemy not define!" << endl;
	// Пример вывода:
	// "Skeleton is attacking!"
	// "Ork is attacking!"
	// "Dragon is attacking!"

	delete player;
	delete enemy;
	delete enemyFactory;

	system("pause");
}