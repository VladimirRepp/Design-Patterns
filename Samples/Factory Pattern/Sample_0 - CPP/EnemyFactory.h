#pragma once

#include "Skeleton.h"
#include "Ork.h"
#include "Dragon.h"

class EnemyFactory
{
public:
	Enemy* CreateEnemy(int playerLevel);
};

