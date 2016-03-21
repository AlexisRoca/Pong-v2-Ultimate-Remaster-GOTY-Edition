#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

#include "RectangleObject.h"
#include "Control.h"
#include "Ball.h"

class Racquet : public RectangleObject, public Control
{
protected:
	float m_speed;

public:
	// Constructor	
	Racquet(sf::Vector2f size, sf::Vector2f position, float speed, const sf::Color & color);

	// Methods
	sf::Vector2f getBoundDirection(Ball * ball);
	void move(sf::Vector2f direction);

	// Getter
	float getSpeed();

	// Setter
	void setSpeed(float speed);
};
