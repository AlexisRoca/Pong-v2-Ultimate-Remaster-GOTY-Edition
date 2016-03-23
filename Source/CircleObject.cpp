#include "CircleObject.h"

CircleObject::CircleObject(float size, float speed, sf::Vector2f direction, sf::Vector2f position, const sf::Color & color):
	Object(position, color),
	m_size(size),
	m_speed(speed),
	m_direction(direction),
	m_shape(new sf::CircleShape(size))
{
	m_shape->setRadius(size);
	m_shape->setPosition(position);
	m_shape->setFillColor(color);
}

CircleObject::CircleObject(float size, sf::Vector2f position, const sf::Color & color):
	Object(position, color),
	m_size(size),
	m_shape(new sf::CircleShape(size))
{
	m_shape->setRadius(size);
	m_shape->setPosition(position);
	m_shape->setFillColor(color);	
}

void CircleObject::draw(sf::RenderWindow & window)
{
	window.draw(*m_shape);
}

sf::FloatRect & CircleObject::getBox()
{
	return m_shape->getGlobalBounds();
}

sf::CircleShape CircleObject::getShape()
{
	return *m_shape;
}

sf::Vector2f CircleObject::getPosition()
{
	return m_shape->getPosition();
}

void CircleObject::setPosition(sf::Vector2f position)
{
	m_shape->setPosition(position);
}

float CircleObject::getSize()
{
	return m_shape->getRadius();
}

void CircleObject::setSize(float size)
{
	m_shape->setRadius(size);
}

float CircleObject::getSpeed()
{
	return m_speed;
}

void CircleObject::setSpeed(float speed)
{
	m_speed = speed;
}

sf::Vector2f CircleObject::getDirection()
{
	return m_direction;
}

void CircleObject::setDirection(sf::Vector2f direction)
{
	m_direction = direction;
	m_speed *= 1.05;
}
