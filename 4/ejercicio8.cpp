/*Escribir un programa que calcule la media de una cantidad de números 
introducidos por teclado do while*/

//media = sumatoria de ns / n

#include <iostream>

using namespace std;

int main() {
    int i=0, num, cant, suma =0;
    float media;

    cout <<"Ingrese la cantidad de numeros que va a teclear"<<endl;
    cin>>cant;

    do 
    {
        cout << "Ingrese un numero" <<endl;
        cin>> num;
        i++;
        suma += num;
        
    } while (i < cant);

    media = suma / cant; // no muestra numero decimal
    cout <<"La media de los numeros ingresados es: " << media << endl;

    return 0;

}
