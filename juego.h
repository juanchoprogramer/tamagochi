#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class juego
{
public:
	juego(int ancho, int alto);
	void gameLoop();
	void dibujar();

private:
	RenderWindow* ventana1;
	int fps;
	Texture* textura1;
	Sprite* sprite1;
};
