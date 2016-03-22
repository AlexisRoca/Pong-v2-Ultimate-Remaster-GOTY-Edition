#pragma once
#include "Booster.h"
#include "Racquet.h"

template<class Racquet>
class Resizer : public Booster<Racquet>
{
private:
	int m_resizeValue;

public:
	Resizer(int resizeValue);
	virtual ~Resizer();

	void effect(Racquet & r);

};

