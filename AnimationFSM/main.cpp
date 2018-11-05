#include <iostream>
//#include <SFML/Graphics.hpp>
//#include <AnimatedSprite.h>
//#include <Player.h>
//#include <Input.h>
//#include <Debug.h>
#include <Animation.h>

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

	// can't go from climbing, swording, jumping to shoveling. shoveling is restricted to grounded movement. so idle and walking allowed
	// must sheath sword/hammer to bring out shovel(so move to idle if we pretend sheathing is included in the swording ani)
	fsm.shoveling();
	fsm.walking();
	fsm.shoveling();
	fsm.idle();


	

	system("pause");
	return 0;
};