//Escribir un programa que cuando el usuario ingrese los catetos de un triángulo rectángulo, calcule y
//muestre en consola el valor de la hipotenusa. (Teorema de Pitágoras).

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    cout <<"Ingrese el valor de los catetos del triangulo rectangulo" << endl;
    cin >> cateto1;
    cin >> cateto2;

    hipotenusa = sqrt((pow(cateto1,2)+pow(cateto2,2)));

    cout << "El valor de la hipotenusa es: " <<hipotenusa <<endl;
    return 0;

}