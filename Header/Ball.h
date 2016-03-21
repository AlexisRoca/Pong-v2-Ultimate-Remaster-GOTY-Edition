#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

#include "CircleObject.h"

class Ball : public CircleObject
{
protected:

public:
	// Constructor
	Ball(float size, sf::Vector2f position, float speed, sf::Vector2f direction, const sf::Color & color);

	// Methods
	void update();
};
