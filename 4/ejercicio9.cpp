/*Escribir un programa que al ingresar el lado de un cuadrado dibuje en consola un cuadrado con el
carácter “*”. Por ejemplo, al ingresar lado = 4, el dibujo debe quedar de la siguiente manera*/

#include <iostream>
using namespace std;

int main() {
    int lado, i, j;
    string asterisc;

    cout << "Ingrese el lado del cuadrado"<<endl;
    cin>> lado;

    for (i=1; i <= lado; i++) {
        for (j = 1; j <= lado; j++) {
            asterisc += " * "; 
        }

        asterisc += "\n";        
    }
    
    cout << asterisc << endl;

    return 0;
}