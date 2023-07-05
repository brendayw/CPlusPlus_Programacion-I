#include <iostream>
using namespace std;
int main(){
    int pos;
    int aux;
    int tam = 10;
    int arreglo[tam];

    cout <<"Ingrese 10 numeros" <<endl;
    for (int i =0; i < tam; i++) {
        cin>> arreglo[i];
    }
    cout <<endl;
    //de manera descendente
    //de ordenacion por insercion
    for (int i = 0; i < tam; i++) {
        pos=i;
        aux = arreglo[i];

        while ((pos > 0) && (arreglo[pos-1]<aux)) {
            arreglo[pos] = arreglo[pos-1];
            pos--;
        }
        arreglo[pos] = aux;
    }
    
    cout << "Ordenado de manera descendente" <<endl;
    for (int j=0; j < tam; j++)
    {
        cout << arreglo[j] << " ";
    }
    cout << endl;
    return 0;
}