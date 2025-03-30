#ifndef SPINNING_H
#define SPINNING_H

#include "clase.h"

class Spinning :public Clase{
    private:
        int cantBicicletas;
    public:
        Spinning();
        ~Spinning();

        void setCantBicicletas(int);
        int getCantBicicletas();
        int cupo() override;
};

#endif 