#include "Hero.h"

#include <iostream>

Hero::Hero(std::string name, Class* cls) : name(name), classChoice(cls) {}

void Hero::act() {
	std::cout << name << " ";
	classChoice->attack();
}