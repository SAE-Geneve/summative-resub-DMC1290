#ifndef TREASURE_H
#define TREASURE_H

#include <SFML/Graphics.hpp>

class Treasure
{
public:
	Treasure();

	void RandomPosition();

private:
	sf::Texture treasure_texture_;
	sf::Sprite treasure_sprite_;

	int treasure_index_;
};

#endif // TREASURE_H
