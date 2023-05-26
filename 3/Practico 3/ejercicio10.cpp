//crear una calculadora

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int operacion;
    double num1, num2;
    double s, r, d, m;

    cout<<"Ingrese dos numeros"<<endl;
    cin>>num1;
    cin>>num2;

    cout<<"Ingrese la operacion que desea realizar"<<endl;
    cout<<"Op 1 --> suma"<<endl;
    cout<<"Op 2 --> resta"<<endl;
    cout<<"Op 3 --> division"<<endl;
    cout<<"Op 4 --> multiplicacion"<<endl;
    cin>> operacion;

    switch (operacion)
    {
    case 1:
        s = num1 + num2;
        cout<<"El resultado de la suma es: "<< s <<endl;
        break;
    case 2:
        r = num1 - num2;
        cout<<"El resultado de la resta es: " << r <<endl;
        break;
    case 3:
        d = num1 / num2;
        cout<<"El resultado de la division es: "<<d<<endl;
        break;
    case 4:
        m = num1 * num2;
        cout<<"El resultado de la multiplicacion es: "<<m<<endl;
    default:
        cout<<"La opcion ingresada es incorrecta"<<endl;
        break;
    }
    return 0;


}