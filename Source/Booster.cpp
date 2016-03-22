#include "Booster.h"

template<class T>
Booster<T>::Booster() :
m_firstTouch(""), m_lastTouch("")
{
}


template<class T>
Booster<T>::~Booster()
{
}

template<class T>
std::string Booster<T>::getFirstTouch() const
{
	return m_firstTouch;
}

template<class T>
std::string Booster<T>::getLastTouch() const
{
	return m_lastTouch;
}

template<class T>
void Booster<T>::setFirstTouch(const std::string & racquet)
{
	m_firstTouch = racquet;
}

template<class T>
void Booster<T>::setLastTouch(const std::string & racquet)
{
	m_lastTouch = racquet;
}

