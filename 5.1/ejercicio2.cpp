/*Dado un arreglo de tamaño N=16 cargado aleatoriamente. Copiar sus valores en una matriz de 4x4.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    

    const int N = 16;
    typedef int tArreglo[N];
    tArreglo arreglo;

    srand(time(NULL));

    typedef int tMatriz[4][4];
    tMatriz matriz;

    //selecciona numeros aleatorios del arreglo
    for (int i = 0; i < N; i++) {
        arreglo[i] = rand() % 16 + 1; 
    }

    //pasar arreglo a la matriz
    int contador = 0; 
    for (int i = 0; i < 4; i++) {
        for (int j=0; j <4; j++) {
            matriz[i][j] = arreglo[contador];
            contador++;
        }
    }

    //muestra matriz
    for (int i = 0; i < 4; i++) {
        for (int j= 0; j < 4; j++) {
            cout << "[" << matriz[i][j] << "]";
        }
        cout << endl;
    }

}