#pragma once
#include "Recursos.h"

class Agua : public Recursos
{

public:
	Agua(int tx, int ty) {

		x = tx;
		y = ty;



	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor::Blue;
		Console::SetCursorPosition(x, y); cout << "~";
	}

};

