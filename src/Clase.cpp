#include "Clase.h"
#include <iostream>
using namespace std;

Clase::Clase(){}

Clase::~Clase(){}

// Setters.
void Clase::setId(int id) {

    this->id = id;
}

void Clase::setNombre(string nombre) {

    this->nombre = nombre;
}

void Clase::setTurno(Turno turno) {

    this->turno = turno;
}


// Getters.
int Clase::getID() {

    return id;
}

string Clase::getNombre() {
    
    return nombre;
}

Turno Clase::getTurno() {

    return turno;
}


// Métodos.
int Clase::cupo() {

    return 0;
}


DTClase Clase::getDTClase() {

    DTClase dtClase; 
    dtClase.setId(id);
    dtClase.setNombre(nombre);
    dtClase.setTurno(turno);
    return dtClase;
}
