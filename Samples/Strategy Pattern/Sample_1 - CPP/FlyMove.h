#pragma once
#include "IMove.h"
class FlyMove :
    public IMove
{
public:
    void Move() const override;
};

