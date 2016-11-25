#include <iostream>
#include "Persona.h"

#ifndef Jugador_h
#define Jugador_h


using std::string;




class Jugador : public Persona {

	protected:

		string PosicionJugador;
	
	public:
		Jugador(string, string, string, int, string);
		virtual ~Jugador();

		void setPosicionJugador(string);
		string getPosicionJugador();

};


#endif

