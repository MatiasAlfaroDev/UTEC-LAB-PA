#include "Inscripccion.h"
#include <iostream>
using namespace std;

Inscripcion::Inscripcion(Fecha fecha){
    this->fecha = fecha;
}
Inscripcion::~Inscripcion(){

}
Socio * Inscripcion::getSocio(){
    return socio;
}
Clase * Inscripcion::getClase(){
    return clase;
}

Fecha Inscripcion::getFecha(){
    return fecha;
} 