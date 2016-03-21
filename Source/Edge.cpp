#include "Edge.h"

Edge::Edge(sf::Vector2f size, sf::Vector2f position, const sf::Color & color) :
	RectangleObject(size, position, color)
{}

sf::Vector2f Edge::getBoundDirection(Ball * ball)
{
	return sf::Vector2f(-ball->getDirection().x, ball->getDirection().y);
}
