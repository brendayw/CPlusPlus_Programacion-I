/*Crea un programa que gestione una lista de libros. Cada libro debe tener los siguientes atributos: título,
autor y año de publicación. El programa debe tener las siguientes funciones:

    • agregarLibro: Esta función recibe por parámetro los datos de un libro (título, autor y año de
    publicación) y agrega un nuevo libro a la lista de libros.
    • buscarLibroPorAutor: Esta función recibe por parámetro el nombre de un autor y busca todos los
    libros de la lista que coincidan con ese autor. Devuelve una lista de libros que cumplen con la
    condición.
    • mostrarLibros: Esta función muestra en pantalla todos los libros de la lista, uno por línea.

Utiliza una estructura llamada Libro para representar los datos de cada libro.*/

#include <iostream>
using namespace std;

struct Libro {
    
    string titulo;
    string autor;
    int anio;
};

//prototipos de funciones
void agregarLibro(Libro& book);
void buscarLibroPorAutor(Libro arreglo[], int cantidad);
void mostrarLibros(Libro arreglo[], int cantidad);

int main() {

    int maximo = 100;
    Libro lista[maximo];
    int cant_libros = 0;

    mostrarLibros(lista, cant_libros);

    buscarLibroPorAutor(lista, cant_libros);
    
}

void agregarLibro(Libro& book) {
    cout << "Ingrese el titulo: ";
    cin >> book.titulo;

    cout << "Ingrese el autor: ";
    cin >> book.autor;

    cout << "Ingrese el año de publicacion: ";
    cin >> book.anio;

}

void buscarLibroPorAutor(Libro arreglo[], int cantidad) {

   string busqueda;
   bool bandera = false;

   cout << "Nombre a buscar: " << endl;
   cin >> busqueda;

   for (int i=0; i < cantidad; i++) {
        if (busqueda == arreglo[i].autor) {
            cout << "Titulo: " << arreglo[i].titulo << endl;
            cout << "Autor: " << arreglo[i].autor << endl;
            cout << "Año de publicacion: " << arreglo[i].anio << endl;

            bandera = true;
        }

        if (!bandera) {
            cout << "No se ha encontrado ese libro." << endl;
        }
   }

}
void mostrarLibros(Libro arreglo[], int cantidad) {

    for (int i=0; i < cantidad; i++) {

        cout << "Titulo: " << arreglo[i].titulo << endl;
        cout << "Autor: " << arreglo[i].autor << endl;
        cout << "Año de publicacion: " << arreglo[i].anio << endl;

    }
}