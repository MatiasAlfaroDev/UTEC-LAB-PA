#ifndef SOCIO_H
#define SOCIO_H

#include <string>
using namespace std;



class Socio {

    private:
        string ci;
        string nombre;
        
    public:
        Socio();
        ~Socio();
        void setCi(string);
        void setNombre(string);
        string getCi();
        string getNombre();
};

#endif