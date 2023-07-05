#include <iostream>
using namespace std;

int main() {
    int tam=10;
    int arreglo[tam];

    cout <<"ingrese 10 numeros: " <<endl;
    for (int i =0; i <tam;i++) {
        cin>> arreglo[i];
    }
    cout <<endl;

    //seleccion directa
    int menor;
    int temp;

    for (int i=0; i < tam-1; i++ ){
        menor = i;
        for (int j=i+1; j<tam; j++) {
            if (arreglo[j] < arreglo[menor]) {
                menor = j;
            }
        }

        if (menor > i) {
            temp = arreglo[i];
            arreglo[i] = arreglo[menor];
            arreglo[menor] = temp;
        }
    }

    cout << "ordenado de manera descendente" << endl;
    for (int k=0; k<tam;k++) {
        cout << arreglo[k] << " ";
    }
    return 0;
}