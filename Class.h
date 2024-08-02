#pragma once
#ifndef CLASS_H
#define CLASS_H

#include <string>

class Class
{private:
	std::string name;
public:
	Class() {
		name = " ";
	}
	Class(std::string nm) : name(nm) {}
	virtual void attack() = 0;
	void setName(std::string nm) { name = nm; }
	std::string getName() { return name; }
};

#endif