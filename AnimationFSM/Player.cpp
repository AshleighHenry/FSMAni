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
		//std::cout << "Player Idling" << std::endl;
		m_animation.idle();
		break;
	case 1:
		//std::cout << "Player Up" << std::endl;
		//m_animation.hammering();
		break;
	case 2:
		//std::cout << "Player Left" << std::endl;
		m_animation.walking();
		// I FORGOT THE HAMMERING FILE NOW I KNOW WHY I DID SO BAD OH MY GOD 
		break;
	case 3:
		//std::cout << "Player Idling" << std::endl;
		m_animation.climbing();
		break;
	case 4:
		m_animation.jumping();
		break;
	case 5:
		m_animation.swordsmanship();
		break;
	case 6:
		m_animation.shoveling();
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