#pragma once

#include <SFML/Graphics.hpp>

#include "RectangleObject.h"
#include "Ball.h"

class Edge : public RectangleObject
{
private:

public:
	// Constructor
	Edge(sf::Vector2f size, sf::Vector2f position, const sf::Color & color);
	
	// Methods

	// Getter
	sf::Vector2f getBoundDirection(Ball * ball);
};