#include "Clase.h"
#include <iostream>
using namespace std;

Clase::Clase(){}

Clase::~Clase(){}

/*SETTERS*/
void Clase::setId(int id){
    this->id = id;
}
void Clase::setNombre(string nombre){
    this->nombre = nombre;
}
void Clase::setTurno(Turno turno){
    this->turno = turno;
}

/*GETTERS*/
int Clase::getID(){
    return id;
}
string Clase::getNombre(){
    return nombre;
}
Turno Clase::getTurno(){
    return turno;
}


DTClase Clase::getDTClase() {
    DTClase dtClase; 
    dtClase.setId(id);
    dtClase.setNombre(nombre);
    dtClase.setTurno(turno);
    return dtClase;
}
