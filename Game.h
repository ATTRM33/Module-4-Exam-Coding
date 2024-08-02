#ifndef GAME_H
#define GAME_H

#include "Playable.h"
#include <string>

class Game :
	public Playable
{private:
	std::string name;
	std::string genre;
	int numOfPlayer;
	std::string winCondition;
	int playTime;
public:
	Game(std::string name, std::string genre, int numOfPlayer, std::string winCondition, int playtime);
	void play() override;
};

#endif