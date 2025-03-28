#ifndef FECHA_H
#define FECHA_H

class Fecha {
private:
    int dia, mes, anio; 

public:
    Fecha(int, int, int);
    int getDia();
    int getMes();
    int getAnio();
    void mostrar();
};

#endif
