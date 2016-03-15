#include "Racquet.h"
#include <math.h>


Racquet::Racquet(float speed, float size, sf::Vector2f position) :
Control(), 
m_speed(speed), 
m_winSize(size), 
m_shape(sf::Vector2f(m_winSize/5, 20))
{
	m_shape.setFillColor(sf::Color::Red);
	m_shape.setPosition(position);
}

sf::Vector2f Racquet::getBoundDirection(sf::Vector2f direction, sf::Vector2f position)
{
	float dirX = - abs(m_shape.getPosition().x + m_shape.getSize().x / 2 - position.x);
	float dirY = - (m_shape.getPosition().y + m_shape.getSize().y / 2 - position.y);

	float max = abs(dirX);
	if (max < abs(dirY))
		max = abs(dirY);

	return sf::Vector2f(dirX/max, dirY/max);
}

sf::Vector2f Racquet::getBoundDirection(Ball * ball)
{
	sf::Vector2f position = ball->getPosition();
	sf::Vector2f direction = ball->getDirection();

	float dirX = -abs(m_shape.getPosition().x + m_shape.getSize().x / 2 - position.x);
	float dirY = -(m_shape.getPosition().y + m_shape.getSize().y / 2 - position.y);

	float max = abs(dirX);
	if (max < abs(dirY))
		max = abs(dirY);

	return sf::Vector2f(dirX / max, dirY / max);
}

void Racquet::draw(sf::RenderWindow & window)
{
	window.draw(m_shape);
}

void Racquet::move(sf::Vector2f direction)
{
	if (m_shape.getPosition().x > 0 && m_shape.getPosition().x < m_winSize - m_shape.getSize().x)
	{
		m_shape.move(m_speed * direction);
		
		if (m_shape.getPosition().x < 0)
			m_shape.setPosition(0.5, m_shape.getPosition().y);
	
		if (m_shape.getPosition().x > m_winSize - m_shape.getSize().x)
			m_shape.setPosition(m_winSize - m_shape.getSize().x - 0.5, m_shape.getPosition().y);
	}
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
	return m_shape.getPosition();
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
	m_shape.setPosition(position);
}