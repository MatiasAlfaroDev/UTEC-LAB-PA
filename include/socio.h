#ifndef SOCIO_H
#define SOCIO_H

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