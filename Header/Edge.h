#pragma once

#include <SFML/Graphics.hpp>

#include "RectangleObject.h"

class Edge : public RectangleObject
{
	public:
		Edge(sf::Vector2f size, sf::Vector2f position, sf::Color color);
};