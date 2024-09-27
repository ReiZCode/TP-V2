#pragma once
#include "Personaje.h"

class Enemigo : public Personaje
{


public:

    Enemigo(int x_, int y_) {

        x = x_;
        y = y_;
        dx = (rand() % 2) ? 1 : -1;
        dy = (rand() % 2) ? 1 : -1;

    }

    void dibujar() {
        Console::ForegroundColor = ConsoleColor::Red;
        Console::SetCursorPosition(x, y);
        cout << "%";
    }

    void mover() {
        if (x + dx < 0 || x + dx + ancho > WIDTH) {
            dx *= -1;
        }
        if (y + dy < 3 || y + dy + alto > HEIGHT) {
            dy *= -1;
        }

        x += dx;
        y += dy;
    }


};
