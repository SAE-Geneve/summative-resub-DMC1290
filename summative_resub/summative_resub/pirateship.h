#ifndef PIRATESHIP_H
#define PIRATESHIP_H

#include <SFML/Graphics.hpp>

class PirateShip : public sf::Drawable, sf::Transformable
{
public:

	PirateShip();

	void Move(sf::Vector2f direction, float dt);

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
	sf::Texture pirate_texture_;
	sf::Sprite pirate_sprite_;
};

#endif // PIRATESHIP_H
