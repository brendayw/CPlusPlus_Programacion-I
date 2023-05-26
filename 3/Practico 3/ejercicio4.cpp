//tienda de zapatos con promo de descuento para vender al mayor
//dependera del numero de zapato que se compran
//+10-->10% de descuento
//+20 pero -30 --> 20% de descuento
//+30 --> 40% de descuento
//Precio de zapatos = 8000 pesos

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int zapatos;
    double desc10, desc20, desc30, total, total_desc;

    cout<<"Ingrese la cantidad de zapatos que compro: "<<endl;
    cin >> zapatos;

    total = zapatos * 8000;

    if (zapatos>10 & zapatos<20) {
        desc10 = (10 * total) / 100;
        total_desc = total - desc10;

        cout <<"El descuento por mayor es del 10% es de " << desc10 <<" pesos" <<endl;
        cout <<"El total a pagar es de " << total_desc << " pesos" <<endl;
    }
    else if (zapatos>20 & zapatos<30) {
        desc20 = (20 * total) / 100;
        total_desc = total - desc20;

        cout <<"El descuento por mayor es del 20% es de " << desc20 <<" pesos" <<endl;
        cout <<"El total a pagar es de " << total_desc << " pesos" <<endl;
    } 
    else {
        desc30 = (40 * total) / 100;
        total_desc = total - desc10;

        cout <<"El descuento por mayor es del 40% es de " << desc30 <<" pesos" <<endl;
        cout <<"El total a pagar es de " << total_desc << " pesos" <<endl;
    }
    return 0;

}