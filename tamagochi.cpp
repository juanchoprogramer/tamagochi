#include <SFML/Graphics.hpp>
#include <iostream>
#include "juego.h"
int main()
{
	/*
	sf::RenderWindow window(sf::VideoMode(600, 600), "La riata!");
	sf::CircleShape shape(50.f);
	shape.setFillColor(sf::Color(150,0,150));
	sf::CircleShape shape1(50.f);
	shape1.setFillColor(sf::Color(150, 0, 150));
	shape1.setPosition(100, 0);
	sf::CircleShape shape2(50.f);
	shape2.setFillColor(sf::Color(150, 0, 150));
	shape2.setPosition(200, 0);
	sf::CircleShape shape3(50.f);
	shape3.setFillColor(sf::Color(150, 0, 150));
	shape3.setPosition(300, 0);
	sf::CircleShape shape4(50.f);
	shape4.setFillColor(sf::Color(150, 0, 150));
	shape4.setPosition(400, 0);
	sf::CircleShape shape5(50.f);
	shape5.setFillColor(sf::Color(150, 0, 150));
	shape5.setPosition(500, 0);
	sf::RectangleShape figura(sf::Vector2f(60.f,10.f));
	figura.setFillColor(sf::Color::Blue);
	figura.setPosition(200, 400);
	sf::CircleShape PELOTITA(10.f);
	PELOTITA.setFillColor(sf::Color::White);
	PELOTITA.setPosition(500, 500);
	float click=0,click2=400;
	float posicionalto = 0, posicionlado = 0;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			std::cout << "dando vueltas";
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
				click = click - 10;
				if (click == 0)
					click = 600;
				figura.setPosition(click, click2);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
				click = click + 10;
				if (click >= 600)
					click = 0;
				figura.setPosition(click, click2);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
				click2 = click2 - 10;
				if (click2 <= 300)
					click2 = 600;
				figura.setPosition(click, click2);
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
				click2 = click2 + 10;
				if (click2 == 600)
					click2 = 300;
				figura.setPosition(click, click2);

			}
			posicionalto = posicionalto + 10;
			posicionlado = posicionlado + 10;
			PELOTITA.setPosition(posicionlado, posicionalto);
			if (posicionalto == 600 || posicionlado==600) {
				posicionalto = 100;
				posicionlado = 100;
			}
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.draw(shape1);
		window.draw(shape2);
		window.draw(shape3);
		window.draw(figura);
		window.draw(shape4);
		window.draw(shape5);
		window.draw(PELOTITA);
		window.display();
	}
	*/
	/*sf::RenderWindow window(sf::VideoMode(300, 300), "First practice");
	sf::String buffer;
	sf::RectangleShape figura(sf::Vector2f(60.f, 10.f));
	figura.setFillColor(sf::Color::Blue);
	figura.setPosition(2, 4);
	figura.setOutlineColor(sf::Color::Yellow);
	figura.setOutlineThickness(4);
	figura.setRotation(10);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (event.type==sf::Event::GainedFocus) {
				std::cout<<"atencion"<<std::endl;
			}
			if (event.type == sf::Event::LostFocus) {
				std::cout << "pausa" << std::endl;
			}
			if (event.type == sf::Event::MouseButtonPressed) {
				std::cout << "click" << std::endl;
			}
			if (event.type == sf::Event::MouseButtonReleased) {
				std::cout << "click liberado" << std::endl;
			}
			switch (event.type)
			{
				case sf::Event::EventType::TextEntered:
					buffer += event.text.unicode;
					break;
				case sf::Event::EventType::KeyReleased:
					if (event.key.code == sf::Keyboard::Key::Enter) {
						window.setTitle(buffer);
						buffer.clear();
					}
					break;
				default:
					break;
			}
		}
		window.draw(figura);

		window.display();

	}*/


	juego* tamagochi;
	tamagochi = new juego(800, 600);
	return 0;
}