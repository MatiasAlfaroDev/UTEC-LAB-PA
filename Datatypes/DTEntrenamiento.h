#ifndef DTENTRENAMIENTO_H
#define DTENTRENAMIENTO_H

#include "DTClase.h"
#include <iostream>
using namespace std;

class DTEntrenamiento :public DTClase {
    private:
        bool enRambla;
    public:
        DTEntrenamiento(int,string,Turno,bool);
        bool getEnRambla();
        void mostrarClase() override;
};


#endif DTENTRENAMIENTO_H