#ifndef DTCLASE_H
#define DTCLASE_H

#include <iostream>
#include "Turno.h"
using namespace std;

class DTClase {

    private:
        int id;
        string nombre;
        Turno turno;

    public:
        DTClase();
        virtual ~DTClase();

        void setId(int id);
        void setNombre(string nombre);
        void setTurno(Turno turno);

        int getID();
        string getNombre();
        Turno getTurno();
        string getTipoClase();
        virtual void mostrarClase();

        friend std::ostream& operator<<(std::ostream& os, const DTClase& dt);
};

#endif