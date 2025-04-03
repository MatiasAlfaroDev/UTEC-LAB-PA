#include "source.h"

Socio* socios[MAX_SOCIOS] = {nullptr};  // Definición única
Clase* clases[MAX_CLASES] = {nullptr};
Inscripcion* inscripciones[MAX_INSCRIPCIONES] = {nullptr};

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
    cout << " Socio agregado correctamente" << endl;
}

void agregarClase(DTClase clase) {

    for (int i = 0; i < MAX_CLASES; i++)
        if (clases[i] != nullptr && clases[i]->getID() == clase.getID()) 
            throw invalid_argument("Existe");

    if (cantClases >= MAX_CLASES)
        throw invalid_argument("No hay espacio para mas clases");

    Clase* c = new Clase();
    c->setId(clase.getID());
    c->setNombre(clase.getNombre());
    c->setTurno(clase.getTurno());
    clases[cantClases] = c;
    cantClases++;
    cout << " Clase agregada correctamente" << endl;
};

void agregarInscripcion(string ciSocio, int idClase, Fecha fecha) {
    
    Socio* socioPtr = nullptr;
    Clase* clasePtr = nullptr;

    for (int i = 0; i < cantSocios; i++)
        if (socios[i]->getCi() == ciSocio)
            socioPtr = socios[i];
    

    for (int i = 0; i < cantClases; i++)
        if (clases[i]->getID() == idClase)
            clasePtr = clases[i];
    

    if (socioPtr && clasePtr && cantInscripciones < MAX_INSCRIPCIONES) {
        Inscripcion* insc = new Inscripcion(); 
        insc->setSocio(socioPtr); 
        insc->setClase(clasePtr);
        insc->setFecha(fecha);
        inscripciones[cantInscripciones] = insc; 
        cantInscripciones++;
        cout << " La inscripcion es valida" << endl;
    } else {
        throw invalid_argument("La inscripcion no es valida");
    }
};

void borrarInscripcion(string ciSocio, int idClase){
    
    for(int i = 0; i < cantInscripciones; i++){
        if((inscripciones[i]->getSocio()->getCi() == ciSocio) && (inscripciones[i]->getClase()->getID() == idClase)) {
            
            delete inscripciones[i];
            
            for(int j = i; j < cantInscripciones - 1; j++)
                inscripciones[j] = inscripciones[j+1];

            cantInscripciones--;
            cout << "Se elimino la inscripción correctamente" << endl;
            return;

        } else {
            throw invalid_argument("No se encontro la inscripcion");
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
            break;
        }
    }
    throw invalid_argument("No se encontro la clase");
}


DTSocio ** obtenerInfoSociosPorClase (int idClase,int & cantSocios) {

    DTSocio* *infoSocios = new DTSocio*[cantSocios];
    int aux = 0;

    for(int i = 0; i < cantInscripciones; i++)
        if((inscripciones[i]->getClase()->getID() == idClase))
            for (int i = 0; i < cantSocios; i++) {

                    DTSocio* socioInscripto = new DTSocio();
                    socioInscripto->setCi(inscripciones[i]->getSocio()->getCi());
                    socioInscripto->setNombre(inscripciones[i]->getSocio()->getNombre());
                    infoSocios[aux] = socioInscripto; 
                    aux++;
            }
    
    return infoSocios;
};