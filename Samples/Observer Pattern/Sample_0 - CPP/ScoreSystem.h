#pragma once
#include "Observer.h"

class ScoreSystem :
    public Observer
{
public:
    void Update() override;
};

