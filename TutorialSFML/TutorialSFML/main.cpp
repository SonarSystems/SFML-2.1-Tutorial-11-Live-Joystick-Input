#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode( 600, 600 ), "SFML WORK!" );

	while ( window.isOpen( ) )
	{
		sf::Event event;

		while ( window.pollEvent( event ) )
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		if (sf::Joystick::isConnected(0))
		{
			//std::cout << "Joystick is connected" << std::endl;
		}

		//std::cout << sf::Joystick::ButtonCount << std::endl;

		if (sf::Joystick::isButtonPressed(0, 1))
		{
			std::cout << "Button 1 is being pressed" << std::endl;
		}

		window.clear( );

		window.display( );
	}
}