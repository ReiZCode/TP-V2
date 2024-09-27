#pragma once
#include "Personaje.h"


class Guardian : public Personaje {

private:
    int vidas, puntos;

public:
    Guardian(int x_, int y_) {
        x = x_;
        y = y_;
        dx = 0;
        dy = 0;
        vidas = 3;
        puntos = 0;


    }


    void dibujar() {
        Console::ForegroundColor = ConsoleColor::Green;
        Console::SetCursorPosition(x, y);
        cout << "@";
    }


    void mover(int tecla) {

        dx = 0;
        dy = 0;

        switch (tecla) {
        case izquierda: dx = -1; dy = 0; break;
        case derecha:  dx = 1; dy = 0; break;
        case arriba:dx = 0;   dy = -1; break;
        case abajo: dx = 0;   dy = 1;  break;
        }

        //cuida los margenes
        if (x + dx >= 0 && x + dx + ancho < WIDTH) {
            x += dx;
        }
        if (y + dy >= 3 && y + dy + alto < HEIGHT) {
            y += dy;
        }


    }

    int getPuntos() { return puntos; }
    int getVidas() { return vidas; }
    void perderVidas() { vidas--; }
    void ganarVidas() { vidas++; }
    void ganarPuntos() { puntos += 100; }
};
