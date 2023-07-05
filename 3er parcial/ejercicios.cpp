/*dado un arreglo ingresado por el usuario, ordenarlo de manera ascendente y descendente*/

#include <iostream>
using namespace std;

int main() {
    
    const int tam = 10;
    typedef int tArreglo[tam];
    tArreglo arreglo;

    cout << "Ingrese 10 numeros: " << endl;
    for (int i = 0; i < tam; i++) {
        cin >> arreglo[i];
    }

    cout << endl;
    int pos;
    int aux;
    //de ordenacion por insercion
    for (int i = 0; i < tam; i++) {
        pos=i;
        aux = arreglo[i];

        while ((pos > 0) && (arreglo[pos-1]>aux)) {
            arreglo[pos] = arreglo[pos-1];
            pos--;
        }
        arreglo[pos] = aux;
    }

    cout << "Ordenado de manera ascendente" <<endl;
    for (int j=0; j < tam; j++)
    {
        cout << arreglo[j] << " ";
    }

    return 0;


}