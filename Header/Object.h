#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

class Object
{
protected:
	sf::Color m_color;
	sf::Vector2f m_position;
	sf::Texture *m_texture;

public:
	// Constructor
	Object(sf::Vector2f position, const sf::Color & color);

	// Methods
	virtual void draw(sf::RenderWindow & window) = 0;

	// Getter
	virtual sf::FloatRect & getBox() = 0;
	virtual sf::Vector2f getPosition() = 0;

	// Setter
	virtual void setPosition(sf::Vector2f position) = 0;
};

