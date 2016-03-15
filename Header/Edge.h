#pragma once

#include <SFML/Graphics.hpp>
#include "Ball.h"

class Edge
{
	private:
		sf::RectangleShape m_shape;
		sf::Color m_color;
		char m_orientation;

	public:
		Edge(int size, unsigned char orientation, const sf::Color & color = sf::Color::White);
		~Edge();

		void setPosition(sf::Vector2f & position);
		
		sf::FloatRect & getBox();
		char getOrientation();
		sf::Vector2f getBoundDirection(Ball * ball);

		void draw(sf::RenderWindow & window);
};