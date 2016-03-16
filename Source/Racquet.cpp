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
	m_shape.setPosition(position);
}

sf::Vector2f Racquet::getBoundDirection(Ball * ball)
{
	sf::Vector2f impactDirection(abs(ball->getPosition().x - this->getPosition().x), abs(ball->getPosition().y - this->getPosition().y));
	
	// impactDirection = ball->getPosition() - this->getPosition();

	impactDirection /= sqrt(impactDirection.x*impactDirection.x + impactDirection.y*impactDirection.y);

	if (ball->getPosition().x < m_winSize / 2 && impactDirection.x < 0)
		impactDirection.x *= -1;
	if (ball->getPosition().x > m_winSize / 2 && impactDirection.x > 0)
		impactDirection.x *= -1;
	if (ball->getPosition().y < m_winSize / 2 && impactDirection.y < 0)
		impactDirection.y *= -1;
	if (ball->getPosition().y > m_winSize / 2 && impactDirection.y > 0)
		impactDirection.y *= -1;
	
	// sf::Vector2f boundDirection = -ball->getDirection();

	// float cosAlpha = impactDirection.x * boundDirection.x + impactDirection.y * boundDirection.y;
	
	std::cout << impactDirection.x << " " << impactDirection.y << std::endl;

	return impactDirection;
}

void Racquet::draw(sf::RenderWindow & window)
{
	window.draw(m_shape);
}

void Racquet::move(sf::Vector2f direction)
{
	if (m_shape.getPosition().x > 0 && m_shape.getPosition().x < m_winSize - m_shape.getSize().x)
		if (m_shape.getPosition().y > 0 && m_shape.getPosition().y < m_winSize - m_shape.getSize().x)
		{
			m_shape.move(m_speed * direction);
		
			if (m_shape.getPosition().x < 0)
				m_shape.setPosition(0.5, m_shape.getPosition().y);
	
			if (m_shape.getPosition().x > m_winSize - m_shape.getSize().x)
				m_shape.setPosition(m_winSize - m_shape.getSize().x - 0.5, m_shape.getPosition().y);

			if (m_shape.getPosition().y < 0)
				m_shape.setPosition(m_shape.getPosition().x, 0.5);

			if (m_shape.getPosition().y > m_winSize - m_shape.getSize().x)
				m_shape.setPosition(m_shape.getPosition().x, m_winSize - m_shape.getSize().x - 0.5);
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
	return sf::Vector2f(m_shape.getPosition().x + m_shape.getSize().x / 2, m_shape.getPosition().y + m_shape.getSize().y / 2);
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
	m_shape.setPosition(position.x - m_shape.getSize().x / 2, position.y - m_shape.getSize().y / 2);
}

void Racquet::setRotation(float angle)
{
	m_shape.setRotation(angle);
}