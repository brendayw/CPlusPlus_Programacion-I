/*Crea un juego de adivinanzas numéricas. El programa debe tener las siguientes funciones:
    * generarNumeroAleatorio: Esta función genera y devuelve un número aleatorio dentro de un rango
    especificado 1 a 1000.
    * validarEntrada: Esta función recibe un número ingresado por el usuario y verifica si es válido (por
    ejemplo, si es un número dentro del rango establecido).
    * comprobarAdivinanza: Esta función recibe el número ingresado por el usuario y el número objetivo a
    adivinar, y devuelve un mensaje indicando si el usuario adivinó el número o si es mayor o menor que el
    objetivo.
El programa principal debe utilizar estas funciones para permitir que el usuario intente adivinar el
número objetivo. El juego debe proporcionar pistas al usuario indicando si el número ingresado es mayor
o menor que el número objetivo, hasta que el usuario adivine el número correcto*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarNumeroAleatorio();
void validarEntrada(int numAleatorio);
void comprobarAdivinanza(int numAleatorio, int numero);

int main() {

    int num, aleatorio;

    cout << "\t Jueguemos un juego " << endl;
    cout << "Adivina el numero" << endl;
   
    aleatorio = generarNumeroAleatorio();
    validarEntrada(aleatorio);

    return 0;
}

int generarNumeroAleatorio() {

    srand(time(NULL));

    return rand() % 1000 + 1;
}

void validarEntrada(int numAleatorio) {

    int numero;
    do {
        cout << "Ingresa un número entre 1 y 1000: ";
        cin >> numero;

        if (numero >= 1 && numero <= 1000) {
            comprobarAdivinanza(numAleatorio, numero);
        } else {
            cout << "El número ingresado no está dentro del rango válido." << endl;
        }
    } while (numero != numAleatorio);
}

void comprobarAdivinanza(int numAleatorio, int numero) {

    if (numero == numAleatorio) {
        cout << "¡Has adivinado el número!" << endl;
        cout << "¡Ganaste el juego! ¡FELICIDADES!" << endl;
    } else if (numero < numAleatorio) {
        cout << "El número ingresado es menor que el número a adivinar." << endl;
    } else {
        cout << "El número ingresado es mayor que el número a adivinar." << endl;
    }
}