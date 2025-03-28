#include "Clase.h"
#include <iostream>
using namespace std;

Clase::Clase(int id,string nombre,Turno turno,int cupo){
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
}

Clase::~Clase(){}

int Clase::getID(){
    return id;
}
string Clase::getNombre(){
    return nombre;
}
Turno Clase::getTurno(){
    return turno;
}
DTClase Clase::getDTClase(){
    return DTClase(id,nombre,turno);
}