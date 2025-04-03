#ifndef ENTRENAMIENTO_H
#define ENTRENAMIENTO_H

#include "clase.h"

class Entrenamiento :public Clase {

    public:
        bool enRambla;
        
    private:
        Entrenamiento();
        ~Entrenamiento();
        void setEnRambla(bool);
        bool getEnRambla();
        int cupo() override;
};

#endif