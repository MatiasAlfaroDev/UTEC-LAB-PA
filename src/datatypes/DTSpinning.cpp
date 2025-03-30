#include "DTSpinning.h"
#include <iostream>
using namespace std;

DTSpinning::DTSpinning(){}

DTSpinning::~DTSpinning(){}

void DTSpinning::setCantBicicletas(int cantBicicletas){
    this->cantBicicletas = cantBicicletas;
}

int DTSpinning::getCantBicicletas(){
    return cantBicicletas;
}

void DTSpinning::mostrarClase(){
    DTClase::mostrarClase();
    cout << "Cantidad de bicicletas: " << cantBicicletas << endl; 
}