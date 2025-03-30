#include "DTClase.h"
#include <iostream>
using namespace std;

DTClase::DTClase(){}

DTClase::~DTClase(){}

void DTClase::setId(int id) {
    this->id = id;
}

void DTClase::setNombre(string nombre) {
    this->nombre = nombre;
}

void DTClase::setTurno(Turno turno) {
    this->turno = turno;
}

int DTClase::getID(){
    return id;
}

string DTClase::getNombre(){
    return nombre;
}

Turno DTClase::getTurno(){
    return turno;
}

void DTClase::mostrarClase(){
    cout << "ID: " << id << endl << "Nombre: " << nombre << endl << "Turno: " << turno << endl;
}