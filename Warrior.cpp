#include "Warrior.h"
#include <iostream>
void Warrior::attack() {
	std::string equippedWeapon = Warrior::getWeapon();
	std::cout << "The Warrior, swings their " << weapon << std::endl;
}