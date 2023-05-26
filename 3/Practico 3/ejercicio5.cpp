//sueldo semanal
//<=40 --> 1000 por hora
//>40 --> horas extra 2000 por hora

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double sueldo1, sueldo2;
    int horas, extra;

    cout <<"Ingrese la cantidad de horas trabajadas"<<endl;
    cin>> horas;

    if (horas<=40) {
        sueldo1 = horas * 1000;

        cout <<"El sueldo semanal es de " <<sueldo1<< " pesos"<<endl;
    }
    else {
        extra = horas - 40;
        sueldo2 = 40 * 1000 + (extra * 2000);

        cout <<"El sueldo semanal es de " <<sueldo2<< " pesos"<<endl;
    } 
    return 0;    
}