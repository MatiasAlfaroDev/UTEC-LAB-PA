#include "Spinning.h"
#include <iostream>
using namespace std;

Spinning::Spinning(){}
Spinning::~Spinning(){}

void Spinning::setCantBicicletas(int cantBicicletas){
    if (cantBicicletas > 50) {
        throw invalid_argument("La cantidad de bicicletas no puede ser mayor a 50.");
    }
    this->cantBicicletas = cantBicicletas;
}

int Spinning::getCantBicicletas(){
    return cantBicicletas;
}

int Spinning::cupo(){
    return cantBicicletas;
}