/*Escribe una función llamada "intercambiar" que reciba dos variables de tipo string y las intercambie
entre sí.*/

#include <iostream>

using namespace std;

void intercambiar(string& var1, string& var2);

int main() {
    string palabra1, palabra2, aux;

    cout << "Escriba una palabra: "; 
    cin >> palabra1;

    cout << "Escriba otra palabra: ";
    cin >> palabra2;

    intercambiar(palabra1, palabra2);
    cout << "Ahora las palabras son: " << endl;
    cout << palabra1 << endl;
    cout << palabra2 << endl;

    return 0;
}

void intercambiar(string& var1, string& var2){
    string aux;

    aux = var1;
    var1 = var2;
    var2 = aux;
    
}
