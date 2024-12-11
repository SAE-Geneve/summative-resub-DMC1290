#ifndef TREASURE_H
#define TREASURE_H

#include <SFML/Graphics.hpp>

class Treasure : public sf::Drawable, sf::Transformable
{
public:
	Treasure();

	void RandomPosition();

	auto GetPosition() { return treasure_sprite_.getPosition(); }
protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
	sf::Texture treasure_texture_;
	sf::Sprite treasure_sprite_;

	int treasure_index_;
};

#endif // TREASURE_H
