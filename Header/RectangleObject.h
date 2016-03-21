#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

#include "Object.h"
#include "Ball.h"

class RectangleObject : public Object
{
protected:
	sf::RectangleShape *m_shape;
	//sf::Vector2f m_size;

public:
	// Constructor
	RectangleObject(sf::Vector2f size, sf::Vector2f position, const sf::Color & color);

	// Methods
	void draw(sf::RenderWindow & window);
	virtual sf::Vector2f getBoundDirection(Ball * ball) = 0;
	sf::FloatRect & getBox();
	sf::RectangleShape getShape();

	// Getter
	//sf::FloatRect & getBox();
	sf::Vector2f getPosition();
	sf::Vector2f getSize();
	
	// Setter
	void setPosition(sf::Vector2f position);
	void setSize(sf::Vector2f size);

};

