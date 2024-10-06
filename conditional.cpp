#include <iostream>
using namespace std;

int main() {
    // short edad = 0;
    // cout << "Introduce tu edad:" << endl;
    // cin >> edad;
    // if(edad >= 18 ){
    //     cout << "Eres mayor de edad " << endl;
    // } else {
    //     cout << "Eres menor de edad" << endl;
    // }

    int option = 0;

    cout << "Introduce la opción: " << endl;
    cout << "1. Buscar contactos " << endl;
    cout << "2. Crear contacto " << endl;
    cout << "3. Salir " << endl; 
    cin >> option;

    switch (option) {
    case 1:
        cout << "Buscando contacto" << endl;
        break;
    case 2: 
        cout << "Creando contacto" << endl;
        break;
    case 3:
        cout << "Saliendo..." << endl;
        break;
    default:
        cout << "No se capturaron ninguna de las opciones";
    }

    return 0;
}