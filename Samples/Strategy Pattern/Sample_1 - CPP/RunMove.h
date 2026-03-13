#pragma once
#include "IMove.h"
class RunMove :
    public IMove
{
    void Move() const override;
};

