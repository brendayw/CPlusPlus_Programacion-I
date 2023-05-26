/*Cargar una matriz de NxM con valores aleatorios entre [1,100] y comprobar si existen valores
repetidos*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/*int busca(const int matriz[], int tam) {
    for (int i = 0; i < tam-1; i++) {
        for (int j = i + 1; j < tam; j++) {

            if (matriz[i]== matriz[j]) {
                return matriz[i];
            }
           
        }
    }
    return - 1;
}*/

int main() {  

    int N, M;  

    cout << "Ingrese el numero de filas" <<endl;
    cin >> N;

    cout << "Ingrese el numero de columnas" <<endl;
    cin>> M;

    
    int matriz[N][M];
    
    //nums aleatorios
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        for (int j=0; j < M; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    //muestra la matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << "[" << matriz[i * M + j] << "] ";
        }
        cout <<endl;
    }

    //busca valor repetido
    int valor;
    bool bandera = false;
    for (int i=0; i < N; i++) {
        for (int j=0; i <N; j++) {
            for (int k= i; k < N; k++) {
                int inicioColumna;
                if (k==i) {
                    inicioColumna = j + 1;
                } else {
                    inicioColumna = 0;
                }

                for (int l = inicioColumna; l < M; l++) {
                    if (matriz[i][j] == matriz[k][l]) {
                        //valor repetido encontrado
                        bandera = true;
                    }
                }
            }
        }
    }

    if (bandera) {
        cout << "Hay repetidos"<<endl;
    } else {
        cout << "No hay repetidos" <<endl;
    }

    /*int repetido = busca(matriz, tam);

    if (repetido != -1) {
        cout << "Hay valores repetidos" <<endl;
        cout << "El valor repetido es: "<< repetido <<endl;
    } else {
        cout << "No hay valores repetidos" <<endl;
    }

    return 0;*/

}