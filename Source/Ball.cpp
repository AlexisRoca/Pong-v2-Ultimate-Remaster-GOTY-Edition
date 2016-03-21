#include "Ball.h"
#include <iostream>

Ball::Ball(float size, float speed, sf::Vector2f position, sf::Vector2f direction) :
	m_speed(speed),
	m_direction(direction),
	m_shape(sf::CircleShape(size))
{
	m_shape.setFillColor(sf::Color::Blue);
	m_shape.setPosition(position);
}

void Ball::draw(sf::RenderWindow & window)
{
	window.draw(m_shape);
}

void Ball::update()
{
	float moveX = m_direction.x * m_speed;
	float moveY = m_direction.y * m_speed;

	m_shape.move(sf::Vector2f(moveX, moveY));

	// std::cout << m_shape.getPosition().x << " " << m_shape.getPosition().y << std::endl;
}

sf::FloatRect & Ball::getBox()
{
	return m_shape.getGlobalBounds();
}

float Ball::getSize()
{
	return m_shape.getRadius();
}

float Ball::getSpeed()
{
	return m_speed;
}

sf::Vector2f Ball::getPosition()
{
	return m_shape.getPosition();
}

sf::Vector2f Ball::getDirection()
{
	return m_direction;
}

void Ball::setSize(float size)
{
	m_shape.setRadius(size);
}

void Ball::setSpeed(float speed)
{
	m_speed = speed;
}

void Ball::setPosition(sf::Vector2f position)
{
	m_shape.setPosition(position);
}

void Ball::setDirection(sf::Vector2f direction)
{
	m_direction = direction;
	//m_speed *= 1.05;
}
