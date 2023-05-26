/*Escribir un programa que pida al usuario un número y determine si es primo o no utilizando un bucle
while*/

#include <iostream>

using namespace std;

int main() {
    int i, num, cont;
   
    cout << "Por favor, ingrese un numero" <<endl;
        cin >> num;

    i = 2;
    cont = 0;
    
    while (i < num) {
        
        if (num%i==0){
            cont++;
            
        }
        i++;
    }

    if (cont > 0) {
        cout<<"El numero ingresado no es primo"<<endl;
    } else {
        cout << "El numero ingresado es primo"<<endl;
    }
    
    return 0;
}
