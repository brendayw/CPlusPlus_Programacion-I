//Escriba un programa que solicite al usuario un número entero, y muestre en pantalla si es par o
//impar. Si es par mostrar en consola la cantidad de cifras que tiene el número ingresado y si es impar
//mostrar en consola la primera cifra del número ingresado

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int num, espar; 
    int a, b, c;

    cout << "Ingrese un numero entero" << endl;
    cin >> num;

    if (num % 2 == 0) {
        cout << "El numero es par" << endl;
        
        if (num > 10 && num <100) {
            cout << "El numero tiene 2 cifras" << endl;
        } else 
            if (num >100 && num < 1000) {
                cout <<"El numero tiene 3 cifras" << endl;
            } else 
                if (num> 1000 && num < 10000) {
                    cout << "El numero tiene 4 cifras" << endl;
                } else 
                    if (num <10000 && num > 100000) {
                        cout << "El numero tiene 5 cifras" << endl;
                    } else {
                        cout << "El numero tiene muchas cifras" << endl;
                    }
        } else 
            if (num <10) {
                cout << "El numero tiene una cifra" << endl;
        }   
    else {
        cout << "El numero es impar" << endl;
        
        }
    return 0;

}

   
