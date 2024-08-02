#include "Game.h"
#include <iostream>

Game::Game(std::string name, std::string genre, int numOfPlayer, std::string winCondition, int playtime) :
name(name), genre(genre), numOfPlayer(numOfPlayer), winCondition(winCondition), playTime(playtime) {

}
void Game::play() {
	std::cout << name << ", a " << genre << " game for " << numOfPlayer << " player, where players try to " << winCondition << "." << std::endl;
	std::cout << "Each game take about " << playTime << " minutes." << std::endl;
}

