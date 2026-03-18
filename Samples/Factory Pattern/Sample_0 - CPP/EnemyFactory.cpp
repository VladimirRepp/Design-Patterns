#include "EnemyFactory.h"

Enemy* EnemyFactory::CreateEnemy(int playerLevel)
{
    Enemy* enemy;

	if (playerLevel < 5) {
		enemy = new Skeleton();
	}
	else if (playerLevel >= 5 && playerLevel < 10) {
		enemy = new Ork();
	}
	else {
		enemy = new Dragon();
	}

	return enemy;
}
