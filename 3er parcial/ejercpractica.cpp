#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int tam = 10;
    typedef int tArray[tam];
    tArray arreglo;

    srand(time(NULL));

    for (int i=0; i < tam; i++) {
        arreglo[i] = rand() % 10 + 1;
        cout << arreglo[i] << " ";
    }

    int buscado = 8;
    int pos = 0;
    bool encontrado = false;

    /*while (pos < tam && !encontrado){
        if (arreglo[pos] == buscado) {
            encontrado = true;
            cout << "Se encontro en la posicion: " << pos + 1 << endl;
        } else {
            pos++;
        }
    }*/

    int cont = 0, suma = 0;
    while (pos < tam && !encontrado){
        if (arreglo[pos] == buscado) {
            encontrado = true;
            cont++;
           
        } else {
            pos++;
        }
        
    }
    suma += cont;
    cout << "Se encontro: " << suma << " veces" << endl;
    return 0;
}