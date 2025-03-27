#ifndef INSCRIPCCION_H
#define INSCRIPCCION_H

#include "Datatypes/Fecha.h"

class Inscripcion {
    private:
        Fecha fecha;
    public:
        Inscripcion(Fecha);
        ~Inscripcion();
        Fecha getFecha();
}

#endif