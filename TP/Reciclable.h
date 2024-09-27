#pragma once
#include "Recursos.h"

class Reciclable : public Recursos
{

public:
	Reciclable(int tx, int ty) {

		x = tx;
		y = ty;



	}
	void dibujar() {
		Console::ForegroundColor = ConsoleColor::DarkCyan;
		Console::SetCursorPosition(x, y); cout << "#";
	}

};

