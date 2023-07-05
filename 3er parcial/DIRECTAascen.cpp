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
    //ascendente
    int menor;
    int x;
    for (int i =0; i < tam-1; i++) {
        menor = arreglo[i];
        x=i;
        for (int j= i; j<tam;j++) {
            if(arreglo[j] > menor) {
                menor = arreglo[j];
                x=j;
            }

        }

        arreglo[x] = arreglo[i];
        arreglo[i] = menor;
    }

    cout << "ordenado de manera ascendente"<<endl;
    for (int k=0; k<tam;k++) {
        cout <<arreglo[k] << " ";
    }
    return 0;
}