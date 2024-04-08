#include <iostream>
#include <list>
#include <time.h>
#include <random>
#include "Punto2.cpp"
using namespace std;
//lista de frutas y comparar su posicion con el que ingresa el usuarioy si perdio o gano

//adviniar un numero de 3 cifras


int main(){


    Frutas user;
    Numero user1;
    int opcion;
    cout << "Bienvenido" << endl << "Que juego desea jugar?" << endl << "1. Lista de frutas /2. Adivinar el numero" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        user.busqueda();
        break;
    
    case 2:
        user1.jugar();
        break;
    
    default:
        break;
    }
    
    return 0;

}