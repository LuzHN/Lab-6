#include "Jugador.h"

#include <iostream>

using std::string;

Jugador :: Jugador(string nom, string ap, string sb, int niv, string pos){

	Nombre = nom;
	Apellido = ap;
	SobreNombre = sb;
	Nivel = niv;
	PosicionJugador = pos;
}


void Jugador :: setPosicionJugador(string pPosicionJugador){
	PosicionJugador = pPosicionJugador;
}

string Jugador :: getPosicionJugador(){
	return PosicionJugador;
}

Jugador :: ~Jugador(){

}

