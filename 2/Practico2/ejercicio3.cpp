//Calcular el valor del coseno, seno y tangente de un ángulo (entero) en grados, ingresado por el
//usuario. Recuerde que las funciones “cos”, “sin” y “tan” trabajan con ángulos en radianes

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radianes;
    int cosen, sen, tang, angulo;

    cout<<"Ingrese un numero en grados para calcular: " <<endl;
    cin >> angulo;

   radianes = (angulo * 1) / 57.29;

    cosen = cos(radianes);
    sen = sin(radianes);
    tang = tan(radianes);

    cout <<"El valor del : " <<endl;
    cout<< "Coseno es: " << cosen<<endl;
    cout<< "Seno es: " << sen<<endl;
    cout<< "Tangente es: " <<tang<<endl;

    return 0;

}