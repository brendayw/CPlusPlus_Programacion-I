/*Implementa una función que reciba una estructura "Persona" (con campos como nombre, edad, etc.) por
valor y la imprima en pantalla*/
#include <iostream>

using namespace std;

//estructura
struct Persona 
{
    string nombre;
    string apellido;
    int edad;
    string ciudad;
};

//prototipos de funcion
void ingresopersona(Persona personas);

int main() {
    
    Persona personas;
    ingresopersona(personas);

    return 0;
}

void ingresopersona(Persona personas) {

    cout << "Nombre: ";
    cin >> personas.nombre; 

    cout << "Apellido: ";
    cin >> personas.apellido; 

    cout << "Edad: ";
    cin >> personas.edad; 

    cout << "Lugar de nacimiento: ";
    cin >> personas.ciudad; 

    //datos
    cout << endl;
    cout << "Datos de la persona: " << endl;
    cout << "Nombre: " << personas.nombre << endl;
    cout << "Apellido: " << personas.apellido << endl;
    cout << "Edad: " << personas.edad << endl;
    cout << "Lugar de nacimiento: " << personas.ciudad << endl;
}


