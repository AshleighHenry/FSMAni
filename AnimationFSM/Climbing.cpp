#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>
#include <Walking.h>
#include <Swordsmanship.h>
#include <string>

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Climbing::climbing(Animation* a)
{
	std::cout << "Climbing -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Climbing::jumping(Animation* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Climbing::walking(Animation* a)
{
	std::cout << "Climbing -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Climbing::swordsmanship(Animation* a)
{
	std::cout << "Climbing -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}