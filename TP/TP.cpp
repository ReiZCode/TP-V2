#include "pch.h"
#include "Administradora.h"
#include "Pantallas.h"

using namespace System;

int main()
{
    srand(time(NULL));
    Console::SetWindowSize(WIDTH, HEIGHT);
    Console::CursorVisible = false;
    Pantallas* p = new Pantallas();
    int cantidad_enemigos;
    cantidad_enemigos = p->pantallaInicio();


    system("cls");
    Administradora* a = new Administradora(cantidad_enemigos);

    int cont_recursos = 0;
    int contador = 50;
    int vidas;
    int basuras;
    int recursos;
    int arboles;




    do {
        arboles = a->actualizarArboles();
        recursos = a->mostrarRecursosJugador();
        basuras = a->actualizarBasura();
        vidas = a->actualizarVidas();

        //muestra la barra de resultados
        p->pantallaResultados(vidas, basuras, recursos, arboles);


        a->borraRecursos();
        a->borrarGuardian();
        a->borrarEnemigos();
        a->borrarBasura();
        a->borrarArboles();




        a->moverEnemigos();


        if (contador % 21 == 0) {
            a->craerRecursos();
        }

        if (kbhit()) {
            int tecla = getch();


            a->moverGuardian(tecla);
            if (tecla == 97) {
                a->plantarArbol(tecla);
            }

        }


        a->crearBasura();
        contador++;


        a->dibujarRecursos();
        a->dibujarGuardian();
        a->dibujarEnemigos();
        a->dibujarBasura();
        a->dibujarArboles();


        a->colision_jugador_enemigo();
        a->colision_jugador_recurso();


        if (vidas <= 0) {
            //perdiste
            system("cls");
            p->pantallaPerdiste();
            system("pause>0");

        }

        if (basuras >= 14 && basuras > arboles) {
            //Perdiste
            system("cls");
            p->pantallaPerdiste();
            system("pause>0");
        }

        if (arboles >= 3 && arboles > basuras) {
            system("cls");
            p->pantallaGanaste();
            system("pause>0");
        }

        Sleep(50);
    } while (true);
    system("pause>0");

    return 0;
}
