/*Escribir un programa que le permita al usuario ingresar la diagonal principal de una matriz de 5x5 y
que los otros lugares con una X.*/

#include <iostream>

using namespace std;

int main() {

    const int tam = 5;
    int matriz[tam][tam];

    int num;

    for (int i=0; i < tam; i++) {
        for (int j=0; j < tam; j++) {
            if (i == j) {
                cout << "Ingrese el numero para la diagonal" <<endl;
                cin >> num;
                matriz[i][i] = num;
            } else {
                matriz[i][j] ='X';
            }
        }
    }

    for (int i=0; i < tam; i++) {
        for (int j=0; j < tam; j++) {
            cout << matriz[i][j] << " " << endl;
        }
        cout << endl;
    }

    return 0;

}