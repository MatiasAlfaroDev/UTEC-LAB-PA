#ifndef DTSOCIO_H
#define DTSOCIO_H

#include <iostream>
using namespace std;

class DTSocio {
    private:
        string ci;
        string nombre;
    public:
        DTSocio();
        ~DTSocio();
        void setCi(string);
        void setNombre(string);
        string getCI();
        string getNombre();
};

#endif DTSOCIO_H
