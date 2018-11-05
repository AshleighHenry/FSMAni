#ifndef SHOVELING_H
#define SHOVELING_H
#include "State.h"

class Shoveling : public State
{
public:
	Shoveling() {};
	~Shoveling();
	void idle(Animation *a);
	void walking(Animation * a);
};

#endif