#include "Booster.h"

template<class T>
Booster::Booster() :
m_firstTouch(""), m_lastTouch("")
{
}

template<class T>
Booster<T>::Booster()
{
}

template<class T>
Booster::~Booster()
{
}

template<class T>
string Booster<T>::getFirstTouch() const
{
	return m_firstTouch;
}

template<class T>
string Booster<T>::getLastTouch() const
{
	return m_lastTouch;
}

template<class T>
void Booster<T>::setFirstTouch(const string & racquet)
{
	m_firstTouch = racquet;
}

template<class T>
void Booster<T>::setLastTouch(const string & racquet)
{
	m_lastTouch = racquet;
}

