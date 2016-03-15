#include "..\Header\Edge.h"

Edge::Edge(int size, unsigned char orientation, const sf::Color & color):
	m_orientation(orientation), m_shape(sf::Vector2f(size-10,5)),  m_color(color)
{
	if(orientation == 'V')
		m_shape.rotate(90);
}

Edge::~Edge()
{}

void Edge::setPosition(sf::Vector2f & position)
{
	m_shape.setPosition(position);
}

sf::FloatRect & Edge::getBox()
{
	return m_shape.getGlobalBounds();
}

char Edge::getOrientation()
{
	return m_orientation;
}

sf::Vector2f Edge::getBoundDirection(Ball * ball)
{
	if (m_orientation == 'V')
		return sf::Vector2f(-ball->getDirection().x, ball->getDirection().y);
	else
		return sf::Vector2f(ball->getDirection().x, -ball->getDirection().y);
}

void Edge::draw(sf::RenderWindow & window)
{
	window.draw(m_shape);
}
