#include "Hammering.h"


Hammering::~Hammering()
{
}

void Hammering::idle(Animation *a)
{
	std::cout << "Hammering to Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
