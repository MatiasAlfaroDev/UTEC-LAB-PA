#include "DTEntrenamiento.h"
#include <iostream>
using namespace std;

DTEntrenamiento::DTEntrenamiento() {}

DTEntrenamiento::~DTEntrenamiento() {}

// Setters.
void DTEntrenamiento::setEnRambla(bool enRambla) {

    this->enRambla = enRambla;
}


// Getters.
bool DTEntrenamiento::getEnRambla() {

    return enRambla;
}


// Métodos.
void DTEntrenamiento::mostrarClase() {
    std::cout << *this;
}

std::ostream& operator << (std::ostream& os, const DTEntrenamiento& dt) {
    os << static_cast < const DTClase&>(dt) << "\n"
       << "En Rambla: " << (dt.enRambla ? "Si" : "No");
    return os;
}