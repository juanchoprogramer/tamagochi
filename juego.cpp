#include "juego.h"
juego::juego(int ancho, int alto)
{
	fps = 1;
	ventana1 = new RenderWindow(VideoMode(ancho, alto), "tamagotchi");
	ventana1->setFramerateLimit(fps);
	textura1 = new Texture;
	sprite1 = new Sprite;

	gameLoop();
}

void juego::gameLoop()
{
	while (ventana1->isOpen())
	{
		dibujar();
	}
}

void juego::dibujar()
{

	ventana1->clear();
	textura1->loadFromFile("feliz.jpg");
	sprite1->setTexture(*textura1);
	ventana1->draw(*sprite1);
	ventana1->display();
}