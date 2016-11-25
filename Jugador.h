#include <iostream>
#ifndef Jugador_h
#define Jugador_h

using std::string;




class Jugador{

	protected:
		string NombreJugador;
		string ApellidoJugador;
		string SobreNombreJugador;
		int NivelJugador;
		string PosicionJugador;
	
	public:
		Jugador();
		~Jugador();

		void setNombreJugador(string);
		string getNombreJugador();

		void setApellidoJugador(string);
		string getApellidoJugador();

		void setSobreNombreJugador(string);
		string getSobreNombreJugador();

		void setNivelJugador(int);
		int getNivelJugador();

		void setPosicionJugador(string);
		string getPosicionJugador();

};


#endif

