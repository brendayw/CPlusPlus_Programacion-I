/*switch*/
/*Hacer un programa en C++, que ayude a una empresa a incrementar los salarios de los trabajadores 
de la siguiente manera:
Tipo de salario %
◦ De 0 a $60000 20%
◦ De $60000 a $100000 10%
◦ De $100000 a $150000 5%
◦ Más de $150000 3%*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main () {
    int salario, aumento = 0;
    cout <<"ingrese el salario"<<endl;
    cin >> salario;

    cout << "Ingrese la opcion de aumento que le corresponte"<<endl;
    cout <<"op 1: 0 - 60.000" <<endl;
    cout <<"op 2: 60.000 - 100.000" <<endl;
    cout <<"op 3: 100.000 - 150.000" <<endl;
    cout <<"op 4: +150.000" <<endl;
    cin >> aumento;

    

        switch (aumento) {
        case 1:
            aumento = 20 * salario / 100;
            cout << aumento + salario <<endl;
            break;
        case 2:
            aumento = 10 * salario / 100;
            cout << aumento + salario <<endl;
            break;
        case 3: 
            aumento = 5 * salario / 100;
            cout << aumento + salario <<endl;
            break;
        case 4:
            aumento = 3 * salario / 100;
            cout << aumento + salario <<endl;
            break;
        default: 
            cout << "error";
            break;
        }

    

    return 0;

}
