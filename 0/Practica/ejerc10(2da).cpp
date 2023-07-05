#include <iostream>
#include <string>
using namespace std;

int main() {
    string destino1, destino2, correcto1;

    //ingresados por maria
    cout << "Ingrese los destinos de sus vacaciones: ";
    cin >> destino1;
    cin >> destino2;

    //intercambio de destinos
    correcto1 = destino1;
    destino1 = destino2;
    destino2 = correcto1;

    cout<< "Sus destinos estas vacaciones fueron: \n";
    cout << destino1 << "\n";
    cout << destino2;
    return 0;
}