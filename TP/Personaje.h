#pragma once
#include <conio.h>
#include <iostream>
#include <windows.h>


#define WIDTH 120
#define HEIGHT 30

#define derecha 77
#define izquierda 75
#define arriba 72
#define abajo 80

using namespace std;
using namespace System;


class Personaje
{
protected:
    int x, y, dx, dy, ancho, alto;



public:

    Personaje() {
        ancho = 1;
        alto = 1;
    }

    virtual void dibujar() {
    }

    virtual void mover() {
    }

    void borrar() {

        Console::SetCursorPosition(x, y);
        cout << " ";
    }


    int getX() { return x; }
    int getY() { return y; }
    int getDX() { return dx; }
    int getDY() { return dy; }
    int getHEIGHT() { return alto; }
    int getWIDTH() { return ancho; }


};

