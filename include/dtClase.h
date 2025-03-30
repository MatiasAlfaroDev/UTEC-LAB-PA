#ifndef DTCLASE_H
#define DTCLASE_H

#include <iostream>
using namespace std;

#include "Turno.h"

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
        
        virtual void mostrarClase();
};


#endif