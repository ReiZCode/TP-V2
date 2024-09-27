#pragma once
#include <iostream>
#include <windows.h>

using namespace std;
using namespace System;




class Pantallas
{
public:


    int pantallaInicio() {
        int opcion;
        int enemigos;
        //char* textotutorial = "\n\n\n\n\n\t\tEl juego trata de reforestar el entorno, restaurar la flora y fauna mientras se combate\t\t\n  contra la contaminacion. El personaje principal asume el papel de guardian del medio ambiente, tu objetivo es \n\trestaurar este ecosistema, plantando arboles, recolectando semillas y agua eliminando la basura\n\t\t\t\t\t que contamina el entorno\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t  Muevete con W A S D\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPulsa cualquier tecla para continuar...";
        //char* textocreditos = "\n\n\n\n\t1.Oscar Alatrista \n\n\t2.Leandro Arevalo\n\n\t3.Joseph Zamalloa";
        //char* textocontinuar="\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPulsa una tecla para continuar...";
        do {
            Console::SetCursorPosition(0, 5);
            cout << "\t\t\t\t\t\t\tBIENVENIDO A " << endl;
            Console::ForegroundColor = ConsoleColor::Green;
            cout << " _______  ______    _______  _______  __    _    _______  __   __  _______  ______    ______   ___   _______  __    _ " << endl;
            cout << "|       ||    _ |  |       ||       ||  |  | |  |       ||  | |  ||   _   ||    _ |  |      | |   | |   _   ||  |  | |" << endl;
            cout << "|    ___||   | ||  |    ___||    ___||   |_| |  |    ___||  | |  ||  |_|  ||   | ||  |  _    ||   | |  |_|  ||   |_| |" << endl;
            cout << "|   | __ |   |_||_ |   |___ |   |___ |       |  |   | __ |  |_|  ||       ||   |_||_ | | |   ||   | |       ||       |" << endl;
            cout << "|   ||  ||    __  ||    ___||    ___||  _    |  |   ||  ||       ||       ||    __  || |_|   ||   | |       ||  _    |" << endl;
            cout << "|   |_| ||   |  | ||   |___ |   |___ | | |   |  |   |_| ||       ||   _   ||   |  | ||       ||   | |   _   || | |   |" << endl;
            cout << "|_______||___|  |_||_______||_______||_|  |__|  |_______||_______||__| |__||___|  |_||______| |___| |__| |__||_|  |__|" << endl;
            Console::ForegroundColor = ConsoleColor::Blue;
            cout << " ";
            cout << "\n\n\t\t\t\t\t\t"; cout << char(201) << char(205) << char(205) << char(205) << char(205)
                << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
                << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
                << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
            cout << "\t\t\t\t\t\t"; cout << char(186); Console::ForegroundColor = ConsoleColor::Cyan; cout << char(178) << char(178) << char(178) << char(178) << char(178) << char(178); Console::ForegroundColor = ConsoleColor::Yellow; cout << " G R E E N ";
            Console::ForegroundColor = ConsoleColor::Cyan; cout << char(178) << char(178) << char(178) << char(178) << char(178); Console::ForegroundColor = ConsoleColor::Blue; cout << char(186) << endl;
            cout << "\t\t\t\t\t\t"; cout << char(186); Console::ForegroundColor = ConsoleColor::Cyan; cout << char(178); Console::ForegroundColor = ConsoleColor::Yellow; cout << "  G U A R D I A N   ";
            Console::ForegroundColor = ConsoleColor::Cyan; cout << char(178); Console::ForegroundColor = ConsoleColor::Blue; cout << char(186) << endl;
            cout << "\t\t\t\t\t\t"; cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
                << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
                << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185) << endl;
            cout << "\t\t\t\t\t\t"; Console::ForegroundColor = ConsoleColor::Blue; cout << char(186); Console::ForegroundColor = ConsoleColor::Yellow; cout << " 1.";
            Console::ForegroundColor = ConsoleColor::Cyan; cout << " Jugar             "; Console::ForegroundColor = ConsoleColor::Blue; cout << char(186) << endl;
            cout << "\t\t\t\t\t\t"; Console::ForegroundColor = ConsoleColor::Blue; cout << char(186); Console::ForegroundColor = ConsoleColor::Yellow; cout << "  2.";
            Console::ForegroundColor = ConsoleColor::Cyan; cout << " Tutorial         "; Console::ForegroundColor = ConsoleColor::Blue; cout << char(186) << endl;
            cout << "\t\t\t\t\t\t"; Console::ForegroundColor = ConsoleColor::Blue; cout << char(186); Console::ForegroundColor = ConsoleColor::Yellow; cout << "   3.";
            Console::ForegroundColor = ConsoleColor::Cyan; cout << " Creditos        "; Console::ForegroundColor = ConsoleColor::Blue; cout << char(186) << endl;
            cout << "\t\t\t\t\t\t"; Console::ForegroundColor = ConsoleColor::Blue; cout << char(186); Console::ForegroundColor = ConsoleColor::Yellow; cout << "    4.";
            Console::ForegroundColor = ConsoleColor::Cyan; cout << " Salir          "; Console::ForegroundColor = ConsoleColor::Blue; cout << char(186) << endl;
            cout << "\t\t\t\t\t\t"; Console::ForegroundColor = ConsoleColor::Blue; cout << char(186); Console::ForegroundColor = ConsoleColor::Yellow; cout << "        ";
            Console::ForegroundColor = ConsoleColor::Cyan; cout << "              "; Console::ForegroundColor = ConsoleColor::Blue; cout << char(186) << endl;
            Console::ForegroundColor = ConsoleColor::Blue;
            cout << "\t\t\t\t\t\t"; cout << char(200) << char(205) << char(205) << char(205) << char(205)
                << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
                << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
                << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
            cout << "\n\n\n";
            Console::ForegroundColor = ConsoleColor::DarkMagenta;
            cout << "\t\t\t\t\t\t\############" << endl;
            Console::ForegroundColor = ConsoleColor::Magenta;
            cout << "\t\t\t\t\t\t\Ingrese una opcion: "; cin >> opcion;



            char* textocontinuar = "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPulsa una tecla para continuar...";
            if (opcion == 1) {
                cout << "\n\n\n\n\n";
                system("cls");
                break;
            }
            else if (opcion == 2) {
                Console::ForegroundColor = ConsoleColor::White;
                char* textotutorial = "\n\n\t\tEl juego trata de reforestar el entorno, restaurar la flora y fauna mientras se combate\t\t\n  contra la contaminacion. El personaje principal asume el papel de guardian del medio ambiente, tu objetivo es \n\trestaurar este ecosistema, plantando arboles, recolectando semillas y agua eliminando la basura\n\t\t\t\t\t que contamina el entorno\n\n\n\n\n\n  Muevete con las flechas direccionales, cuando tengas 2 recursos (agua, semilla) pulsa A para plantar un arbol!";
                system("cls");
                while (*textotutorial) {
                    cout << *textotutorial++;
                    _sleep(15);
                }
                cout << endl << endl;
                Console::ForegroundColor = ConsoleColor::Yellow;
                cout << "\n\n\t\t\t\t\t\tLeyenda del Juego" << endl;
                Console::ForegroundColor = ConsoleColor::Gray;
                cout << "\t\t\t\t\t\t-----------------" << endl; Console::ForegroundColor = ConsoleColor::DarkGray;
                cout << "\t\t\t\t\t\tAgua:      "; Console::ForegroundColor = ConsoleColor::Blue; cout << "~" << endl; Console::ForegroundColor = ConsoleColor::DarkGray;
                cout << "\t\t\t\t\t\tBasura:    "; Console::ForegroundColor = ConsoleColor::White; cout << "%" << endl; Console::ForegroundColor = ConsoleColor::DarkGray;
                cout << "\t\t\t\t\t\tEnemigo:   "; Console::ForegroundColor = ConsoleColor::Red; cout << "X" << endl; Console::ForegroundColor = ConsoleColor::DarkGray;
                cout << "\t\t\t\t\t\tSemilla:   "; Console::ForegroundColor = ConsoleColor::DarkYellow; cout << "*" << endl; Console::ForegroundColor = ConsoleColor::DarkGray;
                cout << "\t\t\t\t\t\tGuardian:  "; Console::ForegroundColor = ConsoleColor::Green; cout << "@" << endl;
                Console::ForegroundColor = ConsoleColor::Gray;
                cout << "\t\t\t\t\t\t-----------------" << endl;
                while (*textocontinuar) {
                    cout << *textocontinuar++;
                    _sleep(15);
                }
                system("pause>0");
                system("cls");
            }
            else if (opcion == 3) {
                system("cls");
                char* textocreditos = "\n\n\n\n\t1.Oscar Alatrista \n\n\t2.Leandro Arevalo\n\n\t3.Joseph Zamalloa";
                Console::ForegroundColor = ConsoleColor::White;
                while (*textocreditos) {
                    cout << *textocreditos++;
                    _sleep(15);
                }

                Console::ForegroundColor = ConsoleColor::DarkRed;
                cout << "\n\n\t\t\t\t           #";
                cout << "\n\t\t\t\t          ##.";
                cout << "\n\t\t\t\t     #    ####.        #";
                cout << "\n\t\t\t\t   .#     .######       #.";
                cout << "\n\t\t\t\t   ##      #######      ##";
                cout << "\n\t\t\t\t   ###       #####.    ###";
                cout << "\n\t\t\t\t   ####        ###    ####";
                cout << "\n\t\t\t\t    ######     #   ######";
                cout << "\n\t\t\t\t      #################";
                cout << "\n\t\t\t\t         ###########\n";

                Console::ForegroundColor = ConsoleColor::White;
                while (*textocontinuar) {
                    cout << *textocontinuar++;
                    _sleep(15);
                }
                system("pause>0");
                system("cls");

            }
            else {

                Console::ForegroundColor = ConsoleColor::Red;
                cout << "\a\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                cout << "\t\t\t\tOpcion invalida. Por favor, ingrese un numero valido." << endl;
                cout << "\t\t\t\tXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
                Console::ForegroundColor = ConsoleColor::White;
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPulsa una tecla para continuar...";
                system("pause>0");
                system("cls");
            }

        } while (true);

