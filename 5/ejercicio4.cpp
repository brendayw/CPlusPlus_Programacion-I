/*Escribir un programa que le pida al usuario ingresar una palabra de no mas de 10 letras, luego debe
llenar un arreglo con las letras de la palabra desde atrás hacia delante y en caso que queden huecos
en el arreglo debe llenarse con *. Luego mostrar en consola el contenido de dicho arreglo.
Ejemplo: Si se ingresa la palabra trabajo, el arreglo debe quedar de la siguiente manera ***ojabart.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    const int letras = 10;
    typedef char tPalabra[letras];
    tPalabra arreglo;

    string palabra, inversa = ""; 
    int posicion = 0; 
    char car;

    cout << "Escriba una palabra de hasta 10 letras" <<endl;
    cin >> palabra;

    while (posicion < palabra.size() && posicion < letras) {
        car = palabra.at(posicion);
        arreglo[letras - 1 - posicion] = car;
        posicion++;
    }

    //rellenar espacios con *
    while (posicion < letras) {
        arreglo[letras - 1 - posicion] = '*';
        posicion++;
    }

    //mostrar arreglo
    cout <<"El arreglo esta compuesto por:" <<endl;
    for (int i = 0; i < letras; i++) {
        cout << arreglo[i];
    }
    cout << endl;

    return 0;

}