#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int dia, mes;
    string rta;
    float invitados, total_invitados;

    //inciso 1
    cout << "Por favor, ingrese su dia y mes de nacimiento" << endl;
    cin >> dia;
    cin >> mes;
    cout <<endl;

    if ((mes==1 && dia>=21) | (mes==2 && dia<=19)) {
        cout << "El signo del zodiaco es: Acuario" <<endl;
    } else if ((mes==2 && dia>=20) | (mes==3 && dia<=20)) {
            cout << "El signo del zodiaco es: Piscis" <<endl;
        } else if ((mes==3 && dia>=21) | (mes==4 && dia<=19)) {
                cout << "El signo del zodiaco es: Aries" <<endl;
            } else if ((mes==4 && dia>=20) | (mes==5 && dia<=20)) {
                    cout << "El signo del zodiaco es: Tauro" <<endl;
                } else if ((mes==5 && dia>=21) | (mes==6 && dia<=21)) {
                        cout << "El signo del zodiaco es: Géminis" <<endl;             
                    } else if ((mes==6 && dia>=22) | (mes==7 && dia<=22)) {
                            cout << "El signo del zodiaco es: Cáncer" <<endl;
                        } else if ((mes==7 && dia>=23) | (mes==8 && dia<=23)) {
                                cout << "El signo del zodiaco es: Leo" <<endl;
                            } else if ((mes==8 && dia>=24) | (mes==9 && dia<=22)) {
                                    cout << "El signo del zodiaco es: Virgo" <<endl;
                                } else if ((mes==9 && dia>=23) | (mes==10 && dia<=22)) {
                                        cout << "El signo del zodiaco es: Libra" <<endl;
                                    } else if ((mes==10 && dia>=23) | (mes==11 && dia<=22)) {
                                            cout << "El signo del zodiaco es: Escorpio" <<endl;
                                        } else if ((mes==11 && dia>=23) | (mes==12 && dia<=21)) {
                                                 cout << "El signo del zodiaco es: Sagitario" <<endl;
                                            } else if ((mes==12 && dia>=22) | (mes==1 && dia<=20)) {
                                                    cout << "El signo del zodiaco es: Capricornio" <<endl;
                                                }
    cout << endl;

    //inciso 2
    cout << "¿Te gusta festejar tu cumpleaños?: ";
    cin >> rta;

    cout << endl;
    if (rta=="si" | rta=="Si" | rta=="SI") {
        cout << "Que Bueno!" << endl;
    } else if (rta=="no" | rta=="No" | rta=="NO") {
        cout << "Que lastima." << endl;
    } else {
        cout << "La respuesta ingresada no es correcta, por favor vuelva a intentarlo (si / no)." << endl;
    }
    cout << endl;

    //inciso 3
    cout << "Cuantos son los invitados a tu cumpleaños? ";
    cin >> invitados;
    cout << endl;
    
    total_invitados = round(sqrt(pow(invitados, 4)));

    cout << "Tu cantidad de invitados elevados a la 4, raiz cuadrada y redondeando el valor, son: " << total_invitados << endl;
    cout << endl;

    return 0;
}