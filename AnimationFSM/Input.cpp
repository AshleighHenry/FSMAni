#include <Input.h>

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

	if (event.type == sf::Event::KeyReleased)
	{
		if (event.key.code == sf::Keyboard::Left)
		{
			m_current = 1; // left - WAS SUPPOSED TO BE HAMMERING GRRRR
		}
		if (event.key.code == sf::Keyboard::Right)
		{
			m_current = 2; // walking
		}
		if (event.key.code == sf::Keyboard::Up)
		{
			m_current = 3; // climb
		}
		if (event.key.code == sf::Keyboard::Space)
		{
			m_current == 4; // jump
		}
		if (event.key.code == sf::Keyboard::Z)
		{
			m_current == 5;//swordsmanship
		}
		if (event.key.code == sf::Keyboard::X)
		{
			m_current == 6;
		}
	}
	else
	{
	m_current = 0; // idle
	}
}


