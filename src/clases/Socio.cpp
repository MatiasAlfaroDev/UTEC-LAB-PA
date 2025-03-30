#include "Socio.h"
#include <iostream>
using namespace std;

Socio::Socio(){}
Socio::~Socio(){}

void Socio::setCi(string ci){
    this->ci = ci;
}
void Socio::setNombre(string nombre){
    this->nombre = nombre;
}

string Socio::getCi(){
    return ci;
}
string Socio::getNombre(){
    return nombre;
}
