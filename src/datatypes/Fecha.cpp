#include "Fecha.h"
#include <iostream>
using namespace std;


Fecha::Fecha(int d, int m, int a){
    if(d > 31 || d < 1) throw invalid_argument("Dia invalido");
    if(m > 12 || m < 1) throw invalid_argument("Mes invalido");
    if(a < 1900) throw invalid_argument("Año invalido");
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