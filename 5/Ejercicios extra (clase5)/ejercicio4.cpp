//Escriba un programa que solicite al usuario dos números enteros entre 1 y 10, y muestre en pantalla
//el resultado de la división entre el primero y el segundo si ambos números son pares. Si alguno de
//los números es impar, el programa debe mostrar el resultado del número mayor elevado al menor . Si
//alguno de los números no está en el rango especificado debe mostrar un mensaje de error.
//Tener en cuenta que la división puede dar valores decimales

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num1, num2, pot;
    double div;

    cout << "Ingrese dos numeros enteros entre 1 y 10: " << endl;
    cin >> num1;
    cin >> num2;

    if (num1<=10 && num1>=1 && num2<=10 && num2>=1) {
        if (num1 % 2 == 0 && num2 % 2 ==0) {
            div = num1 / num2;
            cout << "El resultado de la division entre " << num1 << " y " << num2 << " es: " << div <<endl;
        } else {
            if (num1>num2) {
              pot = pow(num1, num2);  
            } else {
                pot = pow(num2, num1);
            }
            cout << "El resultado de la potencia es:  " << pot <<endl;
            
        }
    } else {
        cout << "El numero ingresado es incorrecto" <<endl;
    }
    return 0;
}