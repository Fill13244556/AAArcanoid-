#pragma once
#include "SFML/Graphics.hpp"
#include "bat.h"
#include "ball .h"
#include "settings .h"


void checkEvents(sf::RenderWindow& window, Ball& ball) {
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed)
			window.close();
		if (ball.shape.getPosition().y >= (WINDOW_HEIGHT - 2 * BALL_RADIUS))
		{

		}
	}
	/*if (ball.shape.getPosition().y <= WINDOW_HEIGHT) {
		window.close(); 
	}*/
}

void updateGame(Bat& bat, Ball& ball) {
	batControl(bat);
	batReboundEdges(bat);
	moveBall(ball);
	ballControl(ball, bat);
}



void drawGame(sf::RenderWindow& window, Bat& bat, Ball& ball) {
	window.clear();
	batDraw(window, bat);
	ballDraw(window, ball);
	window.display();
}
