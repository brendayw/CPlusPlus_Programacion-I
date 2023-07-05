/*. Escribir un programa que pida al usuario una palabra y muestre sus letras una por una utilizando un
bucle while. */

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string palabra;

    cout << "ingrese una palabra"<<endl;
    cin >> palabra;

    int nueva, i = 0;
    nueva = palabra.length();

    while ( i <= nueva) {
        cout << palabra[i] <<endl;
        i++;
    }
    return 0;
}