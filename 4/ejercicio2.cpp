/* Escribir un programa que pida al usuario un número y muestre su tabla de multiplicar utilizando un
bucle for.
*/

#include <iostream>
using namespace std;

int main() {
    int num, i, multiplos;

    cout << "Ingrese un numero para mostrar su tabla de multiplicar" <<endl;
    cin>> num;

    cout << "La tabla de multiplicacion de " << num << " es: " << endl;
    for (i=0; i <= 10; i++) {
        multiplos = num * i;     
        cout<< num << " x " << i << " = " << multiplos <<endl; 
    }

    return 0;
}