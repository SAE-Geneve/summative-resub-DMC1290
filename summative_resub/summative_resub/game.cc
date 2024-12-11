#include "game.h"


void Game::Struct()
{
	window_.create(sf::VideoMode(768, 768), "Pirate");


}

void Game::Loop()
{
	float dt;

	while (window_.isOpen())
	{

		sf::Event event;
		while (window_.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window_.close();
			}
		}

		window_.clear();

		window_.draw(map_);
		window_.draw(pirate_ship_);
		window_.display();

		dt = clock_.restart().asSeconds();
	}
}
