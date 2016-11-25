main:	main.o Persona.o Equipo.o Jugador.o Entrenador.o Partido.o
	g++ main.o Persona.o Equipo.o Jugador.o Entrenador.o Partido.o -o main

main.o:	main.cpp Persona.h Equipo.h Jugador.h Entrenador.h Partido.h
	g++ -c main.cpp 

Persona.o:	Persona.h Persona.cpp 
	g++ -c Persona.cpp

Equipo.o:	Equipo.h Equipo.cpp Jugador.h Entrenador.h Persona.h
	g++ -c Equipo.cpp

Jugador.o:	Jugador.h Jugador.cpp Persona.h 
	g++ -c Jugador.cpp

Entrenador.o:	Entrenador.h Entrenador.cpp Persona.h
	g++ -c Entrenador.cpp

Partido.o:	Partido.h Partido.cpp 
	g++ -c Partido.cpp

clean:
	rm -f *.o main

