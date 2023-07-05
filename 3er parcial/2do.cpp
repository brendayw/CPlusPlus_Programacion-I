#include <iostream>

using namespace std;

void OrdenarArreglo(int arreglo[]);

int main() {

    int arr[] = {5, 53, 900, 54, 306, 2, 99};

    OrdenarArreglo(arr); //de manera descendente de por metodo de insercion

    return 0;
}

void OrdenarArreglo(int arreglo[]) {
    
    int pos;

    for (int i = 0; i < 7; i++) {
        pos = i;
        int aux = arreglo[i];

        while ((pos>0) && (arreglo[pos - 1] < aux)) {
           
            arreglo[pos] = arreglo[pos - 1];
            pos--;
        }

        arreglo[pos] = aux;
    }

    //mostrar arreglo ordenado
    for (int j=0; j < 7; j++) {
        cout << arreglo[j] << " ";
    }
}

/* METODO DE ORDENACION POR INSERCION --> es una manera de ordenar un arreglo. 
Se parte de una lisa vacia y se va insertando cada elemento en el lugar que corresponda
Se coloca el primer elemento en la lista vacia y se compara con otro para saber si es menor o mayor
e insertarlo en la lista en el lugar que corresponda.
Al insertarlo se desplazan los numeros ya insertados una posicion (derecha o izquierda) en caso de que sea el
menor elemento de todos los ya ordenados o el mayor a uno ya insertado

Existen dos zonas: una ordenada y una por ordenar. */

/*La diferencia con el METODO DE SELECCION DIRECTA es que en este metodo se elige directamente el menor
 elemento o el mayor, segun como se lo quiera ordenar y lo intercambia en caso de no encontrarse en la posicion
 correcta al comparar la posicion del primer elemento con el menor elemento seleccionado*/



/*ALGORITMOS DE BUSQUEDA

_ BUSQUEDA BINARIA --> compara con el elemento en la mitad de la lista y busca en sublistas más pequeñas, delimitando el
 segmento en donde va a buscar aunque al iniciar, lo hace en toda la lista.
si no lo encuentra en la mitad del arreglo, comienza a buscar hacia el final y sino hacia el inicio.
cuando el inicio sea mayor al final, no va a haber más lugares donde buscar.
ES MUCHO MÁS RAPIDA

_ BUSQUEDA EN LISTAS ORDENADAS --> busca un elemento en una secuencia, si la lista no esta ordenada busca hasta encontrarlo
o hasta el final. SI esta ordenada, recorre hasta encontrarlo o encontrar uno mayor o el final.
La busqueda termina cuando: se llega al final, se encuentra el buscado o se encuentra uno mayor. 
*/
