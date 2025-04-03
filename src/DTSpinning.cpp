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

    DTClase::mostrarClase();
    cout << "Cantidad de bicicletas: " << cantBicicletas << endl; 
}