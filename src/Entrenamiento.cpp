#include "Entrenamiento.h"
#include <iostream>
using namespace std;

Entrenamiento::Entrenamiento(){}

Entrenamiento::~Entrenamiento(){}

// Setters.
void Entrenamiento::setEnRambla(bool enRambla) {

    this->enRambla = enRambla;
}


// Getters.
bool Entrenamiento::getEnRambla() {

    return enRambla;
}


// Métodos.
int Entrenamiento::cupo() {

    return (enRambla ? 20 : 10);
}