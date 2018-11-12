#include <Input.h>
#include <AnimatedSprite.h>
Input::Input() 
{
	m_current = Action;
}
Input::~Input() {}

void Input::setCurrent(int a)
{
	m_current = a;
}
int Input::getCurrent()
{
	return m_current;
}

void Input::keyPressEvent(sf::Event event)
{

	if (event.type == sf::Event::KeyPressed)
	{
	
		if (event.key.code == sf::Keyboard::Down)
		{
			m_current = 1; // shoveling
		}
		if (event.key.code == sf::Keyboard::Right)
		{
			m_current = 2; // walking
		}
		if (event.key.code == sf::Keyboard::Up)
		{
			m_current = 3; // climb
		}
		if (event.key.code == sf::Keyboard::F1)
		{
			m_current == 4; // jump
		}
		if (event.key.code == sf::Keyboard::F2)
		{
			m_current == 5;//swordsmanship
		}
		if (event.key.code == sf::Keyboard::F3)
		{
			m_current == 6;
		}
	}
	
}


