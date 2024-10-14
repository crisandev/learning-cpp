#include "persona.h"
#include <iostream>
using namespace std;

Persona::Persona() {
    cout << "Se ha creado una persona" << endl;
}

Persona::~Persona() {
    cout << "Se ha destruido una persona" << endl;
}

void Persona::saludar(Persona *persona) {
    cout << "Hola " << persona->getNombre() << endl;
}
