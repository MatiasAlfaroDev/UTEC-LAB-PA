#ifndef DTENTRENAMIENTO_H
#define DTENTRENAMIENTO_H

#include "dtClase.h"
#include <iostream>
using namespace std;

class DTEntrenamiento :public DTClase {
    private:
        bool enRambla;
    public:
        DTEntrenamiento();
        virtual ~DTEntrenamiento();
        void setEnRambla(bool);
        bool getEnRambla();
        void mostrarClase() override;
};


#endif DTENTRENAMIENTO_H