#include "source.h"

#define MAX_SOCIOS 50
#define MAX_CLASES 50

Socio* socios[MAX_SOCIOS];
Clase* clases[MAX_CLASES];
int cantSocios = 0, cantClases = 0;

void agregarSocio(string ci, string nombre) {

    for (int i = 0; i < cantSocios; i++)
        if(socios[i]->getCi() == ci) 
            throw invalid_argument("El socio que intenta agregar ya es miembro");
    

    if (cantSocios >= MAX_SOCIOS) 
        throw invalid_argument("Se ha superado el limite de socios permitido");

    Socio* s = new Socio(ci,nombre);
    socios[cantSocios] = s;
    cantSocios++;
}

void agregarClase(DTClase clase) {

    for (int i = 0; i < MAX_CLASES; i++)
        if (clases[i]->getID() == clase.getID()) 
            throw invalid_argument("exists");

    if (cantClases >= MAX_CLASES)
        throw invalid_argument("No mas clases.");

    clases[cantClases] = new Clase(clase.getID(), clase.getNombre(), clase.getTurno(), cantClases);
    cantClases++;
};

void agregarInscripcion(string ciSocio, int idClase, Fecha fecha) {

    bool inscValida = false;
    for (int i = 0; i < cantClases || inscValida; i++) 
        if (clases[i]->getID() == idClase) 
            inscValida = true;
         
    for (int i = 0; i < cantSocios || inscValida; i++)
        if(socios[i]->getCi() == ciSocio)
            inscValida = true;

    if (inscValida)
        cout << "La inscripcion es valida" << endl;
       // Inscripcion* insc = new Inscripcion(ciSocio, idClase, fecha);
    else
        throw invalid_argument("La inscripcion no es valida");
};