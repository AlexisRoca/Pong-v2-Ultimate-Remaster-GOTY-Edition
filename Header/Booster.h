#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

template<class T> class Booster
{
protected:
	string m_firstTouch;
	string m_lastTouch;

public:
	// Constructor
	Booster();
	// Destroyer
	~Booster();

	string getFirstTouch() const;
	string getLastTouch() const;

	void setFirstTouch(const string & racquet);
	void setLastTouch(const string & racquet);

	void effect(T & t) = 0;
};
