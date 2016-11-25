#include "Jugador.h"

#include <iostream>

using std::string;

Jugador :: Jugador(){


}


void Jugador :: setPosicionJugador(string pPosicionJugador){
	PosicionJugador = pPosicionJugador;
}

string Jugador :: getPosicionJugador(){
	return PosicionJugador;
}

Jugador :: ~Jugador(){

}

