#include "RectangleObject.h"

RectangleObject::RectangleObject(sf::Vector2f size, sf::Vector2f position, const sf::Color & color) :
	Object(position, color),
	//m_size(size),
	m_shape(new sf::RectangleShape(size))
{
	this->setPosition(position);
	m_shape->setFillColor(color);
}

void RectangleObject::draw(sf::RenderWindow & window)
{
	window.draw(*m_shape);
}

sf::FloatRect & RectangleObject::getBox()
{
	return m_shape->getGlobalBounds();
}

sf::RectangleShape RectangleObject::getShape()
{
	return *m_shape;
}

sf::Vector2f RectangleObject::getPosition()
{
	return sf::Vector2f(m_shape->getPosition() + this->getSize() / 2.0f);
}

void RectangleObject::setPosition(sf::Vector2f position)
{
	m_shape->setPosition(position - this->getSize() / 2.0f);
}

sf::Vector2f RectangleObject::getSize()
{
	return m_shape->getSize();
}

void RectangleObject::setSize(sf::Vector2f size)
{
	m_shape->setSize(size);
}
