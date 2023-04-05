/* 
 * File:	main.cpp
 * Date:	march 2023
 * Comms:	Fichero main.cpp correspondiente a la práctica 1 de la asignatura
 *          de Estructuras de Datos y Algoritmos.
 */
#include "agenda.hpp"
using namespace std;

void mostrarMenu() {
    cout << "MENU DE OPERACIONES" << endl;
    cout << "1 - Añadir contacto a la agenda." << endl;
    cout << "2 - Mostrar por pantalla los datos de los contactos introducidos." << endl;
    cout << "3 - Borrar el último contacto." << endl;
    cout << "4 - Comprobar si en la agenda hay algún contacto con un nombre concreto" << endl;
    cout << "\n\n";
}

int main(){
	int operacion = 0;
    mostrarMenu();
    cout << "seleccione una operacion: ";
    cin >> operacion;

    agenda a;
    iniciar(a);
    contacto c;
    string nombre;

    if (operacion == 1){
        crear("Nerea","Paseo de la Constitucion",123456789,c);
        anyadir(a,c);
    }
    else if (operacion == 2){
        
    }
    else if (operacion == 3){
        borrarUltimo(a);
        cout << "El último contacto de la agenda ha sido eliminado correctamente.\n";
    }
    else if (operacion == 4){
        cout << "Introduzca el nombre de un contacto: ";
        cin >> nombre;
        c.nombre = nombre;      //Ver cómo lo arreglo.
        esta(a,c);

    }
}
