#include "DTClase.h"
#include <iostream>
using namespace std;

DTClase::DTClase(int id, string nombre, Turno turno){
    this->id = id;
    this->nombre = nombre;
    this->turno = turno;
}

DTClase::~DTClase(){}

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