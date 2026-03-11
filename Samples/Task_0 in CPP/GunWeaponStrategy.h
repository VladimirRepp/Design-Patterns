#pragma once
#include "IWeaponStrategy.h"
class GunWeaponStrategy :
    public IWeaponStrategy
{
public:
    void Attack() const override;
};

