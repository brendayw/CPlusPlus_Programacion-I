/*Implementa una función que reciba un arreglo de enteros y calcule la suma de todos sus elementos*/

#include <iostream>
using namespace std;

int arregloSuma(int arreglo[], int tam);

int main() {
    
    int tam;
    cout <<"Ingrese la cantidad de numeros del arreglo"<<endl;
    cin >> tam;

    int arreglo[tam]; /*no es necesario el typedef*/
    cout << "Ingrese los numeros del arreglo: " <<endl;
   
    for (int i=0; i < tam; i++){
        cin>> arreglo[i];
    }
    
    int suma = arregloSuma(arreglo, tam);
    cout << "La suma de los números del arreglo es: " << suma <<endl;
    return 0;

}

int arregloSuma(int arreglo[], int tam) {
    
    int suma = 0;
    
    for (int i=0; i < tam; i++) {
        suma += arreglo[tam];
    }

    return suma;
}