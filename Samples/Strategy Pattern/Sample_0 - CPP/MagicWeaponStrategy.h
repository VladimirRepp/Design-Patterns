#pragma once
#include "IWeaponStrategy.h"

class MagicWeaponStrategy :
    public IWeaponStrategy
{
    void Attack() const override;
};

