/*Crea una función que reciba una matriz de enteros y devuelva la suma de cada fila en un arreglo.*/
#include <iostream>
using namespace std;

void ingresarMatriz(int matriz[][100], int fila, int columna);
void sumarFilas(int matriz[][100], int fila, int columna, int suma[]);

int main() {

    int f, c;
    int matriz[100][100];
    int suma[100];

    cout << "Ingrese la cantidad de filas de la matriz: ";
    cin >> f;

    cout << "Ingrese la cantidad de columnas de la matriz: ";
    cin >> c;

    ingresarMatriz(matriz, f, c);
    sumarFilas(matriz, f, c, suma);

    cout << "La suma de cada fila es:" << endl;
    for (int i = 0; i < f; i++) {
        cout << "Fila " << i + 1 << ": " << suma[i] << endl;
    }

    return 0;
}

void ingresarMatriz(int matriz[][100], int fila, int columna) {

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            cin >> matriz[i][j];
        }
    }
}

void sumarFilas(int matriz[][100], int fila, int columna, int suma[]) {
    for (int i = 0; i < fila; i++) {
        suma[i] = 0;
        for (int j = 0; j < columna; j++) {
            suma[i] += matriz[i][j];
        }
    }
}