#include <iostream>
#include <list>
#include <random>
using namespace std;

class Frutas{

    public:
    string frutas [5] = {"Manzana", "Pera", "Durazno", "Uvas", "Arandano"}; // define una array con frutas

    //Frutas(); para ejecutar el constructor nesecita parametros

    void busqueda(){
        string indice;
        int j = 0, cont = 0;

        cout << "Bienvenido, para ganar tienes que adivinar la fruta en el indice correcto" << endl;

        while (j < 5){ // compara el contador con la longitud del array
            
            cout << "Ingrese la fruta(Con la primera letra en mayuscula): " << endl;
            cin >> indice;
            
   
            if(indice == frutas[j]){

                cout << "La fruta Ingresada esta en la posicion correcta" << endl;
                cont ++; 
                // si la fruta ingresada es igual a la posicion agrega uno al contador
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

    int numeroAleatorio = 99+ rand()% 999;
    int numero, counter = 20;

    //Numero(); para ejecutar el constructor nesecita parametros
    
    void jugar(){

        cout << "Bienvenido, el objetivo del juego es advinar un numero de 3 cifras.(100 hasta 999)" << endl;

        while(counter > 0){ // mientrsa counter sea menor a 20 se ejecuta

            cout << "Tienes 20 intentos y te quedan: " << counter << endl;
            cout << "Ingrese el numero: " << endl;
            cin >> numero;

            if(numero > numeroAleatorio){ // compara el num ingresado con el aletorio

                cout << "El numero ingresado es mayor que el numero a adivinar" << endl;

            }
            else if (numero < numeroAleatorio){

                cout << "El numero ingresado es menor que el numero a adivinar" << endl;
            }
            else if(numero == numeroAleatorio){ // si es igual se avisa al usuario y se sale

                cout << "El numero ingresado es igual al numero a adivinar" << endl;
                cout << "Has ganado. Felicitaciones" << endl;
                break;
            }

            counter--;

        }

        if(counter == 0){ // si counter llega a 0 se sale

            cout << "Has perdido. Lo Sentimos" << endl;
        
        }

        

    }


};
