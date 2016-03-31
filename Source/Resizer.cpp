#include "Resizer.h"

Resizer::Resizer(int resizeValue, double size, const sf::Vector2f position, const sf::Color color) :
	Booster(size, position, color),
	m_resizeValue(resizeValue)
{}

Resizer::~Resizer()
{}

void Resizer::effect(Racquet & r)
{
	if (r.getSize().x > r.getSize().y)
		r.setSize(sf::Vector2f(r.getSize().x + 10, r.getSize().y));
	else
		r.setSize(sf::Vector2f(r.getSize().x, r.getSize().y+10));
}