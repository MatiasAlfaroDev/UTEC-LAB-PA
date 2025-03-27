#include "Spinning.h"
#include <iostream>
using namespace std;

Spinning::Spinning(int id,string nombre,Turno turno,int cantBicicletas):Clase(id,nombre,turno){
    this->cantBicicletas = cantBicicletas;
}
Spinning::~Spinning(){}

Spinning::getCantBicicletas(){
    return cantBicicletas;
}

Spinning::cupo(){
    return cantBicicletas;
}