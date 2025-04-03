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

    DTClase::mostrarClase();
    cout << "En Rambla: " << (enRambla ? "Sí" : "No") << endl;
}
