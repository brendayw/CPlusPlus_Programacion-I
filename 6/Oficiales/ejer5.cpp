/*Cargar un arreglo de 10 lugares con números aleatorios (usar el rango que quiera), ordenarlo de manera
ascendente eligiendo uno de los métodos de ordenación anteriores y realizar la búsqueda de un número
ingresado por el usuario, usando la búsqueda binaria.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void OrdenarBurbuja(int arreglo[], int tam);
int BusquedaNumero(int arreglo[], int tam, int buscar);
void ArregloAleatorios(int arreglo[], int tam);

int main() {

    const int tam = 10;
    typedef int tArreglo[tam];
    tArreglo arreglo;

    srand(time(NULL));
    for (int i =0;i< tam; i++) {
        arreglo[i] = rand() % 100 + 1;
    }

   //Arreglo
    cout << "El arreglo con numeros aleatorios es: " <<endl;
    ArregloAleatorios(arreglo, tam);
    cout << endl;

    //Ordenado
    OrdenarBurbuja(arreglo, tam);
    cout << "El arreglo ordenado segun el metodo de burbuja: " <<endl;
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    int buscar;
    cout << "Ingrese el numero a buscar: " << endl;
    cin >> buscar;
    int numBuscado = BusquedaNumero(arreglo, tam, buscar);

    if (numBuscado != - 1) {
        cout << "El numero esta en la posicion " << numBuscado << " del arreglo" << endl;
        cout << "(acuerdese que los arreglos empiezan en la posicion 0)" << endl;
    } else {
        cout << "El numero no se ha encontrado en el arreglo" << endl;
    }

    return 0;

}

void ArregloAleatorios(int arreglo[], int tam) {

   for (int i=0; i < tam; i++) {
        cout << arreglo[i] << " ";
   }
}

void OrdenarBurbuja(int arreglo[], int tam) {
    bool inter = true;
    int i = 0;

    while ((i < tam - 1) && inter) {
        inter = false;
        
        for (int j= tam - 1; j > i; j--) {
            if (arreglo[j] < arreglo[j - 1]) {
                int temp;
                temp = arreglo[j];
                arreglo[j] = arreglo[j - 1];
                arreglo[j - 1] = temp;
                inter = true;
            }
        }

        if (inter) {
            i++;
        }
    }
}

int BusquedaNumero(int arreglo[], int tam, int buscar) {

    int ini = 0, fin = tam - 1, mitad;
    bool encontrado = false;

    while ((ini <= fin) && !encontrado) {
        mitad = (ini + fin) / 2;

        if (buscar == arreglo[mitad]) {
            encontrado = true;
        }
        else if (buscar < arreglo[mitad]){
            fin = mitad - 1;

        } else {
            ini = mitad + 1;
        }
    }

    if (encontrado) {
        return mitad;
    } else {
        return -1;
    }

    return buscar;

}