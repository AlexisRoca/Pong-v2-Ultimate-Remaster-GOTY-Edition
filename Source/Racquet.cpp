#include "Racquet.h"

#include "UsefulFunctions.h"
#include <math.h>
#include <iostream>

Racquet::Racquet(sf::Vector2f size, sf::Vector2f position, float speed, const sf::Color & color) :
	RectangleObject(size, position, color),
	Control(),
	m_speed(speed)
{}

sf::Vector2f Racquet::getBoundDirection(Ball * ball)
{
	sf::Vector2f normale = ball->getPosition() - this->getPosition();


	sf::Vector2f bound(normale / 2.0f - ball->getDirection());
	bound /= sqrt(bound.x*bound.x + bound.y*bound.y);

	float scalaire = scalarProduct(normale, bound);
	
	return bound;
}

void Racquet::move(sf::Vector2f direction)
{
	m_shape->move(m_speed * direction);
}

float Racquet::getSpeed()
{
	return m_speed;
}

void Racquet::setSpeed(float speed)
{
	m_speed = speed;
}
