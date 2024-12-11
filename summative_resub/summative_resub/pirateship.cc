#include "pirateship.h"

PirateShip::PirateShip()
{
	pirate_texture_.loadFromFile("Assets\\Ships\\ship.png");
	pirate_sprite_.setTexture(pirate_texture_);
}

void PirateShip::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= pirate_sprite_.getTransform();

	target.draw(pirate_sprite_, states);
}
