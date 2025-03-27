#ifndef SPINNING_H
#define SPINNING_H

#include "Clase.h"

class Spinning :public Clase{
    private:
        int cantBicicletas;
    public:
        Spinning(int,string,Turno,int);
        ~Spinning();
        int getCantBicicletas();
        int cupo() override;
};

#endif 