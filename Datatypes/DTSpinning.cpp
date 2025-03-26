#include "DTSpinning.h"
#include <iostream>
using namespace std;

DTSpinning::DTSpinning(int id, string nombre, Turno turno, int cantBicicletas):DTClase(id,nombre,turno){
    this->cantBicicletas = cantBicicletas;
}

int DTSpinning::getCantBicicletas(){
    return cantBicicletas;
}

void DTSpinning::mostrarClase(){
    DTClase::mostrarClase();
    cout << "Cantidad de bicicletas: " << cantBicicletas << endl; 
}