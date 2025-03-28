#include "Socio.h"
#include <iostream>
using namespace std;

Socio::Socio(string ci, string nombre){
    this->ci = ci;
    this->ci = nombre;
}
Socio::~Socio(){

}
string Socio::getCi(){
    return ci;
}
string Socio::getNombre(){
    return nombre;
}