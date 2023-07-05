#include <iostream>
using namespace std;

void IngresarMatricez(int matriz[][100], int matriz2[][100], int tam, int tam2);
void sumaMatrices(int matriz[][100], int matriz2[][100], int tam, int tam2, int& sum, int& sum1, int& sum2);

int main() {
    int t1, t2;
    int sumatotal, suma1, suma2;

    cout << "Ingrese el tamaño de la matriz 1: ";
    cin >> t1;

    cout << "Ingrese el tamaño de la matriz 2: ";
    cin >> t2;

    int mat[100][100];
    int mat2[100][100];

    IngresarMatricez(mat, mat2, t1, t2);
    sumaMatrices(mat, mat2, t1, t2, sumatotal, suma1, suma2);

    cout << "La suma de los elementos de la matriz uno es: " << suma1 << endl;
    cout << "La suma de los elementos de la matriz dos es: " << suma2 << endl;
    cout << "La suma de los elementos de las dos matrices es: " << sumatotal << endl;

    return 0;
}

void IngresarMatricez(int matriz[][100], int matriz2[][100], int tam, int tam2) {
    cout << "Ingrese los elementos de la matriz 1: " << endl;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Ingrese los elementos de la matriz 2: " << endl;
    for (int i = 0; i < tam2; i++) {
        for (int j = 0; j < tam2; j++) {
            cin >> matriz2[i][j];
        }
    }
}

void sumaMatrices(int matriz[][100], int matriz2[][100], int tam, int tam2, int& sum, int& sum1, int& sum2) {
    sum = 0;
    sum1 = 0;
    sum2 = 0;

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            sum1 += matriz[i][j];
        }
    }

    for (int k = 0; k < tam2; k++) {
        for (int l = 0; l < tam2; l++) {
            sum2 += matriz2[k][l];
        }
    }

    sum = sum1 + sum2;
}