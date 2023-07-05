#include <iostream>
using namespace std;

int SumaArreglo(int arreglo[], int tam, int suma);

int main() {

    int tam;
    cout << "Ingrese la cantidad de numeros a sumar: ";
    cin >> tam;

    int arr[tam];

    cout << "Ahora ingrese los numeros a sumar: " << endl;
    for (int i = 0; i < tam; i++) {
        cin >> arr[i];
    }

    int sum;
    cout << "La suma de los numeros del arreglo es: " << SumaArreglo(arr, tam, sum) << endl;

    return 0;
}

int SumaArreglo(int arreglo[], int tam, int suma) {

    suma = 0;

    for (int i =0; i < tam; i++) {
        suma += arreglo[i];
    }

    return suma;
}


