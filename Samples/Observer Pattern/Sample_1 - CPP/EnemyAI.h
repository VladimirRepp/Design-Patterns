#pragma once
#include "Observer.h"
class EnemyAI :
    public HPObserver
{
public:
    void Update(int hp) override;
};

