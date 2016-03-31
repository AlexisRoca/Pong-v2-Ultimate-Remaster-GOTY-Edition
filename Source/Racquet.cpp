#include "Racquet.h"
#include <math.h>
#include <iostream>


Racquet::Racquet(sf::Vector2f size, sf::Vector2f position, float speed, sf::Color color) :
Control(), 
RectangleObject(size, position, color),
m_speed(speed)
{}

sf::Vector2f Racquet::getNormal(Ball * ball)
{
	sf::Vector2f result = - (ball->getPosition() - this->getPosition());

	std::cout << "Touch The Baaaaaall" << std::endl;

	result /= sqrt(result.x*result.x + result.y*result.y);
	
	return result;
}

void Racquet::move(sf::Vector2f direction)
{
	m_shape.move(m_speed * direction);
}

float Racquet::getSpeed()
{
	return m_speed;
}

void Racquet::setSpeed(float speed)
{
	m_speed = speed;
}