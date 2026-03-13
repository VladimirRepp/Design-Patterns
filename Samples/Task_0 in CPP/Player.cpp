#include "Player.h"
#include <iostream>

// Áûëî
//void Player::Attack(string weapon_type)
//{
//	// Ïî÷åìó òàê ïëîõî?
//	if (weapon_type == "Sword")
//		cout << "Sword Attack!" << endl;
//
//	if (weapon_type == "Magic")
//		cout << "Magic Attack!" << endl;
//
//	if (weapon_type == "Bow")
//		cout << "Bow Attack!" << endl;
//}

// Ñòàëî:
void Player::SetWeapon(IWeaponStrategy* weaponStrategy)
{
	if (weaponStrategy)
		delete this->weaponStrategy;
	
	this->weaponStrategy = weaponStrategy;
}

void Player::Attack()
{
	if (weaponStrategy) {
		weaponStrategy->Attack();
	}
	else {
		cout << "Warning! Weapon Strategy not set!" << endl;
	}
}



