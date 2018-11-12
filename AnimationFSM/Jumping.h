#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(Animation* a);
	//void jumping(Animation * a);
	void climbing(Animation* a);
	void walking(Animation * a);
	void swordsmanship(Animation * a);
};

#endif // !IDLE_H