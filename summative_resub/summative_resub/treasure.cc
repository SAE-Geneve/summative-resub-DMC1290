#include "treasure.h"

Treasure::Treasure()
{
	treasure_texture_.loadFromFile("Assets\\Tiles\\tile_76.png");
	treasure_sprite_.setTexture(treasure_texture_);
	
}

void Treasure::RandomPosition()
{
		treasure_index_ = rand() % (12 * 12);
}

void Treasure::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();

	target.draw(treasure_sprite_, states);
}
