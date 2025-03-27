#include "Inscripccion.h"
#include <iostream>
using namespace std;

Inscripcion::Inscripcion(Fecha fecha){
    this->fecha = fecha;
}
Inscripcion::~Inscripcion(){

}
Fecha Inscripcion::getFecha(){
    return fecha;
} 