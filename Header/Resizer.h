#pragma once
#include "Booster.h"
#include "Racquet.h"

class Resizer : public Booster
{
private:
	int m_resizeValue;

public:
	Resizer(int resizeValue, double size, const sf::Vector2f position, const sf::Color color);
	virtual ~Resizer();

	void effect(Racquet & r);
};

