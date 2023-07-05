#include <iostream>
#include <string>

using namespace std;

bool esPrimo(int num, bool& error);

int main() {
    int numero;
    bool wrong = true;
    string rta;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (esPrimo(numero, wrong)) {
        
        cout << "El número ingresado es primo." << endl;
        
    } else {

        if (wrong) { //si el numero ingresado es incorrecto
            cout << "El número ingresado no es válido para calcular si es primo o no." << endl;
            cout << "¿Desea ingresar otro? (si/no): ";
            cin >> rta;

            if (rta == "si" || rta == "Si" || rta == "SI") {
                cout << "Ingrese otro número válido: ";
                cin >> numero;

                esPrimo(numero, wrong); //se llama la fc otra vez para comprobar

                if (!wrong && esPrimo(numero, wrong)) {
                    cout << "El número ingresado es primo." << endl;
                } else {
                    cout << "El número ingresado no es primo." << endl;
                }

            } // fin del if, SI DESEA INGRESAR OTRO NUMERO

        } else {
            cout << "El número ingresado no es primo." << endl;
        }
    }

    return 0;
}

bool esPrimo(int num, bool& error) {
    bool result = true;

    if (num <= 0) {
        error = true;
        result = false;
    } else if (num == 1) {
        result = false;
    } else {
        for (int divisor = 2; divisor <= num / 2; divisor++) {
            if (num % divisor == 0) {
                result = false;
                break;
            }
        }
    }

    return result;
}