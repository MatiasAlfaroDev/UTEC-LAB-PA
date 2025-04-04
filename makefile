# Compilación final
all: Clase.o DTClase.o DTEntrenamiento.o DTSocio.o DTSpinning.o Entrenamiento.o Fecha.o Inscripccion.o main.o Socio.o source.o Spinning.o
	g++ Clase.o DTClase.o DTEntrenamiento.o DTSocio.o DTSpinning.o Entrenamiento.o Fecha.o Inscripccion.o main.o Socio.o source.o Spinning.o -o programa

Clase.o:
	g++ -std=c++11 -Wall -Iinclude -c src/Clase.cpp -o Clase.o

DTClase.o:
	g++ -std=c++11 -Wall -Iinclude -c src/DTClase.cpp -o DTClase.o

DTEntrenamiento.o:
	g++ -std=c++11 -Wall -Iinclude -c src/DTEntrenamiento.cpp -o DTEntrenamiento.o

DTSocio.o:
	g++ -std=c++11 -Wall -Iinclude -c src/DTSocio.cpp -o DTSocio.o

DTSpinning.o:
	g++ -std=c++11 -Wall -Iinclude -c src/DTSpinning.cpp -o DTSpinning.o

Entrenamiento.o:
	g++ -std=c++11 -Wall -Iinclude -c src/Entrenamiento.cpp -o Entrenamiento.o

Fecha.o:
	g++ -std=c++11 -Wall -Iinclude -c src/Fecha.cpp -o Fecha.o

Inscripccion.o:
	g++ -std=c++11 -Wall -Iinclude -c src/Inscripccion.cpp -o Inscripccion.o

main.o:
	g++ -std=c++11 -Wall -Iinclude -c src/main.cpp -o main.o

Socio.o:
	g++ -std=c++11 -Wall -Iinclude -c src/Socio.cpp -o Socio.o

source.o:
	g++ -std=c++11 -Wall -Iinclude -c src/source.cpp -o source.o

Spinning.o:
	g++ -std=c++11 -Wall -Iinclude -c src/Spinning.cpp -o Spinning.o

clean:
	rm -f *.o programa

run:
	make clean
	make
	clear
	./programa
