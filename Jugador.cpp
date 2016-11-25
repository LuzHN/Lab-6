#include "Jugador.h"

#include <iostream>

using std::string;

Jugador :: Jugador(){


}


void Jugador :: setNombreJugador(string pNombreJugador){
	NombreJugador = pNombreJugador;
}

string Jugador :: getNombreJugador(){
	return NombreJugador;
}

void Jugador :: setApellidoJugador (string pApellidoJugador){
	ApellidoJugador = pApellidoJugador;
}

string Jugador :: getApellidoJugador(){
	return ApellidoJugador;
}

void Jugador :: setSobreNombreJugador (string pSobreNombreJugador){
	SobreNombreJugador = pSobreNombreJugador;
}

string Jugador :: getSobreNombreJugador (){
	return SobreNombreJugador;
}

void Jugador :: setNivelJugador(int pNivelJugador){
	NivelJugador = pNivelJugador;
}

int Jugador :: getNivelJugador(){
	return NivelJugador;
}

void Jugador :: setPosicionJugador(string pPosicionJugador){
	PosicionJugador = pPosicionJugador;
}

string Jugador :: getPosicionJugador(){
	return PosicionJugador;
}


