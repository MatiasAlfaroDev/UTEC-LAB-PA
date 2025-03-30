#include "DTSocio.h"

DTSocio::DTSocio(){}

DTSocio::~DTSocio(){}

void DTSocio::setCi(string ci){
    this->ci = ci;
}
void DTSocio::setNombre(string nombre){
    this->nombre = nombre;
}

string DTSocio::getCI(){
    return this->ci;
};

string DTSocio::getNombre(){
    return this->nombre;
};







