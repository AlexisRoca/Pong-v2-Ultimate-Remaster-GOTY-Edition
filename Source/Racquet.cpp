#include "Racquet.h"
#include <math.h>
#include <iostream>


Racquet::Racquet(float speed, float size, sf::Vector2f position) :
Control(), 
m_speed(speed), 
m_winSize(size), 
m_shape(sf::Vector2f(m_winSize/5, 20))
{
	m_shape.setFillColor(sf::Color::Red);
	this->setPosition(position);
}

sf::Vector2f Racquet::getBoundDirection(Ball * ball)
{
	sf::Vector2f normale = ball->getPosition() - this->getPosition();
	 
	sf::Vector2f bound(normale/2.0f - ball->getDirection());
	bound /= sqrt(bound.x*bound.x + bound.y*bound.y);
	
	return bound;
}

void Racquet::draw(sf::RenderWindow & window)
{
	window.draw(m_shape);
}

void Racquet::move(sf::Vector2f direction)
{
	m_shape.move(m_speed * direction);
}

sf::FloatRect & Racquet::getBox()
{
	return m_shape.getGlobalBounds();
}

sf::Vector2f Racquet::getSize()
{
	return m_shape.getSize();
}

float Racquet::getSpeed()
{
	return m_speed;
}

sf::Vector2f Racquet::getPosition()
{
	return sf::Vector2f(m_shape.getPosition() + this->getSize()/2.0f);
}

void Racquet::setSize(sf::Vector2f size)
{
	m_shape.setSize(size);
}

void Racquet::setSpeed(float speed)
{
	m_speed = speed;
}

void Racquet::setPosition(sf::Vector2f position)
{
	m_shape.setPosition(position - this->getSize()/2.0f);
}

void Racquet::setRotation(float angle)
{
	this->setPosition(sf::Vector2f(m_shape.getPosition().x + this->getSize().x, m_shape.getPosition().y + this->getSize().y));
	this->setSize(sf::Vector2f(this->getSize().y, this->getSize().x));
}