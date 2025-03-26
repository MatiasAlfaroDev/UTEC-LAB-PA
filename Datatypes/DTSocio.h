#ifndef DTSOCIO_H
#define DTSOCIO_H

#include <iostream>
using namespace std;

class DTSocio {
    private:
        int ci;
        string nombre;
    public:
        DTSocio();
        DTSocio(int,string);
        int getCI();
        string getNombre();
};

#endif DTSOCIO_H
