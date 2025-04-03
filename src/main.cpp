#include "source.h"
#include <iostream>

using namespace std;
int opcionPrincipal = 0, opcionTest = 0;

int main() {
   

    while (true) {
        
        switch (opcionPrincipal) {

        case 0:
            system("clear");
            cout << GREEN << R"(
    
            _( }    _____ _____ _____
   -=  _  <<  \    |   __|  |  |     |
      `.\__/`/\\   |  |  |_   _| | | |
 -=     '--'\\  `  |_____| |_| |_|_|_|
      -=    //	       LAB PA - UTEC
            \)

)"; 
            cout << endl << GREEN << "         |" << RESET << 1 << GREEN << "|" << RESET << "  Test Manual" << endl;
            cout << GRAY << "         Ingresa los valores de cada Funcion." << endl;
            cout << endl;
            cout << GREEN << "         |" << RESET << 2 << GREEN << "|" << RESET << "  Test Automatico" << endl;
            cout << GRAY << "         Valores prestablecidos." << endl;
            cout << endl;
            cout << GREEN << "         |" << RESET << 3 << GREEN << "|" << RESET << "  Punto 3 Lab" << endl;
            cout << GRAY << "         No se puede ejecutar sin el punto 2.";
            cout << endl << endl << endl;
            cout << GREEN << "         |" << RESET << 4 << GREEN << "|" << RESET << "  SALIR" << endl << endl;
            cout << endl << GREEN << "         |" << GRAY << "Ingresar Opcion" << GREEN << "|: ";
            cin >> opcionPrincipal;
        break;
        
        
        case 1:
            opcionPrincipal = 0;
            /*
                void agregarSocio(string ci,string nombre);

                // Crea una nueva clase en el sistema.
                void agregarClase(DTClase clase);

                // Crea una inscripción de un socio a una clase.
                void agregarInscripcion(string ciSocio, int idClase, Fecha fecha);

                // Borra la inscripción de un socio a una clase. 
                void borrarInscripcion(string ciSocio, int idClase);

                // Retorna un arreglo con los socios que están inscriptos a determinada clase.
                DTSocio ** obtenerInfoSociosPorClase (int idClase,int & cantSocios);
            */
        break;




        case 3:
            opcionPrincipal = 0;
            obtenerClase(1); 
            cout << endl << GRAY << " [Presione ENTER para continuar]" << RESET << endl;
            cin.ignore();
            opcionPrincipal = 0;

        break;


        case 2: {
            system("clear");

            // Prueba de la funcion agregarSocio
            cout << GREEN << " [ Test Automatico (agregarSocio) ]" << RESET << endl;
            try {
                cout << GRAY << " [Agregando SOCIOS]" << RESET << endl;
                agregarSocio("12345678", "Juan Perez");     
                agregarSocio("87654321", "Maria Lopez");    
                agregarSocio("11223344", "Pedro Gonzalez"); 

                cout << GRAY << " [Agregando SOCIO Duplicado]" << RESET << endl;
                agregarSocio("12345678", "Juan Delgado");

            } catch (const std::exception& e) {
                cerr << RED << " [ERROR] " << e.what() << RESET << endl;
            }

            // Prueba de la funcion agregarClase
            cout << endl << GREEN << " [ Test Automatico (agregarClase) ]" << RESET << endl;
            try {
                DTClase yoga, spinning;
                yoga.setId(1);
                yoga.setNombre("Yoga");
                yoga.setTurno(Turno::MANANA);

                spinning.setId(2);
                spinning.setNombre("Spinning");
                spinning.setTurno(Turno::TARDE);

                cout << GRAY << " [Agregando CLASES]" << RESET << endl;

                agregarClase(yoga);    
                agregarClase(spinning); 

                cout << GRAY << " [Agregando CLASE Duplicada]" << RESET << endl;
                agregarClase(spinning);

            } catch (const std::exception& e) {
                cerr << RED << " [ERROR] " << e.what() << RESET << endl;
            }

            // Prueba de la funcion agregarInscripcion
            try {
                Fecha fechaTest1, fechaTest2;
                fechaTest1.setDia(24);
                fechaTest1.setMes(10);
                fechaTest1.setAnio(2023);

                fechaTest2.setDia(12);
                fechaTest2.setMes(10);
                fechaTest2.setAnio(2023);

                cout << endl << GREEN << " [ Test Automatico (agregarInscripcion) ]" << RESET << endl;
                agregarInscripcion("12345678", 1, fechaTest2); 
                agregarInscripcion("87654321", 2, fechaTest2); 
                agregarInscripcion("11223344", 2, fechaTest1); 

                cout << GRAY << " [INSCRIPCION a clase inexistente]" << RESET << endl;
                agregarInscripcion("12345678", 3, fechaTest1); 

            } catch (const std::exception& e) {
                cerr << RED << " [ERROR] " << e.what() << RESET << endl;
            }

            // Prueba de la funcion borrarInscripcion
            try {
                cout << endl << GREEN << " [ Test Automatico (borrarInscripcion) ]" << RESET << endl;
                borrarInscripcion("11223344", 2); 

                cout << GRAY << " [BORRANDO inscripcion inexistente]" << RESET << endl;
                borrarInscripcion("12345678", 3);

            } catch (const std::exception& e) {
                cerr << RED << " [ERROR] " << e.what() << RESET << endl;
            }

            try {
                cout << endl << GREEN << " [ Test Automatico (obtenerClase) ]" << RESET << endl << endl;
                obtenerClase(1); 
                obtenerClase(2);

                cout << GRAY << " [OBTENER clase inexistente]" << RESET << endl;
                obtenerClase(3); 

            } catch (const std::exception& e) {
                cerr << RED << " [ERROR] " << e.what() << RESET << endl;
            }

            /*
            try {
                cout << endl << GREEN << " [ Test Automatico (obtenerInfoSociosPorClase) ]" << RESET << endl;
                
                DTSocio** sociosClase = obtenerInfoSociosPorClase(1, cantSocios); 

                cout << GRAY << " [SOCIOS inscriptos a la clase 1]" << RESET << endl;
                for (int i = 0; i < cantSocios; i++) 
                    cout << GRAY << " - " << sociosClase[i]->getNombre() << RESET << endl;
                
            } catch (const std::exception& e) {
                cerr << RED << " [ERROR] " << e.what() << RESET << endl;
            }
            */

            cout << endl << GREEN << " [Test Automatico finalizado correctamente]" << RESET;
            cout << endl << GRAY << " [Presione ENTER para continuar]" << RESET;
            opcionPrincipal = 0;
            cin.ignore();
        }
        break;


        case 4:
            return 0;



        default:
            system("clear");
            cout << GRAY << "         Opcion no valida. Por favor, elige una opción del menu." << endl;
            opcionPrincipal = 0;
        break;

        }
    
    
    }
    
    return 0;
}