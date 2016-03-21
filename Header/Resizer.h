#pragma once
#include "Booster.h"
#include "Racquet.h"
class Resizer : public Booster<Racquet>
{
private:
	int m_resizeValue;

public:
	Resizer();
	~Resizer();

	void effect(Racquet & r);

};

