/*Escribir un programa que calcule la suma de los primeros n números naturales utilizando un bucle
while.*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {

    int n = 0, suma = 0;
    while (n <=9) {
        n++;
        suma += n;
        cout << suma << endl;
    }

    return 0;
}