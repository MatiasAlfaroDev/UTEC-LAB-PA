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
        DTClase(int,string,Turno);
        virtual ~DTClase();
        int getID();
        string getNombre();
        Turno getTurno();
        virtual void mostrarClase();
};


#endif