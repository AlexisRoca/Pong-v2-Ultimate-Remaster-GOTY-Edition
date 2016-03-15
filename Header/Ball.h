#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

class Ball
{
protected:
	float m_speed;
	sf::Vector2f m_direction;

	sf::CircleShape m_shape;
	sf::Texture *m_texture;

public:
	// Constructor
	Ball(float size, float speed, sf::Vector2f position, sf::Vector2f direction);

	// Methods
	void draw(sf::RenderWindow & window);
	void update();

	// Getter
	float getSize();
	float getSpeed();
	sf::FloatRect & getBox();
	sf::Vector2f getPosition();
	sf::Vector2f getDirection();

	// Setter
	void setSize(float size);
	void setSpeed(float speed);
	void setPosition(sf::Vector2f position);
	void setDirection(sf::Vector2f direction);
};
