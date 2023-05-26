/*Escribir un programa que complete una matriz de 5x5 con la suma de sus correspondientes índices.
Ejemplo en la posición fila 3 columna 2 debe guardar el número 5.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    const int tam = 5; //tamaño
    typedef int tMatriz[tam][tam]; //declaracion
    tMatriz matriz; //variables

    for (int i= 0; i < tam; i++ ) {
        for (int j= 0; j < tam; j++) {
            matriz[i][j] = i + j;
        }
    }
    cout << "La matriz de 5x5 es: " <<endl;

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            cout << matriz[i][j] << " ";
        }

        cout  <<endl; 
    }

    return 0;
    
}
