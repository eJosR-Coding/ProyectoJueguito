#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

void mostrarDados(int num) {
    switch (num) {
    case 1:
        cout << endl << "    +--------------+  ";
        cout << endl << "  /               /|";
        cout << endl << " +---------------+ |";
        cout << endl << " |               | |";
        cout << endl << " |               | |";
        cout << endl << " |       *       | |";
        cout << endl << " |               | | ";
        cout << endl << " |               |/";
        cout << endl << " +---------------+";
        break;
    case 2:
        cout << endl << "    +--------------+  ";
        cout << endl << "  /               /|";
        cout << endl << " +---------------+ |";
        cout << endl << " |  *            | |";
        cout << endl << " |               | |";
        cout << endl << " |               | |";
        cout << endl << " |               | | ";
        cout << endl << " |            *  |/";
        cout << endl << " +---------------+";
        break;
    case 3:
        cout << endl << "    +--------------+  ";
        cout << endl << "  /               /|";
        cout << endl << " +---------------+ |";
        cout << endl << " |  *            | |";
        cout << endl << " |               | |";
        cout << endl << " |       *       | |";
        cout << endl << " |               | | ";
        cout << endl << " |            *  |/";
        cout << endl << " +---------------+";
        break;
    case 4:
        cout << endl << "    +--------------+  ";
        cout << endl << "  /               /|";
        cout << endl << " +---------------+ |";
        cout << endl << " |  *         *  | |";
        cout << endl << " |               | |";
        cout << endl << " |               | |";
        cout << endl << " |               | | ";
        cout << endl << " |  *         *  |/";
        cout << endl << " +---------------+";
        break;
    case 5:
        cout << endl << "    +--------------+  ";
        cout << endl << "  /               /|";
        cout << endl << " +---------------+ |";
        cout << endl << " |  *         *  | |";
        cout << endl << " |               | |";
        cout << endl << " |       *       | |";
        cout << endl << " |               | | ";
        cout << endl << " |  *         *  |/";
        cout << endl << " +---------------+";
        break;
    case 6:
        cout << endl << "    +--------------+  ";
        cout << endl << "  /               /|";
        cout << endl << " +---------------+ |";
        cout << endl << " |  *         *  | |";
        cout << endl << " |               | |";
        cout << endl << " |  *         *  | |";
        cout << endl << " |               | | ";
        cout << endl << " |  *         *  |/";
        cout << endl << " +---------------+";
        break;
    }
}

int randomice(int dado) {
    dado = rand() % (6) + 1;
    return dado;
}
void menu()
{
    cout << "Juego de dados" << endl;
    cout << "******************" << endl;
    cout << endl << "    +--------------+  ";
    cout << endl << "  /               /|";
    cout << endl << " +---------------+ |"  ;
    cout << endl << " |  *         *  | |";
    cout << endl << " |               | |";
    cout << endl << " |  *         *  | |";
    cout << endl << " |               | | ";
    cout << endl << " |  *         *  |/";
    cout << endl << " +---------------+";
}

void instrucciones(){
    cout << "¡Bienvenido al juego de dados!" << endl << endl;
    cout << "Para comenzar a jugar, un jugador debe iniciar una partida y lanzar los dados. " << endl;
    cout << "El valor del producto se obtiene multiplicando los valores de los resultados obtenidos por los dados." << endl;
    cout << "Después, el computador iniciará su partida y lanzará los dados para obtener su propio valor de producto." << endl << endl;
    cout << "¿Listo para comenzar? ¡Que empiece la diversión!" << endl;
}
int main()
{menu();
    srand(time(0));
    //Variables
    int dados = 3;
    int dado1, dado2, dado3;
    int i = 0;
    int jugadas = 10;
    int j1, j2, j3, j4, j5, j6, j7, j8, j9, j10;
    int puntuajefinaljg, puntuajefinalpc, puntajejg, puntajepc;
    int partida=1;
    
    int opcion;
    //Mostrar menu
    cout << "\n Elija una opcion: " << endl;
    cout << "1-Jugar" << endl;
    cout << "2-Instrucciones" << endl;
    cout << "3-Salir" << endl;
    cin >> opcion;
    //condicional

     
    switch (opcion) 
    {
        case 1:
            
            while (dados>0 && jugadas>0) {
            cout << "Es tu turno de tirar los dados" << endl;
            dado1 = randomice(dado1);
            dado2 = randomice(dado2);
            dado3 = randomice(dado3);
            puntajejg = dado1 * dado2 * dado3;
            mostrarDados(dado1);
            mostrarDados(dado2);
            mostrarDados(dado3);
            cout << "Tu puntaje de esta ronda es: " << puntajejg << endl;

            jugadas--;
            }


            break;
        case 2:
        cout << "Instrucciones de juego:  ";
        instrucciones();
        menu(); cin >> opcion;
        break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Ingrese un numero de las opciones" <<endl;
            break;
    }
    

    
    return 0;
}


