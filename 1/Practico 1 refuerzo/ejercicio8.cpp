#include <iostream>
#include <cmath> //ERROR 1, no incluyo esta biblio
using namespace std;

int main() {
    int num1, num2 = 5;
    //error 2, no inicializo el uno antes de usar
    num1 = 10;
    
    int resultado = num1 + num2; //error 3, esta declarando una variable y asignandole un resultado, las demas veces las redeclaras
    cout<< "La suma de los numeros es: " <<resultado<<endl;

    resultado ==num1 - num2;
    cout <<"La resta de los numeros es: " <<resultado <<endl;

    int resultado = num1 * num2;
    cout <<"La multiplicacion de los numeros es: " <<resultado<<endl;

    return 0; // error 3, olvido esto
}