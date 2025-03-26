#include "DTSocio.h"

DTSocio::DTSocio(){
    this->ci = 0;
    this->nombre = "";
};

int DTSocio::getCI(){
    return this->ci;
};

string DTSocio::getNombre(){
    return this->nombre;
};

DTSocio::DTSocio(int ci, string nombre){
    this->ci = ci;
    this->nombre = nombre;
};







