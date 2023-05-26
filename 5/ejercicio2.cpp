/*Escribe un programa que ingrese 10 números y los almacene en un arreglo, estos deben ser {24, 5,
58, 100, 0, -8, 94, 96, -16, 105}. Luego, el programa debe pedirle al usuario que ingrese un número
para buscar en el arreglo. Si el número se encuentra en el arreglo, el programa debe mostrar la
posición en la que se encuentra. Si el número no está en el arreglo, el programa debe mostrar un
mensaje indicando que no se encontró.*/

#include <iostream>

using namespace std;

const int nums = 10; //tamaño del array
typedef int tArreglo[nums]; //declaracion del array

int busca(const tArreglo numeros, int num) {
    bool encontrado = false;
    int n = 0;

    while ((n < nums) && !encontrado) {
        if (numeros[n] == num) {
            encontrado = true;
        }
        else {
            n++;
        }
    }

    if (!encontrado) {
        n = -1;
    }

    return n;
}

int main() {
    
    tArreglo arreglo = { 24, 5, 58, 100, 0, -8, 94, 96, -16, 105}; // inicializacion

    int num;

    cout << "Ingrese un numero que desee encontrar" <<endl;
    cin>> num;

    int posicion = busca(arreglo, num);

    if (posicion != -1) {
        cout << "El numero se encuentra en la posicion: " << posicion + 1 <<endl;
    } else {
        cout << "Error, el numero no se encontro." <<endl; 
    }

    return 0;
}

    
