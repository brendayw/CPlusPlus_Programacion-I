/*Escribe una función que tome un arreglo de enteros y devuelva el valor máximo.*/
#include <iostream>
using namespace std;

int valorMaximo(int arreglo[], int& tam);

int main() {

    int tam;
    cout <<"Ingrese el tamaño del arreglo"<<endl;
    cin >> tam;

    int arreglo[tam];
    cout <<"Ahora ingrese los numeros del arreglo"<<endl;
    for (int i = 0; i < tam; i++){
        cin>> arreglo[i];
    }

    int maximo = valorMaximo(arreglo, tam); 
    cout << "El valor maximo del arreglo es: " << maximo <<endl;

    return 0;

}

int valorMaximo(int arreglo[], int& tam) {
   
   int max = arreglo[0];
   for (int i = 1; i < tam; i++) 
   {
    if (arreglo[i] > max) {
        max = arreglo[i];
    }
   }

   return max;

}