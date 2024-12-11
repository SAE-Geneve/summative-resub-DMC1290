#ifndef MAP_H
#define MAP_H

#include "treasure.h"
#include <SFML/Graphics.hpp>
#include <array>

class Map : public sf::Drawable, sf::Transformable

{
public:

	Map();

	void DisplayMap(sf::RenderWindow& window);

	void PlaceTreasure();

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

private:
	Treasure treasure_;

	sf::Texture texture_;
	sf::Sprite sprite_;

	std::array<sf::Sprite, 12 * 12> tiles_array_;
	std::array<int, 12 * 12> map_;/*=
	{	0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0
	};*/

	int treasure_index_;
};

#endif // MAP_H
