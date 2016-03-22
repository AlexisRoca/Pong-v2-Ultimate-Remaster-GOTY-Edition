#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

template<class T> class Booster
{
protected:
	std::string m_firstTouch;
	std::string m_lastTouch;

public:
	// Constructor
	Booster();
	// Destroyer
	virtual ~Booster();

	std::string getFirstTouch() const;
	std::string getLastTouch() const;

	void setFirstTouch(const std::string & racquet);
	void setLastTouch(const std::string & racquet);

	//virtual void effect(T & t) = 0;
};
