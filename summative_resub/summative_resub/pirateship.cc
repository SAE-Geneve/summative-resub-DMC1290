#include "pirateship.h"

PirateShip::PirateShip()
{
	pirate_texture_.loadFromFile("Assets\\Ships\\ship.png");
	pirate_sprite_.setTexture(pirate_texture_);
	pirate_sprite_.setOrigin(pirate_texture_.getSize().x / 2, pirate_texture_.getSize().y / 2);
	pirate_sprite_.setPosition(400,400);
}

void PirateShip::Move()
{
	// TODO 
	// Forward direction (local +x direction in global space)
	float angleRad = pirate_sprite_.getRotation() * (3.14159265358979323846f / 180.0f);
	sf::Vector2f forward(std::cos(angleRad), std::sin(angleRad));

}

void PirateShip::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= pirate_sprite_.getTransform();

	target.draw(pirate_sprite_, states);
}
