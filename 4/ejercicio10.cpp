/*Misma consigna que el ejercicio anterior pero ahora dejando los espacios del medio sin llenar. Por
ejemplo, al ingresar lado = 4, el dibujo debe quedar de la siguiente manera*/

#include <iostream>
using namespace std;

int main() {
    int lado, i, j;
    string asterisc;

    cout << "Ingrese el lado del cuadrado" <<endl;
    cin>> lado;

    for (i=1; i<=lado; i++) {

        for (j=1; j<=lado; j++) {

           if (i==lado || i==1 || j==lado || j==1) {
                asterisc += " * ";
           } else {
                asterisc += "   ";
           }

        }
        asterisc += "\n";
    }

    cout << asterisc <<endl;

    return 0;

}