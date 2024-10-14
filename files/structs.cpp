#include <iostream>
using namespace std;

int main() {
    struct persona {
        string nombre;
        string apellido;
        string telefono;
        int cantidadHijos;
    };

    persona persona1;
    persona1.nombre = "Juan";
    persona1.apellido = "Tamaño";
    persona1.telefono = "8298298298";
    persona1.cantidadHijos = 5;

    persona *persona2 = new persona;
    persona2->nombre = "Pedro";
    persona2->apellido = "Santos";
    persona2->telefono = "8297987798";
    persona2->cantidadHijos = 3;

    cout << persona1.nombre << endl;
    cout << persona2->nombre << endl;

    return 0;
}