// lea tres numeros y diga cual es el mayor

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2, num3;

    cout <<"Ingrese el primer número: "<<endl;
    cin >> num1;
    
    cout <<"Ingrese el segundo número: "<<endl;
    cin >> num2;

    cout <<"Ingrese el tercer número: "<<endl;
    cin >> num3;

    if (num1 > num2 & num1>num3 ) {
        cout<<"El mayor de los tres es el primer número ("<< num1 <<")"<<endl;
    }
    else if (num2>num3 & num2>num1) {
        cout<<"El mayor de los tres es el segundo número ("<< num2 <<")"<<endl;
    }
    else {
        cout<<"El mayor de los tres es el tercer numero ("<< num3 <<")"<<endl;
    }
    return 0;
}