//Escribir un programa que al ingresar las notas de los 3 parciales del curso, devuelva el valor del
//promedio, el valor del promedio redondeado (“round”) y el valor del promedio truncado (“trunc”).

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double nota1, nota2, nota3, promedio1, promedio2, promedio3;

    cout <<"Ingrese la nota del primer parcial: " <<endl;
    cin >> nota1;
    cout <<"Ingrese la nota del segundo parcial: " <<endl;
    cin >> nota2;
    cout <<"Ingrese la nota del tercer parcial: " <<endl;
    cin >>nota3;

    promedio1 = (nota1+nota2+nota3) / 3;
    promedio2 =round(promedio1);
    promedio3 = trunc(promedio1);

    cout <<"El promedio es: " << promedio1 <<endl;
    cout <<"El promedio redondeado es: " << promedio2 <<endl;
    cout <<"El promedio truncado es: " <<promedio3 <<endl;
    return 0;
}