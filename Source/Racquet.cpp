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
	sf::Vector2f position = ball->getPosition();
	sf::Vector2f direction = ball->getDirection();
	
	sf::Vector2f normale = position - this->getPosition();

	float cosAlpha = normale.x*-direction.x + normale.y*-direction.y; //produit scalaire entre normale et direction de la balle 
	float sinAlpha = sin(acos(cosAlpha));

	std::cout << "cosAlpha: " << cosAlpha << " sinAlpha:" << sinAlpha << std::endl;


	sf::Vector2f reflexionDirection(normale.x*cosAlpha - sinAlpha*normale.y, normale.x*sinAlpha + normale.y*cosAlpha);
	//reflexionDirection /= sqrt(reflexionDirection.x*reflexionDirection.x +reflexionDirection.y*reflexionDirection.y);

	std::cout << "reflexionDirection - x: " << reflexionDirection.x << " y:" << reflexionDirection.y << std::endl;

	return reflexionDirection;
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
	return sf::Vector2f(m_shape.getPosition().x + m_shape.getSize().x/2,
						m_shape.getPosition().y + m_shape.getSize().y/2);
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