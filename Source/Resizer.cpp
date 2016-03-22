#include "Resizer.h"
template<class Racquet>
Resizer<Racquet>::Resizer(int resizeValue):
	Booster(),m_resizeValue(resizeValue)
{
}
template<class Racquet>
Resizer<Racquet>::~Resizer()
{
}

template<class Racquet>
void Resizer<Racquet>::effect(Racquet & r)
{
	if (r.getSize().x > r.getSize().y)
		r.setSize(sf::Vector2f(r.getSize().x + 10, r.getSize().y));
	else
		r.setSize(sf::Vector2f(r.getSize().x, r.getSize().y+10));

}