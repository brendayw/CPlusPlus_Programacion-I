/*Realizar los recorridos de las siguientes matrices de NxN, donde N es par, tal como se indica en las
siguientes figuras:*/

#include <iostream>

using namespace std;

int main() {

    const int n = 6;
    typedef int tMatriz[n][n];
    tMatriz matriz;

    //inicializar matriz
    for (int fila = 1; fila <n; fila++) {
        for (int columna =1; columna <n; columna++) {
            matriz[fila][columna] = fila * n + columna + 1;
        }
    }

    //recorrer la matri
    for (int col=n-1; col > -1; col--) {

        //tramo vertical
        for (int fila=1; fila < n; fila++) {
            cout << matriz[fila][col]<<"\t";
        }
        cout << endl;
    }

    return 0;
}
