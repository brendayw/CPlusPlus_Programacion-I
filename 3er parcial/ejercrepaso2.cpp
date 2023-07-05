#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Introduzca un numero mayor que 0 y menor que 100: ";
    cin >> num;

    while ( (num<0) || (num > 100) )
    {
        cout << "Introduzca un numero mayor que 0 y menor que 100: " << num << endl;
        cin>>num;
    }

    const int tam = 10;
    typedef int tArreglo[tam];
    tArreglo arreglo;

    int cont = 0, suma = 0;

   /*do {
        num+= 10;
        cout << num << " ";
        cont++;
    } while (num < 100);


    for (int i = 0; i < tam; i++) {
        suma = suma + cont;
        cout << arreglo[i] << ", ";
    }*/

    do {
        suma = num + 10;
        cont++;
        cout << suma << ", ";
        num = suma;
    } while (num < 100);

    

    return 0;
}