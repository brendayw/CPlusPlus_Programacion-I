/*Escribir un programa que genere un número aleatorio entre 1 y 100, y le pida al usuario que adivine
el número. El programa debe indicar si el número ingresado por el usuario es mayor o menor que el
número generado, y permitir que el usuario ingrese otro número. El programa debe seguir
solicitando que el usuario ingrese un número hasta que adivine el número correcto. Una vez que el
usuario adivine el número, el programa debe mostrar cuántos intentos le llevó al usuario adivinarlo.
Ayuda: Declarar las siguientes bibliotecas y usar las siguientes funciones:*/

#include <iostream>
#include <cstdlib> //genera los num aleatorios
#include <ctime> //obtiene la semilla de los num aleatorios

using namespace std;

int main() {
    int numeroAdivinar, numeroIngresado, intentos = 0;
    srand(time(NULL)); //inicializa la semilla 

    //generar num aleatorios del 1 al 100
    numeroAdivinar = rand() % 100 + 1;

    cout <<"Adivine el numero entre 1 y 100" <<endl;
    cin >> numeroIngresado;

    while (numeroIngresado != numeroAdivinar)
    {
        //cartel de si el numero a adivinar es mayor o menor
        if (numeroIngresado > numeroAdivinar) {
            cout <<"El numero a adivinar es menor que " << numeroIngresado <<endl;
        } else {
            cout <<"El numero adivinado es mayor que " << numeroIngresado <<endl;
        }

        //intente otra vez + contador
        cout <<"El numero ingresado es incorrecto."<<endl;
        cout <<"Intente de nuevo" <<endl;
        cin >> numeroIngresado;
        intentos++;

    } 

    //adivino el numero
    cout << "Haz adivinado el número! " <<endl;
    cout << "Cantidad de intentos: " << intentos <<endl;

    return 0;
}