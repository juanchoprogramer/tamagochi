#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class juego
{
public:
	juego();
	int setEstado(int valor);

private:
	int estadoActual, estadoInicial[4][4],estado;
};
