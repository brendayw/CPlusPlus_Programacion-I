/*Escribir un programa que solicite al usuario ingresar un número entero positivo y luego imprima en
la consola una matriz cuadrada con la diagonal principal compuesta por números en forma
ascendente hasta ese valor y los demás elementos de la matriz iguales a cero. Por ejemplo, si el
usuario ingresa el número 6, la matriz resultante debe ser la siguiente:*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

    int num;

    cout << "Ingrese un numero entero positivo" <<endl;
    cin >> num;

    int matriz[num][num];

    for (int i = 0; i < num; i++) {
        for (int j=0; j < num; j++) {
            
            if (i == j) {
                matriz[i][i] = i+1;
            } else {
                matriz[i][j] = 0;
            }
            cout << matriz[i][j] << " ";

        }
        cout << endl;
    }


    return 0;
}
