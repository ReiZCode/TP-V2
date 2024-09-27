#pragma once
#include "Enemigo.h"
#include"Guardian.h"

class Recursos
{
protected:

	int x, y, ancho, alto;


public:

	Recursos() {

		ancho = 1;
		alto = 1;



	};


	void borrar() {

		Console::SetCursorPosition(x, y);
		cout << " ";

	}


	virtual void dibujar() {};



	int getY() { return y; }
	int getX() { return x; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }


};


