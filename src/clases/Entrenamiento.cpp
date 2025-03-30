#include "Entrenamiento.h"
#include <iostream>
using namespace std;

Entrenamiento::Entrenamiento(){}

Entrenamiento::~Entrenamiento(){}

void Entrenamiento::setEnRambla(bool enRambla){
    this->enRambla = enRambla;
}

bool Entrenamiento::getEnRambla(){
    return enRambla;
}
int Entrenamiento::cupo(){
    return (enRambla ? 20 : 10);
}