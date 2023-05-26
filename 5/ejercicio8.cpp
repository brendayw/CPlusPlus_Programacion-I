/*Matriz y búsqueda.
a) Escribir un programa que complete una matriz de 10x10 con números aleatorios entre el 1 y el
100. Luego en un arreglo debe guardar el resultado de sumar cada una de las filas, por lo tanto,
va a tener 10 lugares. Mostrar el contenido del arreglo.
b) Debe permitir que el usuario ingrese un número y realizar la búsqueda de este en la matriz. Si lo
encuentra debe mostrar un mensaje que indique que lo encontró y la posición donde está ubicado
en la matriz. Si no lo encuentra que muestre un mensaje de que la búsqueda finalizo sin éxito
Esto debe repetirse hasta que el usuario ingrese de alguna forma que no quiere realizar más
búsquedas.*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    //matriz = tamaño, delaracion y variable
    const int tam = 10;
    typedef int tMatriz[tam][tam];
    tMatriz matriz;

    //llenar matriz con numeros aleatorios
    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    //sumar filas
    int sumaFilas[tam];
    int suma = 0;
    for (int i=0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            suma = suma + matriz[i][j];
        }
        sumaFilas[i] = suma;
    }


    //muestra el arreglo
    cout << "El arreglo sumando filas es: " <<endl;
    for (int i =0; i < tam; i++) {
        cout << sumaFilas[i] << " " <<endl;
    }
    cout <<endl;

    //busqueda en matriz
    int num;
    string cont;
    do {
        cout << "Ingrese un numero para buscar en la matriz: ";
        cin >> num;

        bool encontrado = false;
        int filaEncontrada = -1;
        int columnaEncontrada = -1;

        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                if (matriz[i][j] == num) {
                    encontrado = true;
                    filaEncontrada = i;
                    columnaEncontrada = j;
                }
            }      
        }

        if (encontrado) {
            cout << "El numero " << num << " esta en la posicion: fila [" << filaEncontrada << "], columna: [" << columnaEncontrada << "] de la matriz" <<endl;
        } else {
            cout << "No se encontro el " << num << " en la matriz." <<endl;
        } 

        cout << "Desea continuar buscando? (Si/No): " <<endl;
        cin >> cont;
    } while (cont == "Si" || cont == "si");

    return 0;

}