#include "Fecha.h"
#include <iostream>
using namespace std;


Fecha::Fecha(int d, int m, int a){
    this->dia = d;
    this->mes = m;
    this->anio = a;
}

int Fecha::getDia(){
    return this->dia;
}
int Fecha::getMes(){
    return this->mes;
}
int Fecha::getAnio(){
    return this->anio;
}

void Fecha::mostrar(){
    cout << this->dia << "/" << this->mes << "/" << this->anio << endl;
}