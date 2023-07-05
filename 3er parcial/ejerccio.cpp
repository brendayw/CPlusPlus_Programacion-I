#include <iostream>
#include <string>
using namespace std;

struct Atletas{
    string nombre;
    int edad;
    int tiempo[3];
    bool mejoro;
};

//prototipos
void llenarLista(Atletas arreglo[], int longitud, int& cantidad);
void insertar(Atletas& atletas);
void mostrar(Atletas arreglo[], int cantidad);
bool mejor(int arreglo, int longitud);
double porcentajemejor(Atletas arreglo[], int cantidad);

int main() {
    const int max = 100;
    Atletas listado[max];
    int cant = 0;

    llenarLista(listado, max, cant);

    mostrar(listado, cant);

    double porcent = porcentajemejor(listado, cant);
    cout << "El porcentaje de atletas que mejoraron es: " << porcent << endl;

    return 0;
}

void llenarLista(Atletas arreglo[], int longitud, int& cantidad) {
    char op = 's';
    bool sigue = false;

    do {
        if (cantidad < longitud) {
            
            Atletas nuevo;
            insertar(nuevo);
            arreglo[cantidad] = nuevo;
            cantidad++;

            sigue = true;
        } else {
            cout << "No hay más espacio en el arreglo" << endl;
            op = 'n';
            sigue = false;
        }

    } while (op == 'S' || op == 's');

}

void insertar(Atletas& atletas) {
    
    cout << "Ingrese el nombre del atleta: ";
    cin >> atletas.nombre;

    cout << "Ingrese la edad: ";
    cin >> atletas.edad;

    cout << "INgrese el timpo de las ultimas 3 carreras" <<endl;
    for (int i=0; i < 3; i++) {
        cout << "INgrese el timpo de las ultimas 3 carreras" << i+1 <<endl;
        cin >> atletas.tiempo[i];
    }

    atletas.mejoro = mejor(atletas.tiempo, 3);

}

void mostrar(Atletas arreglo[], int cantidad) {

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Nombre del atleta: " << arreglo[i].nombre << endl;
        cout << "Edad: " << arreglo[i].edad << endl;

        if (arreglo[i].mejoro) {
            cout << "El atleta mejoro su marca" << endl;
        } else {
            cout << "El atleta NO mejoro su marca" << endl;
        }

    }
    cout << endl;
}

bool mejor(int arreglo[], int longitud) {
    
    int menor = arreglo[0];
    bool mejor = false;

    for (int i = 0; i < longitud; i++) 
    {
        if (menor >= arreglo[i]) {
            menor = arreglo[i];
        }

        if (menor == arreglo[longitud - 1]) {
            mejor = true;
        } else {
            mejor = false;
        }
    }

    return mejor;
}

double porcentajemejor(Atletas arreglo[], int cantidad) {
    double suma =0;
    double porcentaje = 0;

    for (int i=0; i < cantidad; i++) {
        if (arreglo[i].mejoro) {
            suma += 1;
        }
    }
    porcentaje = (suma * 100) / cantidad;

    return porcentaje;
}


