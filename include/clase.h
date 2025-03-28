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
        Clase(int,string,Turno,int);
        virtual ~Clase();
        int getID();
        string getNombre();
        Turno getTurno();
        virtual int cupo();
        DTClase getDTClase();
};


#endif 