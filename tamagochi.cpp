#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	// Crea una ventana de 640x480x32 con el título SFML window
	sf::RenderWindow window(sf::VideoMode(640, 480, 32), "SFML window");

	// Activa la sincronización vertical (60 fps)
	window.setVerticalSyncEnabled(true);

	// Creamos una textura
	sf::Texture textura;

	// Cargamos la textura desde un archivo
	if (!textura.loadFromFile("feliz.jpg"))
	{
		// Si hay un error salimos
		return EXIT_FAILURE;
	}

	// Creamos un sprite
	sf::Sprite sprite;
	// Asignamos la textura al sprite
	sprite.setTexture(textura);
	// Seleccionamos solo un rectangulo de la textura
	sprite.setTextureRect(sf::IntRect(0, 0, 300, 300));
	// Movemos el sprite
	sprite.setPosition(325, 225);
	// Cambiamos el origen al centro del sprite
	sf::Vector2f centro;
	centro.x = sprite.getTextureRect().width / 2.f;
	centro.y = sprite.getTextureRect().height / 2.f;
	sprite.setOrigin(centro);



	// Game Loop mientras la ventana esté abierta
	while (window.isOpen())
	{
		// Creamos un objeto evento
		sf::Event event;
		// Procesamos la pila de eventos
		while (window.pollEvent(event))
		{
			// Si el evento es de tipo Closed cerramos la ventana
			if (event.type == sf::Event::Closed)
				window.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
				if (!textura.loadFromFile("feliz.jpg"))
				{
					// Si hay un error salimos
					return EXIT_FAILURE;
				}
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
				if (!textura.loadFromFile("regular.jpg"))
				{
					// Si hay un error salimos
					return EXIT_FAILURE;
				}
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
				if (!textura.loadFromFile("muerte.jpg"))
				{
					// Si hay un error salimos
					return EXIT_FAILURE;
				}
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
				if (!textura.loadFromFile("triste.jpg"))
				{
					// Si hay un error salimos
					return EXIT_FAILURE;
				}
			}
		}

		// Limpiamos la pantalla
		window.clear(sf::Color(180, 200, 255));

		// Dibujamos en pantalla
		window.draw(sprite);

		// Actualizamos la ventana
		window.display();
	}

	return 0;
}