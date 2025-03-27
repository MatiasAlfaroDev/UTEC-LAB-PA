#include "Entrenamiento.h"
#include <iostream>
using namespace std;

Entrenamiento::Entrenamiento(int id, string nombre, Turno turno, bool enRambla):Clase(id,nombre,turno){
    this->enRambla = enRambla;
}
Entrenamiento::~Entrenamiento(){};

bool Entrenamiento::getEnRambla(){
    return enRambla;
}
int Entrenamiento::cupo(){
    return (enRambla ? 20 : 10);
}