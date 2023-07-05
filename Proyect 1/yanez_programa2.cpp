#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dia, mes;

    cout << "Ingrese su dia y mes de nacimiento por favor" << endl;
    cin >> dia;
    cin >> mes;

    switch (mes)
    {
    case 1:
        if (dia>=1 && dia<=20) {
            cout << "El signo del zodiaco es: Capricornio" <<endl;
        } else if (dia>=21 && dia<=31) {
            cout << "El signo del zodiaco es: Acuario" <<endl;
        }
        break;
    case 2: 
        if (dia>=1 && dia<=19) {
            cout << "El signo del zodiaco es: Acuario" <<endl;
        } else if (dia>=20 && dia<=29) {
            cout << "El signo del zodiaco es: Piscis" <<endl;
        }
        break;
    case 3:
        if (dia>=1 && dia<=20) {
            cout << "El signo del zodiaco es: Piscis" <<endl;
        } else if (dia>=21 && dia<=31) {
            cout << "El signo del zodiaco es: Aries" <<endl;
        }
        break;
    case 4:
         if (dia>=1 && dia<=19) {
            cout << "El signo del zodiaco es: Aries" <<endl;
        } else if (dia>=20 && dia<=30) {
            cout << "El signo del zodiaco es: Tauro" <<endl;
        }
        break;
    case 5:
         if (dia>=1 && dia<=20) {
            cout << "El signo del zodiaco es: Tauro" <<endl;
        } else if (dia>=21 && dia<=31) {
            cout << "El signo del zodiaco es: Géminis" <<endl;
        }
        break;
    case 6:
         if (dia>=1 && dia<=21) {
            cout << "El signo del zodiaco es: Géminis" <<endl;
        } else if (dia>=22 && dia<=30) {
            cout << "El signo del zodiaco es: Cáncer" <<endl;
        }
        break;
    case 7:
         if (dia>=1 && dia<=22) {
            cout << "El signo del zodiaco es: Cáncer" <<endl;
        } else if (dia>=23 && dia<=31) {
            cout << "El signo del zodiaco es: Leo" <<endl;
        }
        break;
    case 8:
         if (dia>=1 && dia<=23) {
            cout << "El signo del zodiaco es: Leo" <<endl;
        } else if (dia>=24 && dia<=31) {
            cout << "El signo del zodiaco es: Virgo" <<endl;
        }
        break;
    case 9:
         if (dia>=1 && dia<=22) {
            cout << "El signo del zodiaco es: Virgo" <<endl;
        } else if (dia>=23 && dia<=30) {
            cout << "El signo del zodiaco es: Libra" <<endl;
        }
        break;
    case 10:
         if (dia>=1 && dia<=22) {
            cout << "El signo del zodiaco es: Libra" <<endl;
        } else if (dia>=23 && dia<=31) {
            cout << "El signo del zodiaco es: Escorpio" <<endl;
        }
        break;
    case 11:
         if (dia>=1 && dia<=22) {
            cout << "El signo del zodiaco es: Escorpio" <<endl;
        } else if (dia>=23 && dia<=30) {
            cout << "El signo del zodiaco es: Sagitario" <<endl;
        }
        break;
    case 12:
         if (dia>=1 && dia<=21) {
            cout << "El signo del zodiaco es: Sagitario" <<endl;
        } else if (dia>=22 && dia<=31) {
            cout << "El signo del zodiaco es: Capricornio" <<endl;
        }
        break;
    default:
        cout << "El mes ingresado es incorrecto" << endl;
        break;
    }

    return 0;
}