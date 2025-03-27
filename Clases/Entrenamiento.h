#ifndef ENTRENAMIENTO_H
#define ENTRENAMIENTO_H

#include "Clase.h"

class Entrenamiento :public Clase{
    public:
        bool enRambla;
    private:
        Entrenamiento(int,string,Turno,bool);
        ~Entrenamiento();
        bool getEnRambla();
        int cupo() override;
};

#endif