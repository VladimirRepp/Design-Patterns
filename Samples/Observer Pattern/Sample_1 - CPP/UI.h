#pragma once
#include "Observer.h"
class UI :
    public HPObserver
{
 public:
    void Update(int hp) override;
};

