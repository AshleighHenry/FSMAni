#ifndef INPUT_H
#define INPUT_H
#include <SFML\Graphics.hpp>
class Input
{
public:
	Input();
	~Input();

	//enum Action
	//{
	//	IDLE,
	//	UP,
	//	LEFT,
	//	RIGHT
	//};
	int Action = 0;

	void setCurrent(int Action);
	int getCurrent();
	void keyPressEvent(sf::Event event);
private:
	int m_current;
	int m_previous;
};
#endif