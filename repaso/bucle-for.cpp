/*Escribir un programa que pida al usuario un número y muestre sus divisores utilizando un bucle for.*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

    int num, divisor;
    cout << "ingrese un numero para calcular sus divisores"<<endl;
    cin>> num;

    cout << "los divisores de " << num << " son: " <<endl;
    for (int i = 1; i <= num; i++) {
        
        if (num % i ==0) {
            cout << i << " " <<endl;
        }
    }
    
}
