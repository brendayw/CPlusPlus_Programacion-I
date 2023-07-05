//Escriba un programa que solicite al usuario el valor de un ángulo en grados, y muestre en pantalla su
//valor en radianes. Si el valor ingresado es mayor que 360, el programa debe calcular cuantas vueltas
//dió (1 vuelta = 360°) y en qué cuadrante se encuentra dicho ángulo. Si es menor que 360° que
//calcule el seno, coseno y tangente de dicho ángulo

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int angulo, vueltas, cuadrante;
    double radianes, cosen, seno, tang;
    
    cout << "Ingrese un angulo:" << endl;
    cin >> angulo;

    radianes = (angulo * 1) / 57,2957;

    cout << "Su valor en radianes es: " << radianes << endl;

    if (angulo > 360) {
        vueltas = angulo / 360;
        cout << "La cantidad de vueltas que dió es: " << vueltas << endl;
        if (angulo < 450) {
            cout << "El angulo se encuentra en el primer cuadrante."<<endl;
        } else 
            if (angulo >= 450 && angulo <= 540) {
                cout << "El angulo se encuentra en el segundo cuadrante."<<endl;
            } else
                if (angulo >= 540 && angulo <=630) {
                    cout << "El angulo se encuentra en el tercer cuadrante."<<endl;
                } else {
                    cout << "El angulo se encuentra en el cuarto cuadrante."<<endl;
                };
    } else 
        if (angulo < 360) {
            seno = sin(angulo);
            cosen = cos(angulo);
            tang = tan(angulo);

            cout << "El seno del angulo ingresado es: " << seno << endl;
            cout << "El coseno del angulo ingresado es: " << cosen << endl;
            cout << "La tangente del angulo ingresado es: " << tang << endl;
        }

}