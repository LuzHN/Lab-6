#include <iostream>
#include <vector>
#include "Jugador.h"
#include "Entrenador.h"
#ifndef Equipo_H
#define Equipo_H

using std::string;
using std::vector;

class Equipo{

	protected:
		string NombreEquipo;
		Entrenador* entrenador;
		vector<Jugador*> listaJugadores;
		int NivelDefensa;
		int NivelOfensa;
		int Goles;

	public:
		Equipo();
		~Equipo();

		void setNombreEquipo(string);
		string getNombreEquipo();

		void addJugador(Jugador*);
		Jugador* getJugador(int);

		void setNivelDefensa(int);
		int getNivelDefensa();

		void setNivelOfensa(int);
		int getNivelOfensa();

		void setGoles(int);
		int getGoles();


};

#endif