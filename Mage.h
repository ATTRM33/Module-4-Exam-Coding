#ifndef MAGE_H
#define MAGE_H


#include "Class.h"

#include <vector>
class Mage :
    public Class
{private: 
    std::vector<std::string> spellbook = {"Fireball", "Magic Missile", "Acid Arrow"};
public:
    using Class::Class;
    Mage() { Class::setName("Mage"); }
    void attack() override;
    void castSpell(std::string spell);
    std::string pickSpell();
};

#endif

