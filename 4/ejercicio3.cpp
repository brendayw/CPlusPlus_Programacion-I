//Escribir un programa que calcule la suma de los primeros n números naturales utilizando un bucle
//while.
/*del 1 al 10*/
#include <iostream>
using namespace std;

int main() {
    int cont = 1, suma = 0; /*acum = 0;*/

    while (cont>=1 && cont <=10) {

        //cont = 0; //si uso el acum esto no va
        
        cont++;
        suma = suma + cont;
        cout << "La suma de los primeros numeros naturales son: " << suma <<endl;
    }

    

    return 0;
}