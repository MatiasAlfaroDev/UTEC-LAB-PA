#include "Spinning.h"
#include <iostream>
using namespace std;

Spinning::Spinning(int id,string nombre,Turno turno,int cantBicicletas):Clase(id,nombre,turno){
    if (cantBicicletas > 50) {
        throw invalid_argument("La cantidad de bicicletas no puede ser mayor a 50.");
    }
    this->cantBicicletas = cantBicicletas;
}
Spinning::~Spinning(){}

Spinning::getCantBicicletas(){
    return cantBicicletas;
}

Spinning::cupo(){
    return cantBicicletas;
}