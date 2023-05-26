/*Escribir un programa que complete una matriz de 10x10 con el número 1 para los índices que se
encuentren por encima de la diagonal principal y con 0 los que estén por debajo. Los valores de la
diagonal principal deben ir en forma descendente desde el 10 hasta el 1.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    const int tam = 10;
    typedef int tMatriz[tam][tam];
    tMatriz matriz;

    for (int i=0; i < tam; i++) {
        for (int j=0; j < tam; j++) {
            if (i==j) {
                matriz[i][j] = tam - i; //i son las filas ej 10 - 5
            } else if (j > i) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }

        }
    }

    for (int i=0; i < tam; i++) {
        for (int j=0; j < tam; j++) {
            cout << "[" << matriz[i][j] << "] " << " ";
        }
        cout <<endl;
    }
}
