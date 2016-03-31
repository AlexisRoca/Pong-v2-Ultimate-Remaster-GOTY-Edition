#include "RectangleObject.h"
#include <math.h>
#include <iostream>


RectangleObject::RectangleObject(sf::Vector2f size, sf::Vector2f position, sf::Color color) :
m_shape(size)
{
	m_shape.setFillColor(color);
	this->setPosition(position);
}

sf::Vector2f  RectangleObject::getBoundDirection(Ball * ball)
{
	sf::Vector2f direction = ball->getDirection();
	sf::Vector2f normale = this->getNormal(ball);

	direction /= sqrt(direction.x*direction.x + direction.y*direction.y);

	sf::Vector2f bound = direction - normale*(2.0f*(direction.x*normale.x + direction.y*normale.y));
	bound /= sqrt(bound.x*bound.x + bound.y*bound.y);

	return bound;
}

void RectangleObject::draw(sf::RenderWindow & window)
{
	window.draw(m_shape);
}

sf::FloatRect & RectangleObject::getBox()
{
	return m_shape.getGlobalBounds();
}

sf::Vector2f RectangleObject::getNormal(Ball * ball)
{
	if (this->getSize().x > this->getSize().y)
	{
		if(this->getPosition().y > ball->getPosition().y)
			return sf::Vector2f(0, -1);
		else
			return sf::Vector2f(0, 1);
	}
	else
	{
		if (this->getPosition().x > ball->getPosition().x)
			return sf::Vector2f(-1, 0);
		else
			return sf::Vector2f(1, 0);
	}
}

sf::Vector2f RectangleObject::getSize()
{
	return m_shape.getSize();
}

sf::Vector2f RectangleObject::getPosition()
{
	return sf::Vector2f(m_shape.getPosition() + this->getSize() / 2.0f);
}

void RectangleObject::setSize(sf::Vector2f size)
{
	m_shape.setSize(size);
}

void RectangleObject::setPosition(sf::Vector2f position)
{
	m_shape.setPosition(position - this->getSize() / 2.0f);
}