// membresia A --> 10% descuento
//membresia b --> 15%
//membresia c --> 20%

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string membresia;
    double desc1, desc2, desc3;
    double total, subtotal;
    cout<<"Ingrese el monto a abonar"<<endl;
    cin>> subtotal;

    cout<<"Ingrese el tipo de membresia (A, B o C)"<<endl;
    cin>> membresia;

    if (membresia=="A") {
        desc1 = 10*subtotal /100;
        total = subtotal - desc1;
        
        cout<<"Al tener el tipo de membresia "<<membresia<< " se le realizara un 10% de descuento"<<endl;
        cout << "El descuento es de "<<desc1 << " pesos"<<endl;
        cout<<"El total a pagar es de "<<total<< " pesos"<<endl;
    }
    else if (membresia=="B") {
        desc2 = 15*subtotal /100;
        total = subtotal - desc2;
        
        cout<<"Al tener el tipo de membresia "<<membresia<< " se le realizara un 15% de descuento"<<endl;
        cout << "El descuento es de "<<desc2 << " pesos"<<endl;
        cout<<"El total a pagar es de "<<total<< " pesos"<<endl;
    }
    else {
        desc3 = 20*subtotal /100;
        total = subtotal - desc3;
        
        cout<<"Al tener el tipo de membresia "<<membresia<< " se le realizara un 20% de descuento"<<endl;
        cout << "El descuento es de "<<desc3 << " pesos"<<endl;
        cout<<"El total a pagar es de "<<total<< " pesos"<<endl;
    }
    return 0;


}