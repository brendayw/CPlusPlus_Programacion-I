//Escribir un programa que realice la conversión de grados a radianes. Dato: 180°

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double grados, radianes;

    cout <<"Ingrese un numero en grados" <<endl;
    cin >> grados;

    radianes = (grados * 1) / 57.29;

    cout << "Su equivalente en radianes es: " << radianes <<endl;
    return 0;
    
}