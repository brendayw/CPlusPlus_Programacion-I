/*Escribir un programa que permita ingresar la cantidad de filas y columnas de la matriz (se puede
restringir si lo cree conveniente), luego se completan los lugares de dicha matriz dependiendo si la
suma de los indices de cada lugar es par o impar. En caso de ser par se debe llenar el lugar con la raíz
cuadrada de la suma de los índices. Si no es par se debe completar el lugar con un 0.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int num, fila, columna;

    cout << "Ingrese la cantidad de filas y columnas de la matriz" <<endl;
    cin >> fila;
    cin>> columna;
  

    typedef int tMatriz[20][20];//tamaño maximo de la matriz
    tMatriz matriz;

    for (int i = 0; i < fila; i++) {
        for (int j=0; j < columna; j++) {
            if ((i+j) % 2 ==0) {
                matriz[i][j] = sqrt(i+j);
            } else {
                matriz [i][j] = 0;
            }

        }
    }

    cout <<"La matriz es: " <<endl;
    for (int i = 0; i < fila; i++) {
        for (int j=0; j < columna; j++) {
            cout << matriz[i][j] << " ";         
        }
        cout <<endl;
    }
    

    return 0;
   
}