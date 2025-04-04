#include "source.h"
#include <iostream>
#include <limits>

using namespace std;
int opcionPrincipal = 0, opcionTest = 0;
bool testBool = true;

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
            cout << GRAY << "         Sobrecarga operador de insercion de flujo.";
            cout << endl << endl << endl;
            cout << GREEN << "         |" << RESET << 4 << GREEN << "|" << RESET << "  SALIR" << endl << endl;
            cout << endl << GREEN << "         |" << GRAY << "Ingresar Opcion" << GREEN << "|: " << RESET;
            cin >> opcionPrincipal;
        break;
        
        
        case 1:
            
            testBool = true;
            while (testBool) {

                cout << endl << GREEN << "         [ Test Manual ]" << RESET << endl;
                cout << endl << GREEN << "         |" << RESET << 1 << GREEN << "|" << RESET << "  Agregar Socio" << endl;

                cout << GREEN << "         |" << RESET << 2 << GREEN << "|" << RESET << "  Agregar Clase" << endl;
                cout << GREEN << "         |" << RESET << 3 << GREEN << "|" << RESET << "  Agregar Inscripcion" << endl;
                cout << GREEN << "         |" << RESET << 4 << GREEN << "|" << RESET << "  Borrar Inscripcion" << endl;
                cout << GREEN << "         |" << RESET << 5 << GREEN << "|" << RESET << "  Obtener Clase" << endl;
                cout << GREEN << "         |" << RESET << 6 << GREEN << "|" << RESET << "  Obtener Info Socios por Clase" << endl;
                cout << GREEN << "         |" << RESET << 0 << GREEN << "|" << RESET << "  SALIR" << endl;

                cout << endl << GREEN << "         |" << GRAY << "Ingresar Opcion" << GREEN << "|: " << RESET;
                cin >> opcionTest;

                switch (opcionTest) {

                    case 1: {
                        system("clear");
                        string ci, nombre;
                        cout << endl << GREEN << "         [ Agregar Socio ]" << RESET << endl;
                        cout << GRAY << "         Ingrese el CI del socio: " << RESET;
                        cin >> ci;
                        cout << GRAY << "         Ingrese el nombre del socio: " << RESET;
                        cin.ignore();
                        
                        try {
                        getline(cin, nombre);
                        agregarSocio(ci, nombre);
                        }

                        catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }


                    }
                    break;

                    case 2: {
                        system("clear");
                        DTClase clase;
                        string nombre;
                        int id, turno;
                        cout << endl << GREEN << "         [ Agregar Clase ]" << RESET << endl;
                        cout << GRAY << "         Ingrese el ID de la clase: " << RESET;
                        cin >> id;
                        cout << GRAY << "         Ingrese el nombre de la clase: " << RESET;
                        cin.ignore();
                        getline(cin, nombre);
                        cout << GRAY << "         Ingrese el turno de la clase (0: MANANA, 1: TARDE, 2: NOCHE): " << RESET;
                        cin >> turno;

                        clase.setId(id);
                        clase.setNombre(nombre);
                        clase.setTurno(static_cast<Turno>(turno));
                        
                        try {
                        agregarClase(clase);
                        } catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }

                    }
                    break;

                    case 3: {
                        system("clear");
                        string ciSocio;
                        int idClase;
                        Fecha fechaTesting;

                        fechaTesting.setDia(24);
                        fechaTesting.setMes(10);
                        fechaTesting.setAnio(2025);

                        cout << endl << GREEN << "         [ Agregar Inscripcion ]" << RESET << endl;
                        cout << GRAY << "         Ingrese el CI del socio: " << RESET;
                        cin >> ciSocio;
                        cout << GRAY << "         Ingrese el ID de la clase: " << RESET;
                        cin >> idClase;

                        try {
                        agregarInscripcion(ciSocio, idClase, fechaTesting);
                        } catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }
                    }
                    break;

                    case 4: {

                        system("clear");
                        string ciSocio;
                        int idClase;
                        cout << endl << GREEN << "         [ Borrar Inscripcion ]" << RESET << endl;
                        cout << GRAY << "         Ingrese el CI del socio: " << RESET;
                        cin >> ciSocio;
                        cout << GRAY << "         Ingrese el ID de la clase: " << RESET;
                        cin >> idClase;

                        try {
                        borrarInscripcion(ciSocio, idClase); }
                        catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }

                    }
                    break;

                    case 5: {
                        system("clear");
                        int idClase;
                        cout << endl << GREEN << "         [ Obtener Clase ]" << RESET << endl;
                        cout << GRAY << "         Ingrese el ID de la clase: " << RESET;
                        cin >> idClase;

                        try { obtenerClase(idClase); }
                        catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }
                        
                    }
                    break;

                    case 6: {
                        system("clear");
                        int idClase6;
                        cout << endl << GREEN << "         [ Obtener Info Socios por Clase ]" << RESET << endl;
                        cout << GRAY << "         Ingrese el ID de la clase: " << RESET;
                        cin >> idClase6;

                        try { DTSocio** sociosClase = obtenerInfoSociosPorClase(idClase6, cantSocios); 
                        
                        cout << GRAY << "         Socios inscriptos a la clase " << idClase6 << ":" << RESET << endl;
                        for (int i = 0; i < cantSocios; i++) 
                        cout << GRAY << "         - " << sociosClase[i]->getNombre() << RESET << endl;
                        }
                        
                        catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }
                    }
                    break;

                    case 0: {
                        system("clear");
                        cout << GREEN << "         [ Saliendo del Test Manual ]" << RESET << endl;
                        testBool = false;
                    }
                    break;

                    default:
                        system("clear");
                        cout << GRAY << "         Opcion no valida. Por favor, elige una opción del menu." << endl;
                        testBool = true;
                    break;
                }

            }
            opcionPrincipal = 0;
            break;




        // Test automatico de las funciones del sistema.
        // Se crean socios, clases e inscripciones con valores predefinidos.
        case 2: {
            system("clear");

                // Prueba de la funcion agregarSocio
                cout << GREEN << " [ Test Automatico (agregarSocio) ]" << RESET << endl;
                try {   cout << GRAY << " [Agregando SOCIOS]" << RESET << endl;
                        agregarSocio("12345678", "Juan Perez");     
                        agregarSocio("87654321", "Maria Lopez");    
                        agregarSocio("11223344", "Pedro Gonzalez"); 

                        cout << GRAY << " [Agregando SOCIO Duplicado]" << RESET << endl;
                        agregarSocio("12345678", "Juan Delgado");
                    } 

                catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }
                


                // Prueba de la funcion agregarClase
                cout << endl << GREEN << " [ Test Automatico (agregarClase) ]" << RESET << endl;
                try {   DTClase yoga, artesMarciales, zumba;

                        yoga.setId(1);
                        yoga.setNombre("Yoga");
                        yoga.setTurno(Turno::MANANA);
                

                        artesMarciales.setId(2);
                        artesMarciales.setNombre("Artes Marciales");
                        artesMarciales.setTurno(Turno::TARDE);

                        zumba.setId(3);
                        zumba.setNombre("Zumba");
                        zumba.setTurno(Turno::NOCHE);

                        cout << GRAY << " [Agregando CLASES]" << RESET << endl;

                        agregarClase(yoga);    
                        agregarClase(artesMarciales); 
                        agregarClase(zumba);

                        cout << GRAY << " [Agregando CLASE Duplicada]" << RESET << endl;
                        agregarClase(zumba); }                   
                
                catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }


                // Prueba de la funcion agregarInscripcion
                cout << endl << GREEN << " [ Test Automatico (agregarInscripcion) ]" << RESET << endl;
                try {   Fecha fechaTest1, fechaTest2;
                        fechaTest1.setDia(24);
                        fechaTest1.setMes(10);
                        fechaTest1.setAnio(2025);

                        fechaTest2.setDia(12);
                        fechaTest2.setMes(10);
                        fechaTest2.setAnio(2025);

                        agregarInscripcion("12345678", 1, fechaTest2); 
                        agregarInscripcion("87654321", 2, fechaTest2); 
                        agregarInscripcion("11223344", 2, fechaTest1); 

                        cout << GRAY << " [INSCRIPCION a clase inexistente]" << RESET << endl;
                        agregarInscripcion("12345678", 4, fechaTest1); } 
                
                catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }



                // Prueba de la funcion borrarInscripcion
                cout << endl << GREEN << " [ Test Automatico (borrarInscripcion) ]" << RESET << endl;
                try {   borrarInscripcion("11223344", 1); 

                        cout << GRAY << " [BORRANDO inscripcion inexistente]" << RESET << endl;
                        borrarInscripcion("12345678", 2); } 
                        
                catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }



                // Prueba de la funcion obtenerClase
                cout << endl << GREEN << " [ Test Automatico (obtenerClase) ]" << RESET << endl << endl;        
                try {   obtenerClase(1); 
                        obtenerClase(2);

                        cout << GRAY << " [OBTENER clase inexistente]" << RESET << endl;
                        obtenerClase(3); } 

                catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }

            

                // Prueba de la funcion obtenerInfoSociosPorClase
                cout << endl << GREEN << " [ Test Automatico (obtenerInfoSociosPorClase) ]" << RESET << endl;
                try {   DTSocio** sociosClase = obtenerInfoSociosPorClase(2, cantSocios); 

                        cout << GRAY << " [SOCIOS inscriptos a la clase 2]" << RESET << endl;
                        for (int i = 0; i < cantSocios - 1; i++) 
                            cout << GRAY << " - " << sociosClase[i]->getNombre() << RESET << endl; } 
                
                catch (const std::exception& e) { cerr << RED << " [ERROR] " << e.what() << RESET << endl; }
            

            cout << endl << GREEN << " [Test Automatico finalizado correctamente]" << RESET;
            cout << endl << GRAY << " [Presione ENTER para continuar]" << RESET << endl;
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cin.get();
            opcionPrincipal = 0;
        }
        break;


        // Test de la sobrecarga del operador de inserción de flujo
        // para las clases DTSpinning y DTEntrenamiento.
        case 3: {     
            system("clear");
            cout << endl << GREEN << "[Test Sobrecarga de operador de insercion de flujo]" << RESET << endl << endl;         

            DTSpinning dtSpin;
            dtSpin.setId(1);
            dtSpin.setNombre("Clase de Spinning");
            dtSpin.setTurno(TARDE);
            dtSpin.setCantBicicletas(20);
            
            DTEntrenamiento dtEntr;
            dtEntr.setId(2);
            dtEntr.setNombre("Entrenamiento al aire libre");
            dtEntr.setTurno(MANANA);
            dtEntr.setEnRambla(true);

            cout << dtSpin <<  endl << endl;
            cout << dtEntr << endl << endl; 

            cout << GRAY << "[Presione ENTER para continuar]" << RESET;
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cin.get();
            opcionPrincipal = 0;
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