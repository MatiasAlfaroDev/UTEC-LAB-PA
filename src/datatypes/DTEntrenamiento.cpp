#include "DTEntrenamiento.h"
#include <iostream>
using namespace std;

DTEntrenamiento::DTEntrenamiento(int id, string nombre, Turno turno, bool enRambla):DTClase(id,nombre,turno){
    this->enRambla = enRambla;
}

bool DTEntrenamiento::getEnRambla(){
    return enRambla;
}
void DTEntrenamiento::mostrarClase(){
    DTClase::mostrarClase();
    cout << "En Rambla: " << (enRambla ? "Sí" : "No") << endl;
}
