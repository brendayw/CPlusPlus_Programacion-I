/*Crea una función que reciba una matriz de enteros y devuelva la suma de todos los elementos.*/
#include <iostream>
using namespace std;

int sumaMatriz(int matriz[100][100], int fila, int col);

int main() {

    int fila, col;

    cout << "Ingrese el tamaño de la matriz" << endl;
    cout << "Filas: ";
    cin >> fila;
    cout << "Columnas: ";
    cin >> col;

    int mat[100][100]; // no entendi
    

    cout << "Ahora ingrese los numeros de la matriz" <<endl;
    for (int i = 0; i < fila; i++) {
        for (int j=0; j < col; j++) {
            cin>> mat[i][j];
        }
    }

    cout << "La matriz es: " << endl;
    for (int i = 0; i < fila; i++) {
        for (int j=0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    int sum = sumaMatriz(mat, fila, col);

    cout << "La suma de los numeros de la matriz es: " << sum << endl;

    return 0;
}

int sumaMatriz(int matriz[100][100], int fila, int col) {

    int suma = 0;

    for (int i = 0; i < fila; i++) {
        for (int j=0; j < col; j++) {
            suma += matriz[i][j];
        }
    }
    
    return suma;
}