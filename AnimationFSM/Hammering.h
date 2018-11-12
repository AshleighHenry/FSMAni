#ifndef HAMMERING_H
#define HAMMERING_H

#include <Jumping.h>
#include <Idle.h>
#include <Walking.h>
#include <string>
class Hammering : public State
{
public:
	Hammering() { std::cout << "Hammering" << std::endl; };
	~Hammering();
	void idle(Animation* a);
};

#endif
