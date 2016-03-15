#pragma once

#include <SFML/Graphics.hpp>

class Control
{
private:
	sf::Keyboard::Key m_up;
	sf::Keyboard::Key m_down;
	sf::Keyboard::Key m_left;
	sf::Keyboard::Key m_right;
	sf::Keyboard::Key m_kick;

public:
	// Default Constructor
	Control();

	// Methods
	void update();
	virtual void move(sf::Vector2f direction) = 0;

	// Setter
	void setUp(sf::Keyboard::Key up);
	void setDown(sf::Keyboard::Key down);
	void setLeft(sf::Keyboard::Key left);
	void setRight(sf::Keyboard::Key right);
	void setKick(sf::Keyboard::Key kick);
};
