#include "juego.h"
juego::juego()
{
	estadoActual = 1;
	estadoInicial[0][0] = 0;
	estadoInicial[0][1] = 0;
	estadoInicial[0][2] = 1;
	estadoInicial[0][3] = 3;
	estadoInicial[1][0] = 0;
	estadoInicial[1][1] = 0;
	estadoInicial[1][2] = 1;
	estadoInicial[1][3] = 3;
	estadoInicial[2][0] = 0;
	estadoInicial[2][1] = 0;
	estadoInicial[2][2] = 1;
	estadoInicial[2][3] = 3; 
	estadoInicial[3][0] = 1;
	estadoInicial[3][1] = 2;
	estadoInicial[3][2] = 3;
	estadoInicial[3][3] = 3;

	estado = 1;
}

int juego::setEstado(int valor)
{
	estado = estadoInicial[valor][estadoActual];
	estadoActual = estado;
	return estado;
}

