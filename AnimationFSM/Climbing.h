#ifndef CLIMBING_H
#define CLIMBING_H

#include <State.h>

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void idle(Animation* a);
	void climbing(Animation * a);
	void jumping(Animation* a);
	void walking(Animation * a);
	void swordsmanship(Animation * a);
};

#endif // !IDLE_H