        Console::ForegroundColor = ConsoleColor::White;
        cout << "\n\n\n\n\t\t\t\t\t  Ingresa la cantidad de enemigos para jugar: " << endl;
        cout << "\n\n\t\t\t\t\t\t\t\t";
        cin >> enemigos;

        return enemigos;
    }


    void pantallaResultados(int vidas, int basuras, int recursos, int arboles) {
        Console::ForegroundColor = ConsoleColor::Green;
        Console::SetCursorPosition(0, 1);
        cout << " VIDAS : ( " << vidas << " )  ";
        Console::ForegroundColor = ConsoleColor::White;
        cout << " |";
        Console::ForegroundColor = ConsoleColor::Blue;
        cout << " RECURSOS: ( " << recursos << " )  ";
        Console::ForegroundColor = ConsoleColor::White;
        cout << " |";
        Console::ForegroundColor = ConsoleColor::Yellow;
        cout << " ARBOLES PLANTADOS:( " << arboles << " )  ";
        Console::ForegroundColor = ConsoleColor::White;
        cout << " |";
        Console::ForegroundColor = ConsoleColor::DarkRed;
        cout << " CONTAMINACION: ( " << basuras << " )  " << endl;
        Console::ForegroundColor = ConsoleColor::White;
        cout << "========================================================================================================================";
    }

    void pantallaGanaste() {
        Console::Clear();
        Console::ForegroundColor = ConsoleColor::DarkYellow;
        cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t_  _   _   _ _    _    _ _ _  __" << endl;
        cout << "\t\t\t\t\\\\//  // \\\\  || ||    ||    || || ||\\ ||" << endl;
        cout << "\t\t\t\t )/  ((   )) || ||    \\\\ /\\ // || ||\\\\||" << endl;
        cout << "\t\t\t\t//    \\\\//    \\\\//     \\V/\\V/  || || \\||" << endl;
        cout << "\t\t\t\t-      ---    - -       -  -   -- --  --" << endl;

    }

    void pantallaPerdiste() {
        Console::Clear();
        Console::ForegroundColor = ConsoleColor::DarkRed;
        cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t GGGG   AAAA  M   M  EEEEE       OOO   V   V  EEEEE  RRRR " << endl;;
        cout << "\t\t\t\tG      A    A MM MM  E          O   O  V   V  E      R   R" << endl;
        cout << "\t\t\t\tG  GGG AAAAAA M M M  EEEE       O   O  V   V  EEEE   RRRR " << endl;
        cout << "\t\t\t\tG    G A    A M   M  E          O   O  V   V  E      R  R " << endl;
        cout << "\t\t\t\t GGGG  A    A M   M  EEEEE       OOO    VVV   EEEEE  R   R" << endl;

    }



};