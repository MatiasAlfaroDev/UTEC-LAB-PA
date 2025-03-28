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
        if (clases[i].getID() == clase.getID()) 
            throw invalid_argument("exists");

    if (cantClases >= MAX_CLASES)
        throw invalid_argument("No mas clases.");

    clases[cantClases] = clase;
    cantClases++;
};
