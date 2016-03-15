#include "Booster.h"


Booster::Booster(float size, sf::Vector2f position) :
m_size(size), m_position(position)
{
}

Booster::~Booster()
{
}

float Booster::getSize()
{
	return m_size;
}

sf::Vector2f Booster::getPosition()
{
	return m_position;
}

void Booster::setSize(float size)
{
	m_size = size;
}

void Booster::setPosition(sf::Vector2f position)
{
	m_position = position;
}
