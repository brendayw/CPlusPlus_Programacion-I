//Escribe un programa que le pida al usuario que ingrese 10 números y los almacene en un arreglo.
//Luego, el programa debe calcular la suma de todos los elementos del arreglo y mostrar el resultado

#include <iostream>

using namespace std;

int main() {
    
    int num, i, suma = 0;

    const int tam =10; //tamaño de array (10 numeros)
    typedef int tCalcular[tam];
    tCalcular nums;

    for (i=0; i < tam ; i++) {
        cout <<"Ingrese un numero"<<endl;
        cin>> nums[i];
    }

    for (int i=0; i < tam; i++) {
        suma = suma + nums[i];
    }

    cout <<"La suma de los numeros ingresados es: " << suma <<endl;

    return 0;
}