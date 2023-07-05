/*Escribe una función que tome un arreglo de enteros y lo ordene de menor a mayor.
• Inserción.
• Inserción con intercambios.
• Selección directa.
• Burbujeo*/

#include <iostream>
using namespace std;

void OrdenInsercion(int arreglo[], int tam);
void OrdenInserInter(int arreglo[], int tam);
void OrdenSeleccion(int arreglo[], int tam);
void OrdenBurbujeo(int arreglo[], int tam);

int main() {

    //Arreglo indicado por usuario
    int tam;
    cout <<"Ingrese el tamaño del arreglo"<<endl;
    cin >> tam;

    int arreglo[tam];
    cout <<"Ahora ingrese los numeros del arreglo"<<endl;
    for (int i = 0; i < tam; i++){
        cin>> arreglo[i];
    }

    OrdenInsercion(arreglo, tam);
    cout <<"Arreglo ordenado por insercion: " << endl;
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout <<endl;

    //Orden Insercion por intercambio
    OrdenInserInter(arreglo, tam);
    cout <<"Arreglo ordenado --> insercion por intercambio: " << endl;
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout <<endl;

    //Orden por Seleccion directa
    OrdenSeleccion(arreglo, tam);
    cout <<"Arreglo ordenado por Seleccion Directa: " << endl;
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout <<endl;

    //Orden por metodo de burbujeo
    OrdenBurbujeo(arreglo, tam);
    cout <<"Arreglo ordenado por Metodo de Burbujeo: " << endl;
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }
    cout <<endl;

    return 0;
}

//Orden por insercion
void OrdenInsercion(int arreglo[], int tam) {

    int nuevo, pos;
    for (int i = 1; i < tam; i++) {
        nuevo = arreglo[i];
        pos = 0;

        while ((pos < i) && !(arreglo[pos] > nuevo)) {
         pos++;
         }

        for (int j = i; j > pos; j--) {
            arreglo[j] = arreglo[j - 1];
        }
        arreglo[pos] = nuevo;
    }
}

void OrdenInserInter(int arreglo[], int tam){

    int temp, pos;

    for (int i = 1; i < tam; i++) {
        pos = i;

        while ((pos > 0) && (arreglo[pos -1] > arreglo[pos])) {
            temp = arreglo[pos];
            arreglo[pos] = arreglo[pos - 1];
            arreglo[pos - 1] = temp;
            pos--;
        }
    }
}

void OrdenSeleccion(int arreglo[], int tam) {

    for (int i = 0; i < tam-1; i++) {
        int menor = i;
        for (int j = i + 1; j < tam; j++) {
            if (arreglo[j] < arreglo[menor]) {
                menor = j;
            }
        }

        if (menor > i) {
            int temp;
            temp = arreglo[i];
            arreglo[i] = arreglo[menor];
            arreglo[menor] = temp;
        }
    }
}

void OrdenBurbujeo(int arreglo[], int tam) {

    bool inter = true;
    int i = 0;

    while ((i < tam - 1 ) && inter) {
        inter = false;

        for (int j = tam - 1; j > i; j--) {
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

