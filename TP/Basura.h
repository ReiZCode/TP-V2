#pragma once
#include "Semilla.h"
#include "Agua.h"
#include "Reciclable.h"
class Basura
{
private:

	int x, y, ancho, alto;



public:

	Basura(int x_, int y_) {
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
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(x, y); cout << "%";


	};


	int getY() { return y; }
	int getX() { return x; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }



};


