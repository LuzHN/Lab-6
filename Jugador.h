#include <iostream>
#ifndef Jugador_h
#define Jugador_h

using std::string;




class Jugador{

	protected:
		string nombreJugador;
		string apellidoJugador;
		string sobrenombreJugador;
		int nivelJugador;
		string posicionJugador;
	
	public:
		Jugador();
		~Jugador();

		void setNombreJugador(string);
		string getNombreJugador();

		void setApellidoJugador(string);
		string getApellidoJugador(string);

		void setSobreNombreJugador(string);
		string getSobreNombreJugador();

		void setNivelJugador(int);
		int getNivelJugador();

		void setPosicionJugador();
		string getPosicionJugador();

};


#endif

