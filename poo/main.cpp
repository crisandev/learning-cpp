#include "Estudiante.h"
#include "persona.h"

int main() {
    Persona *persona = new Persona();
    persona->setNombre("Juan");
    persona->setApellido("Garcia");
    persona->setTelefono("8294945555");

    Persona *persona2 = new Persona();
    persona2->setNombre("Marta");
    persona2->setApellido("Rodriguez");
    persona2->setTelefono("8294942222");

    persona->saludar(persona2);
    Estudiante *estudiante = new Estudiante();
    estudiante->setNombre("Marcos");
    estudiante->setApellido("Garcia");
    estudiante->setMatricula("2021-1819");

    cout << estudiante->getNombre() << " " << estudiante->getApellido() << " " << estudiante->getMatricula() << endl;
    delete persona;
    delete persona2;

    return 0;
}
