//ingrese una fecha y calcule el dia correspondiente del año

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dia, mes;

    cout<<"Ingrese una fecha, por favor (dia y mes)"<<endl;
    cin>> dia;
    cin>>mes;

    switch (mes)
    {
    case 1:
        cout<<"El día es " <<dia<< " de Enero de 2023";
        break;
    case 2:
        cout<<"El día es " <<dia<< " de Febrero de 2023";
        break;
    case 3:
        cout<<"El día es " <<dia<< " de Marzo de 2023";
        break;
    case 4:
        cout<<"El día es " <<dia<< " de Abril de 2023";
        break;
    case 5:
        cout<<"El día es " <<dia<< " de Mayo de 2023";
        break;
    case 6:
        cout<<"El día es " <<dia<< " de Junio de 2023";
        break;
    case 7:
        cout<<"El día es " <<dia<< " de Julio de 2023";
        break;
    case 8:
        cout<<"El día es " <<dia<< " de Agosto de 2023";
        break;
    case 9:
        cout<<"El día es " <<dia<< " de Septiembre de 2023";
        break;
    case 10:
        cout<<"El día es " <<dia<< " de Octubre de 2023";
        break;
    case 11:
        cout<<"El día es " <<dia<< " de Noviembre de 2023";
        break;
    case 12:
        cout<<"El día es " <<dia<< " de Diciembre de 2023";
        break;
    default: 
    {
        if (mes==2 && dia>28)
        {
            cout<<"Febrero solo tiene 28 días, la fecha ingresada es incorrecta"<<endl;
        }
        else {
            cout<<"La fecha ingresada es incorrecta"<<endl;
        }
    }
        break;
    }
    return 0;
}