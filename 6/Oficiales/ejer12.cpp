/*Implementa una función llamada "quitarVocales" que reciba una cadena de caracteres y elimine todas las
vocales de la palabra, manteniendo el resultado en la misma variable.*/

#include <iostream>
#include <string>
using namespace std;

void quitarVocales(string& palabra);

int main() {

    string pal;
    cout << "Ingrese una palabra: ";
    cin >> pal;
    
    quitarVocales(pal);
    cout << "Palabra sin vocales: " << pal << endl;

    return 0;
}

void quitarVocales(string& palabra) {

    string vocales = "aeiouAEIOU";
    bool encontrado = false;

    for (int i = 0; i < palabra.length(); i++) {
        bool encontrado = false;
        for (int j=0; j < vocales.length(); j++) {

            if (palabra[i] == vocales[j])
            {
                encontrado = true;
                break;
            }
        }

        if (encontrado) {
            palabra.erase(i, 1);
            i--; // Decrementar el índice para evitar saltarse caracteres
        }
    }
    
}
