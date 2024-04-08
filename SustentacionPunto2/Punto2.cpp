#include <iostream>
#include <list>
#include <time.h>
#include <random>
using namespace std;
//lista de frutas y comparar su posicion con el que ingresa el usuarioy si perdio o gano

//adviniar un numero de 3 cifras
class Frutas{

    public:
    string frutas [5] = {"Manzana", "Pera", "Durazno", "Uvas", "Arandano"};

    //Frutas();

    void busqueda(){
        string indice;
        int j = 0, cont = 0;

        cout << "Bienvenido, para ganar tienes que adivinar la fruta en el indice correcto" << endl;

        while (j < frutas->length()){
            
            cout << "Ingrese la fruta(Con la primera letra en mayuscula): " << endl;
            cin >> indice;
            
   
            if(indice == frutas[j]){

                cout << "La fruta Ingresada esta en la posicion correcta" << endl;
                cont ++;
            }
            else{

                cout << "La fruta ingresada esta en otra posicion" << endl;

            }

            j++;

        }

        if(cont == frutas->length()){

            cout << "Felicitaciones. Ganaste" << endl;

        }
        else{

            cout << "Lo sentimos. Perdiste" << endl;

        }
    }
};


class Numero{

    public:
    //srand(time(NULL));
    int numeroAleatorio = 99+ rand()% 999;
    int numero, counter = 20;

    //Numero();
    
    void jugar(){

        cout << "Bienvenido, el objetivo del juego es advinar un numero de 3 cifras.(100 hasta 999)" << endl;

        while(counter > 0){

            cout << "Tienes 20 intentos y te quedan: " << counter << endl;
            cout << "Ingrese el numero: " << endl;
            cin >> numero;

            if(numero > numeroAleatorio){

                cout << "El numero ingresado es mayor que el numero a adivinar" << endl;

            }
            else if (numero < numeroAleatorio){

                cout << "El numero ingresado es menor que el numero a adivinar" << endl;
            }
            else if(numero == numeroAleatorio){

                cout << "El numero ingresado es igual al numero a adivinar" << endl;
                cout << "Has ganado. Felicitaciones" << endl;
                break;
            }

            counter--;

        }

        if(counter == 20){

            cout << "Has perdido. Lo Sentimos" << endl;
        
        }

        

    }


};
