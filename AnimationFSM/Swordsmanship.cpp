#include "Swordsmanship.h"
#include <Jumping.h>
#include <Climbing.h>
#include <Walking.h>
#include "Idle.h"

Swordsmanship::~Swordsmanship()
{
}

void Swordsmanship::idle(Animation *a)
{
	std::cout << "Swordsmanship -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Swordsmanship::jumping(Animation *a)
{
	std::cout << "Swordsmanship -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Swordsmanship::walking(Animation *a)
{
	std::cout << "Swordsmanship -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Swordsmanship::climbing(Animation *a)
{
	std::cout << "Swordsmanship -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}