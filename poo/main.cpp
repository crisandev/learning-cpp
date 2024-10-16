#include "Asignatura.h"
#include "Estudiante.h"
#include "persona.h"

void imprimirDatos(Persona *persona) {
    cout << persona->getNombre() << endl;
};

int main() {
    // Persona *persona = new Persona();
    // persona->setNombre("Juan");
    // persona->setApellido("Garcia");
    // persona->setTelefono("8294945555");
    //
    // Persona *persona2 = new Persona();
    // persona2->setNombre("Marta");
    // persona2->setApellido("Rodriguez");
    // persona2->setTelefono("8294942222");
    //
    // persona->saludar(persona2);
    // Estudiante *estudiante = new Estudiante();
    // estudiante->setNombre("Marcos");
    // estudiante->setApellido("Garcia");
    // estudiante->setMatricula("2021-1819");
    //
    // cout << estudiante->getNombre() << " " << estudiante->getApellido() << " " << estudiante->getMatricula() << endl;
    // delete persona;
    // delete persona2;
    //

    // Persona *persona = new Persona();
    // persona->setNombre("joel");
    // persona->saludar(persona);
    // cout << persona->getNombre() << endl;
    //
    // Estudiante *persona = new Estudiante();
    // persona->setNombre("Marcos");
    // persona->saludar(persona);
    // cout << persona->getNombre() << endl;
    // Persona *persona2 = new Persona();
    // persona2->setNombre("manuela");
    //
    // imprimirDatos(persona);
    // imprimirDatos(persona2);


    // // Up Casting
    // Estudiante *estudiante = new Estudiante();
    // estudiante->setNombre("Ricardo");
    // Persona *persona = (Persona *) estudiante;
    // cout << persona->getNombre() << endl;

    Estudiante *estudiante = new Estudiante;
    Persona *persona = estudiante;
    Estudiante *estudiante2 = (Estudiante *) persona;
    Asignatura *asignatura = dynamic_cast<Asignatura *> (persona);
    // Asignatura *asignatura = (Asignatura *) (persona);

    if(asignatura == NULL) {
        cout << "Esta null" << endl;
    } else {
        cout << "Esta NO null" << endl;
        cout << estudiante2->getNombre() << endl;
    }
    estudiante2->setNombre("Estudiante");
    estudiante2->setMatricula("2021-1899");
    cout << estudiante2->getNombre() << " " << estudiante2->getMatricula() << endl;


    return 0;
}
