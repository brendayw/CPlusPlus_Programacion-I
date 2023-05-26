//promedio de 3 notas, determinar si aprobo o no

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double nota1, nota2, nota3;
    double promedio;

    cout<<"Ingrese la primer nota"<<endl;
    cin>> nota1;

    cout<<"Ingrese la segunda nota"<<endl;
    cin>> nota2;

    cout<<"Ingrese la tercer nota"<<endl;
    cin>> nota3;

    promedio = (nota1+nota2+nota3) / 3;

    cout <<"El promedio de las tres notas es: " <<promedio<<endl;

    if (promedio>7) {
        cout<<"El alumno esta aprobado"<<endl;
    }
    else {
        cout<<"El alumno ha desaprobado"<<endl;
    }
    return 0;

}