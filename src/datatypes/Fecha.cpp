#include "Fecha.h"
#include <iostream>
using namespace std;


Fecha::Fecha(){}
Fecha::~Fecha(){}

void Fecha::setDia(int d){
    if(d > 31 || d < 1) throw invalid_argument("Dia invalido");
    this->dia = d;
}

void Fecha::setMes(int m){
    if(m > 12 || m < 1) throw invalid_argument("Mes invalido");
    this->mes = m;
}

void Fecha::setAnio(int a){
    if(a < 1900) throw invalid_argument("Año invalido");
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