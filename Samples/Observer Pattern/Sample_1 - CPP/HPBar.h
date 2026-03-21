#pragma once
#include "Observer.h"
class HPBar :
    public HPObserver
{
public:
    void Update(int hp) override;
};

