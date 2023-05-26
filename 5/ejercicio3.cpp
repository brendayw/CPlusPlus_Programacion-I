/*Escribe un programa que ingrese 10 números y los almacene en un arreglo, estos deben ser {24, 5,
58, 100, 0, -8, 94, 96, -16, 105}. Luego, el programa debe ordenar los elementos del arreglo en orden
ascendente y mostrar el arreglo ordenado.*/

#include <iostream>

using namespace std;

const int nums = 10; // tamaño del array
typedef int tArreglos[nums]; //declaracion

//paso de arrays a subprograma
void ordenarArreglo(tArreglos arreglo, int tam) {

    for (int i = 1; i < tam; i++) {
        int key = arreglo[i];
        int j = i - 1;

        while (j >= 0 && arreglo[j] > key) {
            arreglo[j+1] = arreglo[j];
            j--;
        }

        arreglo[j + 1] = key;
    }
}

void mostrarArreglo(const tArreglos arreglo, int tam) {
    cout << "El arreglo ordenado es: ";
    for (int i=0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
    tArreglos arreglo = {24, 5, 58, 100, 0, -8, 94, 96, -16, 105}; //inicializacion

     //llama al subprograma para ordenar el arreglo
    ordenarArreglo(arreglo, nums);

    // Llamar al subprograma para mostrar el arreglo ordenado
    mostrarArreglo(arreglo, nums);

    return 0;
}


