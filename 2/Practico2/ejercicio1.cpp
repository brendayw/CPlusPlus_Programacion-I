//Escribir un programa que calcule la raíz cuadrada de un número ingresado por el usuario. Tener en
//cuenta que no puede ser un número negativo, por lo tanto, solucionar ese problema usando alguna
//función de <cmath>

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num;

    cout <<"Ingrese un numero: ";
    cin >> num; 

    cout << "La raiz cuadrada de " <<num<< " es: " << sqrt(num) <<endl;
    return 0;
}