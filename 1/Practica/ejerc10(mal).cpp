#include <iostream>
#include <string>
using namespace std;

int main() {
    string destino1, destino2, correcto1;

    //ingresados por maria
    cout << "Ingrese el primer destino de vacaciones: ";
    cin >> destino1;

    cout <<"Ingrese el segundo destino de vacaciones: ";
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