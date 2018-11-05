
#ifndef WALKING_H
#define WALKING_H
#include "State.h"

class Walking : public State
{
public:
	Walking() { };
	~Walking();
	void idle(Animation * a);
	void walking(Animation * a);
	void jumping(Animation * a);
	void climbing(Animation * a);
	void swordsmanship(Animation * a);
	void shoveling(Animation * a);
};


#endif