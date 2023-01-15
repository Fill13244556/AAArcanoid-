#pragma once
#include "SFML/Graphics.hpp"
#include "settings .h"

//textobj 

struct TextObj {
	sf::Font font; 
	sf::Text text; 
};
void initText(TextObj& textobj, int score) {
	textobj.font.loadFromFile("ds-digib.ttf");
	textobj.text.setString(std::to_string(score));
	textobj.text.setFont(textobj.font);
	textobj.text.setCharacterSize(Char_Size);
	textobj.text.setPosition(Text_Start_Pos);
}
void TextUpdate(TextObj& textobj, int score) {
	textobj.text.setString(std::to_string(score));
}
void TextDraw(sf::RenderWindow& window, const TextObj& textobj) {
	window.draw(textobj.text);
}

