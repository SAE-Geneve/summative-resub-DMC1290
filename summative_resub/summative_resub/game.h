#ifndef GAME_H
#define GAME_H

#include "pirateship.h"
#include "treasure.h"

class Game
{
public:
	
	void Struct();

	void Loop();

private:
	PirateShip pirate_ship_;
	Treasure treasure_;


	sf::RenderWindow window_;

	sf::Clock clock_;
};
#endif // GAME_H