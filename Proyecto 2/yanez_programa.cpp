#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Variable global
bool matrizCargada = false; //verifica que la matriz haya sido cargada

//Prototipos de funciones para el menu
void cargarMatriz(int matriz[][3], int tam); //opcion 1
void mostrar(int matriz[][3], int tam); // opcion 2
void buscarValor(int matriz[][3], int tam); // opcion 3
int devolverMinMax(int matriz[][3], int tam, int num); // opcion 4
void ordenarMatriz(int matriz[][3], int tam); // opcion 5
int determinante(int matriz[][3], int tam, int det); // opcion 6

int main() {
    //variables
    const int t = 3;
    int mat[t][t];
    int n;
    int det;
    int opcion;
    bool salir = false; //sale del programa

    do {
        cout << " \t Manipulación de una matriz." << endl ;
        //opciones del menu
        cout << "Opcion 1 - Cargar la matriz." << endl;
        cout << "Opcion 2 - Mostrar los valores de la matriz." << endl;
        cout << "Opcion 3 - Buscar un valor dentro de la matriz." << endl;
        cout << "Opcion 4 - Devolver el valor máximo o mínimo de la matriz." << endl;
        cout << "Opcion 5 - Ordenar los valores de la matriz de forma ascendente o descendente." << endl;
        cout << "Opcion 6 - Calcular el determinante de la matriz 3x3." << endl;
        cout << "Opcion 7 - Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        cout << endl;

        switch (opcion)
        {
        case 1:
            cargarMatriz(mat, t);
            matrizCargada = true;
            break;
        case 2:
            if (matrizCargada) {
                mostrar(mat, t);
            } else {
                cout << "Primero debe cargar la matriz" << endl;
            }
            break;
        case 3: 
            if (matrizCargada) {
                buscarValor(mat, t);
            } else {
                cout << "Primero debe cargar la matriz" << endl;
            }
            break;
        case 4:
            if (matrizCargada) {
                devolverMinMax(mat, t, n);
            } else {
                cout << "Primero debe cargar la matriz" << endl;
            }
            break;
        case 5:
            if (matrizCargada) {
                ordenarMatriz(mat, t);
            } else {
                cout << "Primero debe cargar la matriz" << endl;
            }
            break;
        case 6:
            if (matrizCargada) {
                determinante(mat, t, det);
            } else {
                cout << "Primero debe cargar la matriz" << endl;
            }
            break;
        case 7:
            salir = true;
            break;
        default:
            cout << "La opcion ingresada no es válida. Intentelo nuevamente." << endl;
            break;
        }

    } while (salir == false);

    return 0;
}

//Funcion que carga la matriz - opcion 1
void cargarMatriz(int matriz[][3], int tam) {

    string rta;

    cout << "Desea cargar la matriz manualmente? (Si/No)" << endl;
    cin >> rta;

    if (rta == "si" || rta == "Si" || rta == "SI") {
        
        //Numeros cargados manualmente
        cout << "Ingrese los numeros de la matriz de 3x3: " << endl;
        for (int i=0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                cin >> matriz[i][j];
            }
        }  
    } else {
        //Numero aleatorios
        srand(time(NULL));

        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                matriz[i][j] = rand() % 100 + 1;
            }
        }
    }

}
//Funcion que muestra la matriz - opcion 2
void mostrar(int matriz[][3], int tam) {

    cout << "La matriz de 3x3 es: " << endl;
    
    for (int i = 0; i < tam; i++) {

        for (int j =0; j < tam; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

}
//Funcion que busca - opcion 3
void buscarValor(int matriz[][3], int tam) {
    bool encontrado;
    int num;

    cout << "Ingrese el numero que desea buscar dentro de la matriz: ";
    cin >> num; 
    
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (matriz[i][j] == num) {
            cout << "El numero " << num << " se eha encontrado dentro de la matriz" << endl;
            encontrado = true;
            i = tam;
            }
        }
        
        if (!encontrado) {
            cout << "El numero buscado no esta en la matriz" << endl;
        }

    }

}

