#include "Control.h"


Control::Control()
{}

void Control::update()
{
	if (sf::Keyboard::isKeyPressed(m_up))
		this->move(sf::Vector2f(0, -1));

	if (sf::Keyboard::isKeyPressed(m_down))
		this->move(sf::Vector2f(0, 1));
	
	if (sf::Keyboard::isKeyPressed(m_left))
		this->move(sf::Vector2f(-1, 0));

	if (sf::Keyboard::isKeyPressed(m_right))
		this->move(sf::Vector2f(1, 0));
}

void Control::setUp(sf::Keyboard::Key up)
{
  m_up = up;
}

void Control::setDown(sf::Keyboard::Key down)
{
  m_down = down;
}

void Control::setLeft(sf::Keyboard::Key left)
{
  m_left = left;
}

void Control::setRight(sf::Keyboard::Key right)
{
  m_right = right;
}

void Control::setKick(sf::Keyboard::Key kick)
{
  m_kick = kick;
}
