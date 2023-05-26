//numero par o impar

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    
    cout <<"Por favor ingrese un numero"<<endl;
    cin >> num;

    if (num%2==0) {
        cout<<"El numero ingresado es par"<<endl;
    }
    else {
        cout<<"El número es impar"<<endl;
    }
    return 0;
    
}