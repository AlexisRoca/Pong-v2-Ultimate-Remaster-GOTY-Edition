#include <SFML/Graphics.hpp>
#include "Level.h"
#include <Windows.h>

int main()
{
	float size = 600;// = GetSystemMetrics(SM_CYSCREEN);
	sf::RenderWindow window(sf::VideoMode(size, size), "PONG");

	Level level(size);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		level.update();
		level.draw(window);
	}

	return 0;
}