#pragma once
#include <iostream>
using namespace std;

class IWeaponStrategy
{
public:
	virtual void Attack() const = 0;
	virtual ~IWeaponStrategy() = default;
};

