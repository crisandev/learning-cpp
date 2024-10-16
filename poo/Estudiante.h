//
// Created by scris on 10/16/2024.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "persona.h"

class Estudiante : public Persona {
private:
    string matricula;

public:
    Estudiante();

    virtual ~Estudiante();

    void saludar(Persona *persona);


    string getMatricula() const {
        return matricula;
    }

    void setMatricula(const string &matricula) {
        this->matricula = matricula;
    }
};


#endif //ESTUDIANTE_H
