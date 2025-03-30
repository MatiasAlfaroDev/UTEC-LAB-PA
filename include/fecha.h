#ifndef FECHA_H
#define FECHA_H

class Fecha {
private:
    int dia, mes, anio; 

public:
    Fecha();
    ~Fecha();

    void setDia(int);
    void setMes(int);
    void setAnio(int);
    int getDia();
    int getMes();
    int getAnio();
    void mostrar();
};

#endif