//Funcion que devuelve el minimo o maximo - opcion 4
int devolverMinMax(int matriz[][3], int tam, int num) {
    string rta;
    int min, max;

    cout << "Desea ver el numero minimo o maximo de la matriz: ";
    cin >> rta;
    
    if (rta == "minimo" || rta == "Minimo" || rta == "MINIMO") {
        //devuelve el minimo
        for(int i = 0; i < tam; i++) {
            min = matriz[0][0];

            for(int j = 0; j < tam; j++) {
                if(matriz[i][j] < min)
                {
                    min = matriz[i][j];
                }
            }
        }
        cout << "El numero minimo de la matriz es: " << min <<endl;

    } else {
        //devuelve el maximo
        for(int i = 0; i < tam; i++) {
            max = matriz[0][0];

            for(int j = 0; j < tam; j++) {
                if(matriz[i][j] > max)
                {
                    max = matriz[i][j];
                }
            }
        }
        cout << "El numero maximo de la matriz es: " << max <<endl;
    }
    return num;
}
//Funcion que ordena la matriz - opcion 5
void ordenarMatriz(int matriz[][3], int tam) {
    string rta;
    int temp = 0;

    cout << "Desea ordenar la matriz de manera ascendente o descendente? ";
    cin >> rta;

    if (rta =="descendente" || rta == "Descendente" || rta == "DESCENDENTE") {
        // Ordenar de manera descendente
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                for (int x = i; x < tam; x++) {
                    int y = 0;

                    if (x == i) { //para evitar comparar el primer elemento con si mismo
                        y = j + 1;
                    }

                    for (; y < tam; y++) {
                        if (matriz[i][j] < matriz[x][y]) {
                            int temp = matriz[i][j];
                            matriz[i][j] = matriz[x][y];
                            matriz[x][y] = temp;
                        }
                    }
                }
            }
        }

    } else if (rta == "ascendente" || rta == "Ascendete" || rta == "ASCENDENTE") {
        
        //ordenada de manera descendente
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                for (int x = i; x < tam; x++) {
                    int y = 0;

                    if (x == i) { //para evitar comparar el primer elemento con si mismo
                        y = j + 1;
                    }

                    for (; y < tam; y++) {
                        if (matriz[i][j] > matriz[x][y]) {
                            int temp = matriz[i][j];
                            matriz[i][j] = matriz[x][y];
                            matriz[x][y] = temp;
                        }
                    }
                }
            }
        }
    }

    //Muestra la matriz ordenada
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }   
    
}

//Funcion que calcula el determinante - opcion 6
int determinante(int matriz[][3], int tam, int det) {
    bool ceros = false;
    int contador = 0;

    // busca 3 ceros en la misma fila
    for (int i = 0; i < tam; i++) {
        contador = 0; //reinicia el contador
        for (int j = 0; j < tam; j++) {
            if (matriz[i][j] == 0) {
                contador++;
            }
        }
        if (contador == tam) {
            ceros = true;
            break;
        }
    }

    //busca 3 ceros en la misma columna si no los encontro en las filas
    if (!ceros) { 
        for (int j = 0; j < tam; j++) {
            contador = 0; //reinicia el contador
            for (int i = 0; i < tam; i++) {
                if (matriz[i][j] == 0) {
                    contador++;
                }
            }
            if (contador == tam) {
                ceros = true;
                break;
            }
        }   
    }

    if (ceros) {
        
        cout << "El determinante de esta matriz es 0" << endl;
        return 0;

    } else { //calcula el determinante en caso de que no sea 0

        int a = matriz[0][0];
        int b = matriz[0][1];    //lugares de la matriz
        int c = matriz[0][2];
        int d = matriz[1][0];
        int e = matriz[1][1];
        int f = matriz[1][2];
        int g = matriz[2][0];
        int h = matriz[2][1];
        int i = matriz[2][2];

        //utilize la formula matematica
        det = ((a*e*i) + (b*f*g) + (d*h*c) ) - ( (c*e*g) - (b*d*i) - (f*h*a) );

        cout << "El determinante de la matriz es: " << det <<endl;

        return det;
        
    }
}