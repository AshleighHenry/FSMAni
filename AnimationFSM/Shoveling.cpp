#include "Shoveling.h"
#include <Walking.h>
#include "Idle.h"
Shoveling::~Shoveling()
{
}

void Shoveling::idle(Animation * a)
{
	std::cout << "Shovelling to Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Shoveling::walking(Animation * a)
{
	std::cout << "Shovelling to Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

