#include "Equipo.h"

Equipo :: Equipo(){

}

void Equipo :: setNombreEquipo(string pNombreEquipo){
	NombreEquipo = pNombreEquipo;
}

string Equipo :: getNombreEquipo(){
	return NombreEquipo;
}

void Equipo :: addJugador(Jugador* jug){
	listaJugadores.push_back(jug);
}

Jugador* Equipo :: getJugador(int pos){
	return listaJugadores.at(pos);
}

void Equipo :: setNivelDefensa(int pNivelDefensa){
	NivelDefensa = pNivelDefensa;
}

int Equipo :: getNivelDefensa(){
	return NivelDefensa;
}

void Equipo :: setNivelOfensa(int pNivelOfensa){
	NivelOfensa = pNivelOfensa;
}

int Equipo :: getNivelOfensa(){
	return NivelOfensa;
}

void Equipo :: setGoles(int pGoles){
	Goles = pGoles;
}

int Equipo :: getGoles(){
	return Goles;
}
