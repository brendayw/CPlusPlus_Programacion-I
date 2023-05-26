//Escribir un programa que pida al usuario un número y muestre sus divisores utilizando un bucle for.

#include <iostream>
using namespace std;

int main() {
    int num, i, divisor;

    cout << "Ingrese un numero para mostrar sus divisores" <<endl;
    cin>> num;

    cout << "Los divisores de " <<num << " son: " << endl;
    for (i=1; i <= num; i++) {
        
        if (num % i ==0) {
            divisor = num / i;
            cout << num << " / " << i << " = " << divisor <<endl;
        }
    }

    return 0;
}
