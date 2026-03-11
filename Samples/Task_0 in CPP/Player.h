#pragma once
#include <string>
#include "IWeaponStrategy.h"

class Player
{
private:
	IWeaponStrategy* weaponStrategy;

public:
	// void Attack(string weapon_type); - было так
	// Проблемы: 
	// Нарушение открытости-закрытости принципа
	//		- при добавление нового оружия, нужно менять существуюший код 
	// Много условий if

	Player():weaponStrategy(nullptr){}
	~Player() {
		delete weaponStrategy;
	}

	void SetWeapon(IWeaponStrategy* weaponStrategy);
	void Attack();
};

