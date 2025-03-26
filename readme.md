 <img alt="C++" src="https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white">  <img alt="Git" src="https://img.shields.io/badge/git-%23F05033.svg?style=for-the-badge&logo=git&logoColor=white"> 
 
# Programación Avanzada - Laboratorio 1

 <h3> <img src="https://red.utec.edu.uy/wp-content/uploads/2018/11/09-Isotipo-1.png" width="20"/>  UTEC - Tecnologo en Informatica </h3> 

 Se desea implementar un pequeño sistema con la realidad expresada en el siguiente modelo, con el finde manejar información sobre las inscripciones a clases de un gimnasio. 
 
 ------------

 
 
### Consideraciones generales
Con este laboratorio se espera que el estudiante adquiera competencias en la implementación de operaciones básicas, el uso básico del lenguaje C++ (que se usará en el laboratorio) y el entorno de programación en linux, así como reafirmar conceptos presentados en el curso. También se espera que el estudiante consulte el material disponible en el moodle del curso y que recurra a Internet con espíritu crítico, identificando y corroborando fuentes confiables de información.

#### Operaciones a Implementar
- `void agregarSocio(string ci, string nombre) ` Crea un nuevo socio en el sistema. En caso de ya existir, levanta la excepción* std::invalid_argument. *

- `void agregarClase(DtClase clase)` Crea una nueva clase en el sistema. En caso de ya existir, levanta una excepción *std::invalid_argument.*

- `void agregarInscripcion(String ciSocio, int idClase, Fecha fecha) ` Crea una inscripción de un socio a una clase. La inscripción tiene lugar siempre y cuando el socio y la clase existan, de lo contrario se levanta una excepción *std::invalid_argument.* Si ya existe una inscripción de ese usuario para esa clase, o si el cupo de esa clase ya fue alcanzado, también se levanta una excepción *std::invalid_argument. *

- `void borrarInscripcion(string ciSocio, int idClase) `  Borra la inscripción de un socio a una clase. Si no existe una inscripción de ese usuario para esa clase, se levanta una excepción *std::invalid_argument.*

- `DtSocio ** obtenerInfoSociosPorClase (id idClase, int & cantSocios) `  Retorna un arreglo con los socios que están inscriptos a determinada clase. El largo del arreglo de socios deberá ser cargado en el parámetro **cantSocios**.

- `f) DtClase obtenerClase(int idClase)`  Retorna la información de la clase identificada por **idClase**. 

![](https://media.discordapp.net/attachments/1348090416498741248/1354287982420693032/image.png?ex=67e4be78&is=67e36cf8&hm=43800a8c272ac6ae213b1df3cd9805ead64586488493e8958d56e349998e5535&=&format=webp&quality=lossless)