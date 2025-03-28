#ifndef SOCIO_H
#define SOCIO_H

class Socio {
    private:
        string ci;
        string nombre;
    public:
        Socio(string,string);
        ~Socio();
        string getCi();
        string getNombre();
}



#endif