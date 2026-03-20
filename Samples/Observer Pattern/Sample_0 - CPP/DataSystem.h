#pragma once
#include "Observer.h"

class DataSystem :
    public Observer
{
public:
    void Update() override;
};

