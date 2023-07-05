#include <iostream>
using namespace std;

int SumaEnteros(int& num1, int& num2, int suma);

int main() {

    int n1, n2, sum;

    cout << "Ingrese dos numeros enteros: ";
    cin >> n1;
    cin >> n2;

    cout << "La suma de los numeros " << n1 << " y " << n2 << " es: " << SumaEnteros(n1, n2, sum) << endl;

    return 0;
}

int SumaEnteros(int& num1, int& num2, int suma) {

    suma = 0;

    suma = num1 + num2;

    return suma;
}