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

        friend std::ostream& operator<<(std::ostream& os, const DTSpinning& dt);

};

#endif 