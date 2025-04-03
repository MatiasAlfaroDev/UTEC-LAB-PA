#include "Socio.h"
#include <iostream>
using namespace std;

Socio::Socio(){}

Socio::~Socio(){}

// Setters.
void Socio::setCi(string ci) {

    this->ci = ci;
}

void Socio::setNombre(string nombre) {

    this->nombre = nombre;
}


// Getters.
string Socio::getCi() {

    return ci;
}

string Socio::getNombre() {

    return nombre;
}
