#include "DTSpinning.h"
#include <iostream>
using namespace std;

DTSpinning::DTSpinning(){}

DTSpinning::~DTSpinning(){}


// Setters.
void DTSpinning::setCantBicicletas(int cantBicicletas){
    this->cantBicicletas = cantBicicletas;
}


// Getters.
int DTSpinning::getCantBicicletas() {

    return cantBicicletas;
}

// Métodos.
void DTSpinning::mostrarClase() {

    std::cout << *this;
}

// Implementación de la sobrecarga de <<
std::ostream& operator << (std::ostream& os, const DTSpinning& dt) {
    os << static_cast < const DTClase&>(dt) << "\n"
       << "Cantidad de bicicletas: " << dt.cantBicicletas;
    return os;
}