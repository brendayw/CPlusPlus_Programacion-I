/*Escribe una función que reciba dos números enteros y devuelva su suma.*/

#include <iostream>
using namespace std;

int suma(int num1, int num2);

int main() {
    int n1, n2;

    cout <<"Ingrese dos numeros enteros"<<endl;
    cout << "Número 1: ";
    cin >> n1;
    cout << "Número 2: ";
    cin >> n2;

    cout << "La suma de los dos números enteros es: " << suma(n1, n2) <<endl;
    
    return 0;
}

int suma(int num1, int num2) {

    int suma;
    suma = num1 + num2;
    return suma;

}