#include "clase.h"
#include "entrenamiento.h"
#include "fecha.h"
#include "inscripccion.h"
#include "socio.h"
#include "spinning.h"
#include "turno.h"
#include "dtSocio.h"
#include "dtClase.h"

void agregarSocio(string ci,string nombre);
void agregarClase(DTClase clase);
void agregarInscripcion(string ciSocio, int idClase, Fecha fecha);
void borrarInscripcion(string ciSocio, int idClase);
DTSocio ** obtenerInfoSociosPorClase (int idClase,int & cantSocios);
DTClase obtenerClase(int idClase);
