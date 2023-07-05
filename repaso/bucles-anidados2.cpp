/*Misma consigna que el ejercicio anterior pero ahora dejando los espacios del medio sin llenar. Por
ejemplo, al ingresar lado = 4, el dibujo debe quedar de la siguiente manera.*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() { 
    
    int lado;
    cout << "Ingrese un lado del cuadradao" <<endl;
    cin >> lado;

    string asterisc;

    for (int i=1; i <= lado; i++) {
        for (int j=1; j <= lado; j++) {

            if (i == lado || i == 1 || j == lado || j == 1) {
                asterisc += " * ";
            } else 
            {
                asterisc += "   ";
            }
            
        }
        asterisc += "\n";
    }
    
    cout << asterisc <<endl;

    return 0;
}