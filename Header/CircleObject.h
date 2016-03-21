#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

#include "Object.h"

class CircleObject : public Object
{
protected:
	sf::CircleShape *m_shape;
	float m_size;
	float m_speed;
	sf::Vector2f m_direction;

public:
	// Constructor
	CircleObject(float size, float speed, sf::Vector2f direction, sf::Vector2f position, const sf::Color & color);

	// Methods
	virtual void draw(sf::RenderWindow & window);

	// Getter
	sf::FloatRect & getBox();
	sf::CircleShape getShape();
	sf::Vector2f getPosition();
	float getSize();
	float getSpeed();
	sf::Vector2f getDirection();

	// Setter
	void setPosition(sf::Vector2f position);
	void setSize(float size);
	void setSpeed(float speed);
	void setDirection(sf::Vector2f direction);
};

