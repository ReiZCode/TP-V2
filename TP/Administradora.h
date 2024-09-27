#pragma once
#include "Arbol.h"

class Administradora
{
private:
    Guardian* guardian;
    Enemigo** enemigos;
    Basura** basuras;
    Agua** aguas;
    Semilla** semillas;
    Arbol** arboles;

    int cantidad_arboles;
    int max_arboles = 100;
    int cantidad_recursos = 0;
    int max_recursos = 5;
    int cantidad_enemigos;
    int cantidad_basuras;
    int capacidad_basuras;
    int contador = 10;
    int recursosGuardian = 0;


public:

    Administradora(int n) {
        cantidad_enemigos = n;
        guardian = new Guardian(WIDTH / 2, HEIGHT / 2);
        enemigos = new Enemigo * [cantidad_enemigos];

        for (int i = 0; i < cantidad_enemigos; i++) {
            enemigos[i] = new Enemigo(rand() % 110 + 5, rand() % 25 + 5);
        }

        capacidad_basuras = 1;
        cantidad_basuras = 0;
        basuras = new Basura * [capacidad_basuras];

        aguas = new Agua * [max_recursos];
        semillas = new Semilla * [max_recursos];

        for (int i = 0; i < max_recursos; i++)
        {
            aguas[i] = nullptr;
            semillas[i] = nullptr;

        }

        arboles = new Arbol * [max_arboles];
        cantidad_arboles = 0;

    }

    //GUARDIAN METODOS

    void dibujarGuardian() {
        guardian->dibujar();
    }
    void moverGuardian(char tecla) {
        guardian->mover(tecla);
    }
    void borrarGuardian() {
        guardian->borrar();
    }

    int actualizarVidas() {
        return guardian->getVidas();
    }



    //ENEMIGOS METODOS


    void dibujarEnemigos() {
        for (int i = 0; i < cantidad_enemigos; i++) {
            enemigos[i]->dibujar();
        }
    }

    void moverEnemigos() {
        for (int i = 0; i < cantidad_enemigos; i++) {
            enemigos[i]->mover();
        }
    }

    void borrarEnemigos() {
        for (int i = 0; i < cantidad_enemigos; i++) {
            enemigos[i]->borrar();
        }
    }

    //CONTAMINACION METODOS

    void crearBasura() {
        for (int i = 0; i < cantidad_enemigos; i++) {

            int randomNum = rand() % 100 + 50;
            int randomNum2 = rand() % 10 + 1;

            if (contador % (randomNum + randomNum2) == 0) {

                if (cantidad_basuras == capacidad_basuras) {
                    capacidad_basuras *= 2;
                    Basura** nuevoArreglo = new Basura * [capacidad_basuras];
                    for (int j = 0; j < cantidad_basuras; j++) {
                        nuevoArreglo[j] = basuras[j];
                    }
                    delete[] basuras;
                    basuras = nuevoArreglo;
                }

                int x = enemigos[i]->getX();
                int y = enemigos[i]->getY();
                if (cantidad_basuras < capacidad_basuras) {
                    basuras[cantidad_basuras] = new Basura(x, y);
                    cantidad_basuras++;
                }
            }
        }
        contador++;
    }





    void dibujarBasura() {
        for (int i = 0; i < cantidad_basuras; i++) {
            basuras[i]->dibujar();
        }
    }

    void borrarBasura() {
        for (int i = 0; i < cantidad_basuras; i++) {
            basuras[i]->borrar();
        }
    }

    int actualizarBasura() {

        return cantidad_basuras;
    }


    //RECURSOS METODOS

    void craerRecursos() {



        if (cantidad_recursos < max_recursos) {
            int x_agua = rand() % 110 + 10;
            int y_agua = rand() % 15 + 5;

            int x_semilla = rand() % 110 + 10;
            int y_semilla = rand() % 15 + 5;




            aguas[cantidad_recursos] = new Agua(x_agua, y_agua);
            semillas[cantidad_recursos] = new Semilla(x_semilla, y_semilla);

            cantidad_recursos++;

        }


    }

    void dibujarRecursos() {

        for (int i = 0; i < cantidad_recursos; i++)
        {
            aguas[i]->dibujar();
            semillas[i]->dibujar();
        }

    }

    void borraRecursos() {
        for (int i = 0; i < cantidad_recursos; i++)
        {
            aguas[i]->borrar();
            semillas[i]->borrar();
        }

    }

    int mostrarRecursosJugador() {
        return recursosGuardian;
    }


    //ARBOLES METODOS

    void plantarArbol(int tecla) {
        ///TODO: Validar que exista almenos 1 agua y una semilla para poder plantar el arbol

        if (recursosGuardian >= 2 && cantidad_arboles < max_arboles) {
            // Crear un árbol en la posición actual del guardián
            int x_guardian = guardian->getX();
            int y_guardian = guardian->getY();

            arboles[cantidad_arboles] = new Arbol(x_guardian, y_guardian);
            cantidad_arboles++;

            // Reducir los recursos del guardián
            recursosGuardian -= 2;

            if (cantidad_basuras > 0) {
                basuras[0]->borrar();
                delete basuras[0];
                for (int i = 1; i < cantidad_basuras; i++) {
                    basuras[i - 1] = basuras[i];
                }
                cantidad_basuras--;
            }


        }
    }


    void dibujarArboles() {
        for (int i = 0; i < cantidad_arboles; i++) {
            arboles[i]->dibujar();
        }
    }

    void borrarArboles() {
        for (int i = 0; i < cantidad_arboles; i++) {
            arboles[i]->borrar();
        }
    }

    int actualizarArboles() {

        return cantidad_arboles;
    }

    //COLISIONES

    void colision_jugador_enemigo() {
        for (int i = 0; i < cantidad_enemigos; i++) {
            int x1 = enemigos[i]->getX();
            int y1 = enemigos[i]->getY();

            int x2 = guardian->getX();
            int y2 = guardian->getY();

            if (x1 == x2 && y1 == y2) {

                guardian->perderVidas();

            }
        }
    }

    void colision_jugador_recurso() {
        for (int i = 0; i < cantidad_recursos; i++) {
            if (semillas[i] != nullptr && aguas[i] != nullptr) {


                int x1 = semillas[i]->getX();
                int y1 = semillas[i]->getY();


                int x2 = guardian->getX();
                int y2 = guardian->getY();


                int x3 = aguas[i]->getX();
                int y3 = aguas[i]->getY();



                if (x1 == x2 && y1 == y2) {
                    recursosGuardian++;

                    semillas[i]->borrar();
                    delete semillas[i];


                    int x_nueva = rand() % 110 + 10;
                    int y_nueva = rand() % 25 + 5;
                    semillas[i] = new Semilla(x_nueva, y_nueva);
                }


                if (x3 == x2 && y3 == y2) {
                    recursosGuardian++;

                    aguas[i]->borrar();
                    delete aguas[i];


                    int x_nueva = rand() % 110 + 10;
                    int y_nueva = rand() % 25 + 5;
                    aguas[i] = new Agua(x_nueva, y_nueva);
                }



            }
        }
    }



};
