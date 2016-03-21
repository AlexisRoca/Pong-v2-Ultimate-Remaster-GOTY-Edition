#include "Ball.h"
#include <iostream>

Ball::Ball(float size, sf::Vector2f position, float speed, sf::Vector2f direction, const sf::Color & color) :
	CircleObject(size, speed, direction, position, color)
{}

void Ball::update()
{
	float moveX = m_direction.x * m_speed;
	float moveY = m_direction.y * m_speed;

	m_shape->move(sf::Vector2f(moveX, moveY));
}
