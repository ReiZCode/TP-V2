#pragma once
#include "Basura.h"


class Arbol
{
protected:

	int x, y, ancho, alto;



public:

	Arbol(int x_, int y_) {

		x = x_;
		y = y_;
		ancho = 1;
		alto = 1;



	};


	void borrar() {

		Console::SetCursorPosition(x, y);
		cout << " ";

	}


	void dibujar() {
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(x, y);
		cout << "O";
	}



	int getY() { return y; }
	int getX() { return x; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }

};

