#include <iostream>
using namespace std;
int main() {
    int pos;
    int temp;

    int tam =10;
    int arreglo[tam];

    cout << "Ingrese 10 numeros: " << endl;
    for (int i =0; i < tam; i ++) {
        cin >> arreglo[i];
    }
    cout << endl;
    //ordenacion por insercion con intercambio
    
    for (int i = 0; i<tam;i++) {
        pos=i;

        while( (pos>0) && (arreglo[pos-1] < arreglo[pos]))
        {
            temp = arreglo[pos];
            arreglo[pos] = arreglo[pos-1];
            arreglo[pos-1] = temp;
            pos--;
        }
    }

    cout << "Ordenado de manera descendente"<<endl;
    for(int j=0;j<tam;j++) {
        cout<<arreglo[j] << " ";
    }
    cout<<endl;

    
    return 0;
}