#include "map.h"

#include <iostream>

Map::Map()
{
	texture_.loadFromFile("Assets\\Tiles\\tile_73.png");
	sprite_.setTexture(texture_);

	srand(time(NULL));

	for (int i = 0; i < 12 * 12; ++i)
	{
		tiles_array_[i] = sf::Sprite();
	}

	map_.fill(0);

	PlaceTreasure();

	std::cout << "treasure position : " << treasure_.GetPosition().x << treasure_.GetPosition().y << std::endl;

	std::cout << "tile water position : " << sprite_.getPosition().x << sprite_.getPosition().y << std::endl;

}

void Map::DisplayMap(sf::RenderWindow& window)
{
	for (int y = 0; y < 12; ++y)
	{
		for (int x = 0; x < 12; ++x)
		{
			int idx = y * 12 + x;

			float posX = x * 64;
			float posY = y * 64;

			if (map_[idx] == 0)
			{
				window.draw(sprite_);
			}
			else
			{
				window.draw(treasure_);
			}
		}
	}
}

void Map::PlaceTreasure()
{
	treasure_index_ = rand() % (12 * 12);
}

void Map::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();

	target.draw(sprite_, states);
}
