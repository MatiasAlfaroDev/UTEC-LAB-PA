#include "source.h"

#define MAX_SOCIOS 50
#define MAX_CLASES 50
#define MAX_INSCRIPCIONES 50

Socio* socios[MAX_SOCIOS];
Clase* clases[MAX_CLASES];
Inscripcion* inscripciones[MAX_INSCRIPCIONES];
int cantSocios = 0, cantClases = 0, cantInscripciones = 0;

void agregarSocio(string ci, string nombre) {

    for (int i = 0; i < cantSocios; i++)
        if(socios[i]->getCi() == ci) 
            throw invalid_argument("El socio que intenta agregar ya es miembro");
    

    if (cantSocios >= MAX_SOCIOS) 
        throw invalid_argument("Se ha superado el limite de socios permitido");

    Socio* s = new Socio();
    s->setCi(ci);
    s->setNombre(nombre);
    socios[cantSocios] = s;
    cantSocios++;
}

void agregarClase(DTClase clase) {

    for (int i = 0; i < MAX_CLASES; i++)
        if (clases[i]->getID() == clase.getID()) 
            throw invalid_argument("exists");

    if (cantClases >= MAX_CLASES)
        throw invalid_argument("No mas clases.");

    Clase* c = new Clase();
    c->setId(clase.getID());
    c->setNombre(clase.getNombre());
    c->setTurno(clase.getTurno());
    clases[cantClases] = c;
    cantClases++;
};

void agregarInscripcion(string ciSocio, int idClase, Fecha fecha) {
    Socio* socioPtr = nullptr;
    Clase* clasePtr = nullptr;

    for (int i = 0; i < cantSocios; i++){
        if (socios[i]->getCi() == ciSocio)
            socioPtr = socios[i];
    }

    for (int i = 0; i < cantClases; i++){
        if (clases[i]->getID() == idClase)
            clasePtr = clases[i];
    }

    if (socioPtr && clasePtr && cantInscripciones < MAX_INSCRIPCIONES) {
        Inscripcion* insc = new Inscripcion(); 
        insc->setSocio(socioPtr); 
        insc->setClase(clasePtr);
        insc->setFecha(fecha);
        inscripciones[cantInscripciones] = insc; 
        cantInscripciones++;
        cout << "La inscripcion es valida" << endl;
    } else {
        throw invalid_argument("La inscripcion no es valida");
    }
};

void borrarInscripcion(string ciSocio, int idClase){
    for(int i = 0; i < cantInscripciones; i++){
        if((inscripciones[i]->getSocio()->getCi() == ciSocio) && (inscripciones[i]->getClase()->getID() == idClase)){
            delete inscripciones[i];
            for(int j = i; j < cantInscripciones - 1; j++)
                inscripciones[j] = inscripciones[j+1];
            cantInscripciones--;
            cout << "Se elimino la inscripción correctamente" << endl;
            return;
        }else{
            throw invalid_argument("No se encontro la inscripción");
        }
    }
};

DTClase obtenerClase(int idClase){
    for(int i = 0; i < cantClases; i++){
        if(clases[i]->getID() == idClase){
            DTClase dtClase;
            dtClase.setId(clases[i]->getID());
            dtClase.setNombre(clases[i]->getNombre());
            dtClase.setTurno(clases[i]->getTurno());

            dtClase.mostrarClase();
            return;
        }
    }
    throw invalid_argument("No se encontró la clase");
}