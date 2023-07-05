/*Escribir un programa que al ingresar el lado de un cuadrado dibuje en consola un cuadrado con el
carácter “*”. Por ejemplo, al ingresar lado = 4, el dibujo debe quedar de la siguiente manera.
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() { 

    int lado;
    cout << "Ingrese un lado del cuadradao" <<endl;
    cin >> lado;

    string asterisc = " * ";

    for (int i=0; i < lado; i++) {
        for (int j=0; j < lado; j++) {
            cout << asterisc;
        }
        cout << endl;
    }

    return 0;
}