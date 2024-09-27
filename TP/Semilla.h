#pragma once
#include "Recursos.h"

class Semilla : public Recursos
{

public:
	Semilla(int tx, int ty) {

		x = tx;
		y = ty;


	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor::DarkYellow;
		Console::SetCursorPosition(x, y); cout << "*";
	}

};

