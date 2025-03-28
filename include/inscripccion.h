#ifndef INSCRIPCCION_H
#define INSCRIPCCION_H

#include "fecha.h"
#include "socio.h"
#include "clase.h"

class Inscripcion {
    private:
        Socio * socio;
        Clase * clase;
        Fecha fecha;
    public:
        Inscripcion(Socio*,Clase*,Fecha);
        ~Inscripcion();
        Socio * getSocio();
        Clase * getClase();
        Fecha getFecha();
};

#endif