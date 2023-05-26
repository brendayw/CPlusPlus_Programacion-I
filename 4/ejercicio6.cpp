//Escribir un programa que calcule el factorial de un número utilizando un bucle for

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, i;
    unsigned long long factorial = 1;

    cout <<"Ingrese un numero para calcular su factorial" <<endl;
    cin>>num;

    cout <<"El factorial de " << num << " es: ";
    for (i= 1; i <= num; i++) {
        factorial *= i;
        cout << i;
        if (i !=num) {
            cout << " * ";
        }
    }
    cout << " = " << factorial <<endl;

    return 0;
}