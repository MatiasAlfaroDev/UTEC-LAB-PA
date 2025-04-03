#include "Spinning.h"
#include <iostream>
using namespace std;

Spinning::Spinning(){}
Spinning::~Spinning(){}

// Setters.
void Spinning::setCantBicicletas(int cantBicicletas) {

    if (cantBicicletas > 50) 
        throw invalid_argument("La cantidad de bicicletas no puede ser mayor a 50.");
    
    this->cantBicicletas = cantBicicletas;
}


// Getters.
int Spinning::getCantBicicletas() {
    return cantBicicletas;
}


// Métodos.
int Spinning::cupo() {
    return cantBicicletas;
}