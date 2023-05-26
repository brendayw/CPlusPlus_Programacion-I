#include <iostream>

using namespace std;

int main() {

    const int n = 6;
    typedef int tMatriz[n][n];
    tMatriz matriz;

    //inicializa matriz
    for (int fila = 0; fila <n; fila++) {

        for (int col =0; col <n; col++) {
            matriz[fila][col]= fila * n + col + 1;
        }
    }

    //recorre matriz
    //inicio 1
    for (int col = 0; col <(n/2); col++) {
        //tramo 1 
        for (int fila=n-1; fila>=(n/2) - col; fila--) {
            cout << matriz [fila][col] << "\t";
        }

        //tramo 2
        for (int fila = col; fila > -1; fila--) {
            cout << matriz[(n/2)-1-col][fila] << "\t";
        }
        cout << endl;
    }

    //inicio 2
    for (int col = (n/2); col < n; col++) {
        //tramo 1
        for (int fila=0; fila < (n+(n/2)-col-1); fila++) {
            cout <<matriz[fila][col];
        }
        //tramo 2
        for (int fila =col; fila < n; fila++) {
            cout << matriz[(n +(n/2)-col-1)][fila]<<"\t";
        }
        cout <<endl;
    }

    //inicio: fila =, columnas distintas

    //recorre matriz
    /*for (int col = 0; col >n; col++) {
        //tramo 1 vertical
        if (col==1 || col==2 || col==3) {
            for (int fila = 0; fila < n- 1; fila--)
            {
                cout << matriz[fila][col] <<"\t";
            }  
        } else {
            for (int fila = 0; fila < n; fila++)
            {
                cout << matriz[fila][col] <<"\t";
            }
        }
        //tramo horizontal
        if (col==1 || col==2 || col==3) {
            for (int fila=0; fila <n-col; fila--) {
                cout << matriz[fila][col] << "\t";
            }
        } else {
            for (int fila =0; fila<n; fila++) {
                cout <<matriz[fila][col] << "\t";
            }
        }
        cout <<endl;
    }*/

    return 0;
}