/*Escribir un programa que pida al usuario un número y muestre su tabla de multiplicar utilizando un
bucle for*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

    int num, tabla;
    cout << "Ingrese un numero"<<endl;
    cin >> num;

    cout << "La tabla de multiplicar de " << num << " es: " <<endl;
    for (int i = 0; i <= 10; i++) {
        tabla = num * i;
        cout << num << " x " << i << " = " << tabla <<endl;
    }



    return 0;
}