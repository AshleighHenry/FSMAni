

#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>
#include <Animation.h>
using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);

	animated_sprite.addFrame(sf::IntRect(3, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 3, 84, 84));

	// jump
	animated_sprite.addFrame(sf::IntRect(3, 88, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 88, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 88, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 88, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 88, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 88, 84, 84));

	// climbing
	animated_sprite.addFrame(sf::IntRect(3, 173, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 173, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 173, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 173, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 173, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 173, 84, 84));

	// shoveling
	animated_sprite.addFrame(sf::IntRect(3, 258, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 258, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 258, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 258, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 258, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 258, 84, 84));

	// walki
	animated_sprite.addFrame(sf::IntRect(3, 343, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 343, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 343, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 343, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 343, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 343, 84, 84));

	// swording
	animated_sprite.addFrame(sf::IntRect(3, 428, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 428, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 428, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 428, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 428, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 428, 84, 84));





	// Setup the Player
	Player player(animated_sprite);
	Input input;

	Animation fsm;
	


	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			input.keyPressEvent(event);
			
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();
		switch (input.getCurrent())
		{
		case 0:
			animated_sprite.setStartAndEnd(1, 7);
			break;
		case 1:
			animated_sprite.setStartAndEnd(22, 28);
			break;
		case 2:
			//animated_sprite.setStartAndEnd(29, 35); // walking
			break;
		default:
			break;
		}
		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		// Update the window
		window.display();
	}

	system("pause");
	return 0;
};
// Start the game loop

