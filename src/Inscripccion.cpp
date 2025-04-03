#include "Inscripccion.h"
#include <iostream>
using namespace std;

Inscripcion::Inscripcion(): socio(nullptr), clase(nullptr){}

Inscripcion::~Inscripcion(){}

// Setters.
void Inscripcion::setSocio(Socio* socio) {
    
    this->socio = socio;
}

void Inscripcion::setClase(Clase* clase) {

    this->clase = clase;
}

void Inscripcion::setFecha(Fecha fecha) {

    this->fecha = fecha;
}


// Getters.
Socio * Inscripcion::getSocio() {

    return socio;
}

Clase * Inscripcion::getClase() {

    return clase;
}

Fecha Inscripcion::getFecha() {

    return fecha;
} 