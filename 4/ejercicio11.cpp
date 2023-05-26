/*Escribir un programa que solicite al usuario ingresar un número entero positivo y luego imprima en
la consola una matriz cuadrada con la diagonal principal compuesta por números en forma
ascendente hasta ese valor y los demás elementos de la matriz iguales a cero. Por ejemplo, si el
usuario ingresa el número 6, la matriz resultante debe ser la siguiente*/

#include <iostream>
using namespace std;

int main() {
    int num, i, j; //me da error
    

    cout << "Ingrese un numero entero positivo para mostrar una matriz"<<endl;
    cin>> num;

    if (num > 0) {

        int matriz[num][num];
        
        //matriz con 0
        for (i=0; i < num; i++){

           for (j=0; j<num; j++) {
            matriz[i][j] = 0;
           }

        }

        //matriz con diagonal principal
        for (i=0; i <num; i++) {
            matriz[i][i] = i + 1;
        }

        //imprimir matriz
        for (i=0; i<num; i++) {

            for (j=0; j<num; j++) {
                cout << matriz[i][j] << " ";
            }

            cout <<endl;
        }


    } else {
        cout << "Error, el numero ingresado no es un entero positivo" <<endl;
    }


    return 0;
}