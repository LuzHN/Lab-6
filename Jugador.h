#include <iostream>
#include "Persona.h"

#ifndef Jugador_h
#define Jugador_h


using std::string;




class Jugador : public Persona {

	protected:

		string PosicionJugador;
	
	public:
		Jugador();
		virtual ~Jugador();

		void setPosicionJugador(string);
		string getPosicionJugador();

};


#endif

