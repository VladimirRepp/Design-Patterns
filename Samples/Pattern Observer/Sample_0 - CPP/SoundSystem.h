#pragma once
#include "Observer.h"

class SoundSystem :
    public Observer
{
public:
    void Update() override;
};

