#include "Booster.h"

Booster::Booster(double size, const sf::Vector2f position, const sf::Color color) :
	CircleObject(size,position),
	m_firstTouch(""),
	m_lastTouch("")
{}



Booster::~Booster()
{}

std::string Booster::getFirstTouch() const
{
	return m_firstTouch;
}

std::string Booster::getLastTouch() const
{
	return m_lastTouch;
}

void Booster::setFirstTouch(const std::string & racquet)
{
	m_firstTouch = racquet;
}

void Booster::setLastTouch(const std::string & racquet)
{
	m_lastTouch = racquet;
}

