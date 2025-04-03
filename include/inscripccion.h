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
        Inscripcion();
        ~Inscripcion();

        void setSocio(Socio* socio);
        void setClase(Clase* clase);
        void setFecha(Fecha fecha);

        Socio * getSocio();
        Clase * getClase();
        Fecha getFecha();
};

#endif