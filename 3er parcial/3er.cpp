#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Estudiantes {
    string nombre;
    int edad;
    int nota[3];
    bool aprobado;
};

void Ingresar(Estudiantes arr[], int cont);
void Mostrar(Estudiantes arr[], int cont);
void Porcentaje(Estudiantes arr[], int cont);

int main() {
    Estudiantes arr[100];
    int cont = 0;

    do {
        Ingresar(arr, cont);
        Mostrar(arr, cont);
        Porcentaje(arr, cont);

        cont++;
    } while (cont !=100);

    return 0;
}

void Ingresar(Estudiantes arr[], int cont) {
    int suma = 0;
    Estudiantes nuevo;

    cout << "Ingresar nombre: ";
    cin >> nuevo.nombre;

    cout << "Ingresar edad: ";
    cin >> nuevo.edad;

    for (int i = 0; i < 3; i++) {
        cout << "Ingrese la nota: " << i << endl;
        cin >> nuevo.nota[i];

        suma += nuevo.nota[i];
    }

    if ((suma / 3) >= 6) {
        nuevo.aprobado = true;
    } else {
        nuevo.aprobado = false;
    }

    arr[cont] = nuevo;
}

void Mostrar(Estudiantes arr[], int cont) {

    for (int i = 0; i < cont; i++) {
        cout << "Alumno " << i++ << endl;
        cout << "Nombre: " << arr[i].nombre << endl;
        cout << "Edad: " << arr[i].edad << endl;
        if (arr[i].aprobado == true) {
            cout << "Aprobado" << endl;
        } else {
            cout << "Desaprobado" << endl;
        }
        
    }
}

void Porcentaje(Estudiantes arr[], int cont) {
    int cant;
    double porcent;

    for (int i = 0; i < cont; i++) {
        if (arr[i].aprobado == true) {
            cant++;
        }
        porcent = (cant * 100) / cont;
        cout << "El porcentaje desarpobados es: " << porcent << " %" << endl;
    }
}