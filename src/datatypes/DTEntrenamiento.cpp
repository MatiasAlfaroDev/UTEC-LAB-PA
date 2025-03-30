#include "DTEntrenamiento.h"
#include <iostream>
using namespace std;

DTEntrenamiento::DTEntrenamiento(){}

DTEntrenamiento::~DTEntrenamiento(){}

void DTEntrenamiento::setEnRambla(bool enRambla){
    this->enRambla = enRambla;
}
bool DTEntrenamiento::getEnRambla(){
    return enRambla;
}
void DTEntrenamiento::mostrarClase(){
    DTClase::mostrarClase();
    cout << "En Rambla: " << (enRambla ? "Sí" : "No") << endl;
}
