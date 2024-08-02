#ifndef HERO_H
#define HERO_H

#include "Class.h"
#include <string>


class Hero
{private:
	std::string name;
	Class* classChoice;

public:
	Hero();
	Hero(std::string name, Class* cls);
	std::string getName() {return name;}
	void setName(std::string nm) { name = nm; }
	Class* getClassChoice() {return classChoice;}
	void setClassChoice(Class* cls) { classChoice = cls; }
	void act();
};

#endif
