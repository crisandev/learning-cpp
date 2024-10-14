#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;


class Persona {
  private:
    string nombre;
    string apellido;
    string telefono;

  public:
    Persona();
    virtual ~Persona();

    void saludar(Persona *persona);

    string getNombre() const {
        return nombre;
    }

    void setNombre(const string &nombre) {
        this->nombre = nombre;
    }

    string getApellido() const {
        return apellido;
    }

    void setApellido(const string &apellido) {
        this->apellido = apellido;
    }

    string getTelefono() const {
        return telefono;
    }

    void setTelefono(const string &telefono) {
        this->telefono = telefono;
    }
};


#endif // PERSONA_PERSONA_PERSONA_HPP
