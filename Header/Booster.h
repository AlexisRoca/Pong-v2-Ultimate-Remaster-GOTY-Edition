#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

#include "CircleObject.h"

class Booster : public CircleObject
{
protected:
	std::string m_firstTouch;
	std::string m_lastTouch;

public:
	// Constructor
	Booster(double size, const sf::Vector2f position, const sf::Color color = sf::Color::White);

	// Destroyer
	virtual ~Booster();

	std::string getFirstTouch() const;
	std::string getLastTouch() const;

	void setFirstTouch(const std::string & racquet);
	void setLastTouch(const std::string & racquet);

	//virtual void effect() = 0;
};
