#pragma once
#include "Observer.h"
class PlayerSoundController :
    public HPObserver
{
public:
    void Update(int hp) override;
};

