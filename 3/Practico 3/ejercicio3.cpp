//lea una letra y diga si es una vocal

#include <iostream>
#include <string>

using namespace std;

int main() {
    string letra;

    cout <<"Ingrese una letra"<<endl;
    cin >> letra;

    if (letra=="a" || letra=="e" || letra=="i" || letra=="o" || letra=="u") { // significa or, si o si con dos iguales!
        cout <<"La letra ingresada es una vocal"<<endl;
    }
    else {
        cout <<"La letra ingresada no es una vocal, es una consonante"<<endl;
    }
    return 0;
}