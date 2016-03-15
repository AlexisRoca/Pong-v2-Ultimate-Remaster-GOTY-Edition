#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>


class Booster
{
protected:
	float m_size;
	sf::Vector2f m_position;

	sf::RectangleShape m_shape;
	sf::Texture *m_texture;

public:
	// Constructor
	Booster(float size, sf::Vector2f position);
	// Destroyer
	~Booster();

	// Getter
	float getSize();
	sf::Vector2f getPosition();

	// Setter
	void setSize(float size);
	void setPosition(sf::Vector2f position);
};
