#ifndef SOURCE_H
#define SOURCE_H

#include "clase.h"
#include "entrenamiento.h"
#include "fecha.h"
#include "inscripccion.h"
#include "socio.h"
#include "spinning.h"
#include "turno.h"
#include "dtSocio.h"
#include "dtClase.h"
#include "dtEntrenamiento.h"
#include "dtSpinning.h"


#define GREEN   "\033[32m"
#define GRAY     "\033[90m"  
#define RESET   "\033[0m"
#define RED     "\033[31m"


#define MAX_SOCIOS 50
#define MAX_CLASES 50
#define MAX_INSCRIPCIONES 50

class Socio;
class Clase;
class Inscripcion;

extern Socio* socios[MAX_SOCIOS];  // Declaración con extern
extern Clase* clases[MAX_CLASES];
extern Inscripcion* inscripciones[MAX_INSCRIPCIONES];

extern int cantSocios, cantClases, cantInscripciones;

// Crea un nuevo socio en el sistema.
void agregarSocio(string ci,string nombre);

// Crea una nueva clase en el sistema.
void agregarClase(DTClase clase);

// Crea una inscripción de un socio a una clase.
void agregarInscripcion(string ciSocio, int idClase, Fecha fecha);

// Borra la inscripción de un socio a una clase. 
void borrarInscripcion(string ciSocio, int idClase);

// Retorna un arreglo con los socios que están inscriptos a determinada clase.
DTSocio ** obtenerInfoSociosPorClase (int idClase,int & cantSocios);

// Retorna la información de la clase identificada por idClase
DTClase obtenerClase(int idClase);
#endif