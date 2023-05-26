//incrementar salarios

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int salario;

    cout<<"Ingrese el salario del empleado"<<endl;
    cout<<"Op 1 --> entre $0 y $60.000"<<endl;
    cout<<"Op 2 --> entre $60.000 y $100.000"<<endl;
    cout<<"Op 3 --> entre $100.000 y $150.000"<<endl;
    cout<<"Op 4 --> más de $150.000"<<endl;

    cin>> salario;

    switch (salario) {
    case 1:
        cout<<"El incremento es del 20%"<<endl;
        break;
    case 2:
        cout<<"El incremento es del 10%"<<endl;
        break;
    case 3:
        cout<<"El incremento es del 5%"<<endl;
        break;
    case 4:
        cout<<"El incremento es del 3%"<<endl;
        break;
    default:
        {
            cout<<"La opción de salario ingresado no es correcta"<<endl;
        }
        break;
    }
    return 0;

}