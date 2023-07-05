//Escriba un programa que solicite al usuario dos números enteros y los intercambie si el primero es
//mayor que el segundo. Luego, muestre en pantalla los valores de ambos números

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2, aux;

    cout << "Ingrese dos numeros enteros: " << endl;
    cin >> num1;
    cin >> num2;

    if (num1 > num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;

        cout << "Los numeros intercambiados son: " << endl;
        cout << "Ahora el primer numero es: " << num1 << "\n";
        cout << "y el segundo numero es: " << num2;

        return 0;
    }
}