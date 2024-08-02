#include "Mage.h"

#include <iostream>

void Mage::castSpell(std::string spell) {
	std::string spellName;
	if (spell == "Fireball") {
		spellName = "Fireball";
	}
	else if (spell == "Magic Missile") {
		spellName = "Magic Missile";
	}
	else if (spell == "Acid Arrow") {
		spellName = "Acid Arrow";
	}

	std::cout << "Casts a " << spellName <<  " spell " << std::endl;
}

std::string Mage::pickSpell() {
	int randSpell = rand() % spellbook.size();
	std::string spellChoice;
	spellChoice = spellbook[randSpell];
	return spellChoice;
		
	
}

void Mage::attack() {
	srand(time(0));
	std::string spellToCast = pickSpell();

	std::cout << "The Mage, ";
	castSpell(spellToCast);
}