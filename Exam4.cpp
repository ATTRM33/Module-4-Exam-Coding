//Zach Brown
//Date: 8/2/2024
//CS2 Exam Module 4

#include <iostream>
#include "Class.h"
#include "Hero.h"
#include "Warrior.h"
#include "Mage.h"
#include "Record.h"
#include "Movie.h"
#include "Game.h"

using namespace std;
void testHeroes();
void testPlayables();
int main() {

	//Part 1
	testHeroes();

	std::cout << std::endl;
	//Part 2
	testPlayables();

	
}
void testHeroes() {
	Warrior warrior("Warrior");
	Mage mage("Mage");
	Hero vivi("Vivi", &mage);
	Hero baartz("Baartz", &warrior);

	baartz.act();
	vivi.act();
}

void testPlayables() {

	std::string ff = "Final Fantasy";
	Playable* playables[3];

	playables[0] = new Movie("Jaws", "Thriller", 1976, "Steven Spielberg", "A massive shark terroizes a small coastal town");
	playables[1] = new Record("Blink 182");
	playables[2] = new Game(ff, "Role-Playing", 1, "Beat the final boss", 240);

	for (Playable* p : playables) {
		p->play();

	}
}