/*Escribe una función que reciba un arreglo de enteros y devuelva el promedio de sus elementos.*/

#include <iostream>
using namespace std;


double promedio(int arreglo[], int tam);

int main() {

    int cant;
    cout << "Ingrese la cantidad de numeros que tendra el arreglo: ";
    cin >> cant;

    int arr[cant];
    cout << "Ingrese los numeros que tendrá:" <<endl;
    for (int i=0; i < cant; i++) {
        cin>> arr[i];
    }

    cout << "El promedio de los numeros del arreglo es: " << promedio(arr, cant) <<endl;

    return 0;
}

double promedio(int arreglo[], int tam) {

    double promedio = 0, suma = 0;

    for (int i =0; i < tam; i++) {

        suma += arreglo[i];
    }

    promedio = suma/tam;

    return promedio;
}
