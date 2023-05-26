#include <iostream>

using namespace std;

int main() {

    const int n = 6;
    typedef int tMatriz[n][n];

    tMatriz matriz;

    for (int fila = 0; fila <n; fila++) {

        for (int col =0; col <n; col++) {
            matriz[fila][col]= fila * n + col + 1;
        }
    }

    //inicio: varia la fila de manera ascendente si es impar y descendente si es impar

    //recorre matriz
    for (int fila = 0; fila < n; fila++) { //correciones: la habia inicializado en 1

        //recorrido horizontal impar
        if (n % 2 ==0) {

            for (int col =0; col < n -fila; col++ ) {
                cout << matriz [fila][col]<<"\t";
            }
        } else { //recorrido horizontal par

            for (int col = n-1; col >-1; col--) {
                cout <<matriz [fila][col] <<"\t";
            }
        }
        cout <<endl;
    }
    
    return 0;
}