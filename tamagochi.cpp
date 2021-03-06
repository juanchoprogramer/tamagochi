#include <SFML/Graphics.hpp>
#include <iostream>
#include "juego.h"
int main()
{
	juego partida;
	int estaus=0,timer=0;
	sf::RenderWindow window(sf::VideoMode(1024, 480, 32), "Tamagotchi");
	window.setVerticalSyncEnabled(true);
	sf::Font font;
	if (!font.loadFromFile("sansation.ttf"))
	{
		return EXIT_FAILURE;
	}
	sf::Text texto;
	texto.setString("A=ALIMENTAR,S=GOLPEAR,W=DORMIR,D=BANIAR");
	texto.setFont(font);
	texto.setPosition(0, 400);
	texto.setCharacterSize(40);
	texto.setFillColor(sf::Color(0, 200, 0));
	texto.setStyle(sf::Text::Bold | sf::Text::Underlined);
	sf::Texture textura;
	sf::Sprite sprite;
	sprite.setTexture(textura);
	sprite.setTextureRect(sf::IntRect(0, 0, 300, 330));
	sprite.setPosition(512, 225);
	sf::Vector2f centro;
	centro.x = sprite.getTextureRect().width / 2.f;
	centro.y = sprite.getTextureRect().height / 2.f;
	sprite.setOrigin(centro);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			timer = 0;
			if (event.type == sf::Event::Closed)
				window.close();
			switch (event.type)
			{
			case sf::Event::EventType::KeyReleased:
				if (event.key.code == sf::Keyboard::A) {
					estaus = partida.setEstado(0);
					std::cout << "estado:" << estaus << std::endl;

				}
				if (event.key.code == sf::Keyboard::D) {
					estaus = partida.setEstado(1);
					std::cout << "estado:" << estaus << std::endl;

				}
				if (event.key.code == sf::Keyboard::W) {
					estaus = partida.setEstado(2);
					std::cout << "estado:" << estaus << std::endl;

				}
				if (event.key.code == sf::Keyboard::S) {
					estaus = partida.setEstado(3);
					std::cout << "estado:" << estaus << std::endl;
				}
				break;
			default:
				break;
			}
		}
		timer = timer + 1;
		if (timer == 1000) {
			estaus=estaus + 1;
			timer = 0;
		}
		if (estaus == 0) {
			if (!textura.loadFromFile("feliz.jpg"))
			{
				return EXIT_FAILURE;
			}
		}
		else if (estaus == 1) {
			if (!textura.loadFromFile("regular.jpg"))
			{
				return EXIT_FAILURE;
			}
		}
		else if (estaus == 2) {
			if (!textura.loadFromFile("triste.jpg"))
			{
				return EXIT_FAILURE;
			}
		}
		else if (estaus == 3) {
			if (!textura.loadFromFile("muerte.jpg"))
			{
				return EXIT_FAILURE;
			}
		}
		window.clear(sf::Color(180, 200, 255));
		window.draw(texto);
		window.draw(sprite);
		window.display();
	}

	return 0;
}