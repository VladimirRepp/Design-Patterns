#include "Player.h"
#include "MagicWeaponStrategy.h"
#include "GunWeaponStrategy.h"

#include <iostream>
using namespace std;

// Полезная ссылка: https://refactoringu.ru/ru/design-patterns/strategy.html

int main()
{
	Player p;
	p.Attack();

	p.SetWeapon(new GunWeaponStrategy);
	p.Attack();

	p.SetWeapon(new MagicWeaponStrategy);
	p.Attack();

	system("pause");
}

