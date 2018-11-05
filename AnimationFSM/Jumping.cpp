#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>
#include <Walking.h>
#include <Swordsmanship.h>
#include <string>

void Jumping::idle(Animation* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::jumping(Animation* a)
{
	std::cout << "Jumping -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Jumping::climbing(Animation* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Jumping::walking(Animation*a)
{
	std::cout << "Jumping -> Walking" << std::endl;
	a->setCurrent(new Walking());
	delete this;
}

void Jumping::swordsmanship(Animation*a)
{
	std::cout << "Jumping -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}