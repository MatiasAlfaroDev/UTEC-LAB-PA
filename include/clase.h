#ifndef CLASE_H
#define CLASE_H

#include <iostream>
#include "dtClase.h"
using namespace std;



class Clase {
    private:
        int id;
        string nombre;
        Turno turno;
    public:
        Clase();
        virtual ~Clase();

        int getID();
        string getNombre();
        Turno getTurno();

        void setId(int);
        void setNombre(string);
        void setTurno(Turno);

        virtual int cupo();
        DTClase getDTClase();
};


#endif 