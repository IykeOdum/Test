#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

int main(void) {

	sf::RenderWindow window(sf::VideoMode({ 200, 200 }), "SFML Works!");
	sf::CircleShape shape(100.f);

	shape.setFillColor(sf::Color::Green);

	while (window.isOpen()) {

		while (const std::optional event = window.pollEvent()) {
			
			if (event->is<sf::Event::Closed>()) {
				window.close();
			}
		}

		window.clear();
		window.draw(shape);
		window.display();
	}
	return 0;
}