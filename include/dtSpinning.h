#ifndef DTSPINNING_H
#define DTSPINNING_H

#include "dtClase.h"


class DTSpinning : public DTClase {

    private:
        int cantBicicletas;

    public:
        DTSpinning();
        ~DTSpinning() override;

        void setCantBicicletas(int);
        int getCantBicicletas();

        void mostrarClase() override;
};

#endif 