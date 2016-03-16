#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

#include "Control.h"
#include "Ball.h"

class Racquet : public Control
{
protected:
	float m_speed;
	float m_winSize;

	sf::RectangleShape m_shape;
	sf::Texture *m_texture;

public:
	// Constructor
	Racquet(float speed, float size, sf::Vector2f position);
	
	// Methods
	sf::Vector2f getBoundDirection(Ball * ball);

	void draw(sf::RenderWindow & window);
	void move(sf::Vector2f direction);

	// Getter
	sf::Vector2f getSize();
	float getSpeed();
	sf::FloatRect & getBox();
	sf::Vector2f getPosition();

	// Setter
	void setSize(sf::Vector2f size);
	void setSpeed(float speed);
	void setPosition(sf::Vector2f position);
	void setRotation(float angle);
};
