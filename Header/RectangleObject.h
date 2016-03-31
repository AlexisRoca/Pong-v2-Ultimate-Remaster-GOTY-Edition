#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

#include "Ball.h"

class RectangleObject
{
protected:
	sf::RectangleShape m_shape;
	sf::Texture *m_texture;

public:
	// Constructor
	RectangleObject(sf::Vector2f size, sf::Vector2f position, sf::Color color);

	// Methods
	sf::Vector2f getBoundDirection(Ball * ball);
	void draw(sf::RenderWindow & window);

	// Getter
	sf::Vector2f getSize();
	sf::FloatRect & getBox();
	sf::Vector2f getPosition();
	virtual sf::Vector2f getNormal(Ball * ball);

	// Setter
	void setSize(sf::Vector2f size);
	void setPosition(sf::Vector2f position);
};

