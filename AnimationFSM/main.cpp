#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

using namespace std;

int main()
{
	
	Animation fsm;
	fsm.idle();
	fsm.jumping(); // should output idle to jumping
	
	fsm.walking();
	fsm.jumping();
	fsm.jumping();
	fsm.climbing();
	fsm.climbing();
	fsm.walking();
	fsm.climbing();
	fsm.idle();
	
	fsm.walking();
	fsm.walking();
	
	fsm.idle();
	// swording
	fsm.swordsmanship();
	fsm.jumping();
	fsm.swordsmanship();
	fsm.walking();
	fsm.swordsmanship();
	fsm.climbing();
	fsm.swordsmanship();
	fsm.idle();

	fsm.shoveling();
	fsm.walking();
	fsm.shoveling();
	fsm.idle();
	

	system("pause");
	return 0;
};