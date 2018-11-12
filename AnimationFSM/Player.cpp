#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case 0:
		m_animation.idle();		
		break;
	case 1: // down arrow
		m_animation.shoveling();
		m_animated_sprite.setStartAndEnd(18, 24);
		//m_animated_sprite.setStartAndEnd(12, 18);
		break;
	case 2: // right arrow
		m_animation.walking();	
		m_animated_sprite.setStartAndEnd(33, 39);
		break;
	case 3:		// up arrow
		m_animation.climbing();
		m_animated_sprite.setStartAndEnd(12, 18);
		break;
	case 4:
		m_animation.jumping();
		m_animated_sprite.setStartAndEnd(7, 13);
		break;
	case 5:
		m_animation.swordsmanship();
		break;
	case 6:
		m_animation.shoveling();
		break;
	default:
		m_animation.idle();
		break;
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}