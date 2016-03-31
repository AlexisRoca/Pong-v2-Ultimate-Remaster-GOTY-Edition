#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

#include "Ball.h"
#include "Control.h"
#include "RectangleObject.h"

class Racquet : public RectangleObject, public Control
{
protected:
	float m_speed;

public:
	// Constructor
	Racquet(sf::Vector2f size, sf::Vector2f position, float speed, sf::Color color);
	
	// Methods
	void move(sf::Vector2f direction);

	// Getter
	float getSpeed();
	sf::Vector2f getNormal(Ball * ball);

	// Setter
	void setSpeed(float speed);
};
