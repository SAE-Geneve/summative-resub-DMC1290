#include "game.h"


void Game::Struct()
{
	window_.create(sf::VideoMode(768, 768), "Pirate");

	font_.loadFromFile("C:\\projects_dev\\space_shooter\\space_shooter\\assets\\fonts\\arcade_classic_2\\ARCADECLASSIC.TTF");
	score_.setString("Score");// set the string to display
	score_.setFont(font_);
	score_.setCharacterSize(40); // set the character size in pixels, not points!
	score_.setFillColor(sf::Color::White);// set the color
	score_.setPosition(50, 50);
}

void Game::Loop()
{
	float dt;

	while (window_.isOpen())
	{

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			pirate_ship_.Move(sf::Vector2f(0, -1), dt);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			pirate_ship_.Move(sf::Vector2f(0, 1), dt);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			pirate_ship_.Move(sf::Vector2f(-1, 0), dt);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			pirate_ship_.Move(sf::Vector2f(1, 0), dt);
		}
		sf::Event event;
		while (window_.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window_.close();
			}
		}

		window_.clear();
		map_.DisplayMap(window_);
		
		window_.draw(pirate_ship_);
		window_.draw(treasure_);
		window_.display();

		dt = clock_.restart().asSeconds();
	}
}
