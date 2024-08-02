#pragma once
#include "Class.h"
class Warrior :
    public Class
{private:
    std::string weapon = "sword";
public:
    using Class::Class;
    Warrior() {
        Class::setName("Warrior");
        weapon = "Sword";
    }
    void attack() override;
    std::string getWeapon() { return weapon; }
};

