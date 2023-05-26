//Escribir un programa que calcule el perímetro y el área de un círculo, dependiendo del radio que
//ingrese el usuario.
//perimetro = 2 * pi * radio
//area = pi * radio al cuadrado

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radio, pi, perimetro, area;

    cout <<"Ingrese el radio del circulo" <<endl;
    cin >> radio;

    pi = 3.14;
    perimetro = 2 * pi * radio;
    area = pi * pow(radio, 2);

    cout <<"El perimetro del circulo es: " << perimetro <<endl;
    cout <<"El area del circulo es: " << area <<endl;
    return 0;
}

