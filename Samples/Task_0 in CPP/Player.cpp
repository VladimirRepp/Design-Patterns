#include "Player.h"
#include <iostream>

// Было:
//void Player::Attack(string weapon_type)
//{
//    // Почему так плохо?
//    if (weapon_type == "Sword")
//        cout << "Sword Attack!" << endl;
//
//    if (weapon_type == "Magic")
//        cout << "Magic Attack!" << endl;
//
//    if (weapon_type == "Bow")
//        cout << "Bow Attack!" << endl;
//}

// Стало:
void Player::SetWeapon(IWeaponStrategy* weaponStrategy)
{
    if (this->weaponStrategy)
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
