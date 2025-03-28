#ifndef DTSPINNING_H
#define DTSPINNING_H
#include "dtClase.h"


class DTSpinning :public DTClase{
    private:
        int cantBicicletas;
    public:
        DTSpinning(int,string,Turno,int);
        int getCantBicicletas();
        void mostrarClase() override;
};




#endif DTSPINNING_H