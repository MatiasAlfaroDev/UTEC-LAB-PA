#include "DTClase.h"
#include <iostream>
using namespace std;

DTClase::DTClase(){}

DTClase::~DTClase(){}


// Setters.
void DTClase::setId(int id) {

    this->id = id;
}

void DTClase::setNombre(string nombre) {

    this->nombre = nombre;
}

void DTClase::setTurno(Turno turno) {

    this->turno = turno;
}


// Getters.
int DTClase::getID() {

    return id;
}

string DTClase::getNombre() {

    return nombre;
}

Turno DTClase::getTurno() {

    return turno;
}



// Métodos.
void DTClase::mostrarClase() {
    cout << " ID: " << id << endl 
         << " Nombre: " << nombre << endl 
    
         << " Turno: ";
         if (turno == Turno::MANANA) cout << "MANANA" << endl;
            else if (turno == Turno::TARDE) cout << "TARDE" << endl;
                else if (turno == Turno::NOCHE) cout << "NOCHE" << endl;

        // if (Clase == rambla) En rambla si || clase == spinning) En spinning si
}